#include <iostream>
#include <vector>

int a[10000][10000] = {};
std::vector<std::pair<int, int>> fire_starter;

void printArray(int n) {
  for (int r = 0; r < n; ++r) {
    for (int c = 0; c < n; ++c) {
      std::cout << a[r][c] - 1 << ' ';
    }
    std::cout << '\n';
  }
}

inline int getDistance(int i, int j, int r, int c) {
  return abs(i - r) + abs(j - c);
}

int main() {
  // 1 <= n <= 10000
  // a[n][n]
  int n;
  // 1 <= k <= 10
  int k;

  int r, c;

  std::cin >> n >> k;

  for (int i = 0; i < k; ++i) {
    std::cin >> r >> c;

    fire_starter.push_back(std::make_pair(r - 1, c - 1));
    a[r - 1][c - 1] = 1;
  }

  int max = 0;
  for (int r = 0; r < n; ++r) {
    for (int c = 0; c < n; ++c) {
      int min = 10001;
      for (auto pair : fire_starter) {
        int res = getDistance(pair.first, pair.second, r, c);
        if (res < min) {
          min = res;
        }
      }
      if (min > max) {
        max = min;
      }
    }
  }
  std::cout << max << std::endl;
}
