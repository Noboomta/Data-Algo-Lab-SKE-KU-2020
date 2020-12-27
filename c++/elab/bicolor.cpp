//
// Created by NoBoomTa on 12/26/2020.
//

#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while(cin >> n and n)
    {
        int m;
        vector<int> adj[n];

        cin >> m;
        for(int i = 0; i < m; ++i)
        {
            int a;
            int b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        queue<int> nodes;
        vector<int> color(n, -1);
        color[0] = 0;

        nodes.push(0);
        bool isBipartite = true;

        while(not nodes.empty() and isBipartite)
        {
            int u = nodes.front();
            nodes.pop();

            int size = adj[u].size();
            for(int i = 0; i < size; ++i)
            {
                int v = adj[u][i];

                if(color[v] == -1)
                {
                    color[v] = 1 - color[u];
                    nodes.push(v);
                }
                else if(color[v] == color[u])
                {
                    isBipartite = false;
                    break;
                }
            }
        }

        if(isBipartite)
            cout << "BICOLORABLE." << endl;
        else
            cout << "NOT BICOLORABLE." << endl;
    }

    return 0;
}