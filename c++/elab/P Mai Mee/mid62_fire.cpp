#include <iostream>

int a[10000][10000] = {};

bool burn(int n, int t=0) {
  bool burned = false;
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
  }
  return burned;
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
    a[r - 1][c - 1] = 1;
  }

  int t = 0;
  bool burned = false;
  while (true) {
    burned = burn(n, t);
    if (burned) {
      ++t;
    }
    else {
      break;
    }
  }

  std::cout << t << std::endl;
}
