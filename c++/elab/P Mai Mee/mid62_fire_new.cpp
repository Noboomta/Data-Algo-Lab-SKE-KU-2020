#include <iostream>
#include <vector>

int a[1000][1000] = {};
std::vector<std::pair<int, int>> fire_starter;

std::vector<std::pair<int, int>> burn(int n, int t = 0) {
  std::vector<std::pair<int, int>> new_to_check;
  for (auto pairs : fire_starter) {
    int r, c;
    r = pairs.first;
    c = pairs.second;

    if (a[r][c] == t + 1) {
      if (r > 0) {
        if (a[r - 1][c] == 0) {
          a[r - 1][c] = t + 2;
          new_to_check.push_back(std::make_pair(r - 1, c));
        }
      }
      if (c > 0) {
        if (a[r][c - 1] == 0) {
          a[r][c - 1] = t + 2;
          new_to_check.push_back(std::make_pair(r, c - 1));
        }
      }
      if (c < n - 1) {
        if (a[r][c + 1] == 0) {
          a[r][c + 1] = t + 2;
          new_to_check.push_back(std::make_pair(r, c + 1));
        }
      }
      if (r < n - 1) {
        if (a[r + 1][c] == 0) {
          a[r + 1][c] = t + 2;
          new_to_check.push_back(std::make_pair(r + 1, c));
        }
      }
    }
  }/*
  for (int r = 0; r < n; ++r) {
    for (int c = 0; c < n; ++c) {
      // 4 1
      if (a[r][c] == t + 1) {

        if (r > 0) {
          if (a[r - 1][c] == 0) {
            a[r - 1][c] = t + 2;
            burned = true;
          }
        }
        if (c > 0) {
          if (a[r][c - 1] == 0) {
            a[r][c - 1] = t + 2;
            burned = true;
          }
        }
        if (c < n - 1) {
          if (a[r][c + 1] == 0) {
            a[r][c + 1] = t + 2;
            burned = true;
          }
        }
        if (r < n - 1) {
          if (a[r + 1][c] == 0) {
            a[r + 1][c] = t + 2;
            burned = true;
          }
        }

      }
    }
  }*/
  return new_to_check;
}

void printArray(int n) {
  for (int r = 0; r < n; ++r) {
    for (int c = 0; c < n; ++c) {
      std::cout << a[r][c] << ' ';
    }
    std::cout << '\n';
  }
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

  int t = 0;
  while (!fire_starter.empty()) {
    for (auto e : fire_starter) {
      std::cout >> e.first >> e.second >> ' ';
    }
    std::cout >> '\n';
    fire_starter = burn(n, t);
    ++t;
  }

  std::cout << t - 1 << std::endl;
}
