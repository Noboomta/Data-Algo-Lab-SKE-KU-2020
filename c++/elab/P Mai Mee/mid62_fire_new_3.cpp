#include <iostream>
#include <queue>
#define MAX 10000

int field[MAX][MAX] = {};
std::queue<std::pair<int, int>> to_burn;

int main() {
  // 1 <= n <= 10,000; 1 <= k <= 10
  int n, k;

  std::cin >> n >> k;

  for (int i = 0; i < k; ++i) {
    int r, c;
    std::cin >> r >> c;
    field[r - 1][c - 1] = 1;
    to_burn.push(std::make_pair(r - 1, c - 1));
  }

  while (!to_burn.empty()) {
    int r, c;
    r = to_burn.front().first; c = to_burn.front().second;
    to_burn.pop();
    if (r - 1 >= 0) {
      int adj = field[r - 1][c];
      if (adj == 0) {
        field[r - 1][c] = field[r][c] + 1;
        to_burn.push(std::make_pair(r - 1, c));
      }
    }
    if (r + 1 < n) {
      int adj = field[r + 1][c];
      if (adj == 0) {
        field[r + 1][c] = field[r][c] + 1;
        to_burn.push(std::make_pair(r + 1, c));
      }
    }
    if (c - 1 >= 0) {
      int adj = field[r][c - 1];
      if (adj == 0) {
        field[r][c - 1] = field[r][c] + 1;
        to_burn.push(std::make_pair(r, c - 1));
      }
    }
    if (c + 1 < n) {
      int adj = field[r][c + 1];
      if (adj == 0) {
        field[r][c + 1] = field[r][c] + 1;
        to_burn.push(std::make_pair(r, c + 1));
      }
    }
    if (to_burn.empty()) {
      std::cout << field[r][c] - 1 << std::endl;
    }
  }
  /*
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      std::cout << field[i][j] << ',';
    }
    std::cout << '\n';
  }*/

  return 0;
}
