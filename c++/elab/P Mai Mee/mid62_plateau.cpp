#include<iostream>

const int plateau = 1;
const int swamp = 2;
const int nothing = -1;

int getStatus(int a[], int s[], int n, int i, int p = 0) {
  if (s[i] != 0) {
    return s[i];
  }
  int prev = a[i - 1];
  int curr = a[i];
  int next = a[i + 1];
  if (prev < curr) {
    if (next < curr) {
      s[i] = plateau;
      return plateau;
    }
    else if (next > curr) {
      s[i] = nothing;
      return nothing;
    }
    else {
      // next == curr
      s[i] = getStatus(a, s, n, i + 1, plateau);
      return s[i];
    }
  }
  else if (prev > curr) {
    if (next < curr) {
      s[i] = nothing;
      return nothing;
    }
    else if (next > curr) {
      s[i] = swamp;
      return swamp;
    }
    else {
      // next == curr
      s[i] = getStatus(a, s, n, i + 1, swamp);
      return s[i];
    }
  }
  // prev == curr
  else {
    if (next < curr) {
      if (p == plateau) {
        s[i] = plateau;
        return plateau;
      }
      else {
        s[i] = nothing;
        return nothing;
      }
    }
    else if (next > curr) {
      if (p == swamp) {
        s[i] = swamp;
        return swamp;
      }
      else {
        s[i] = nothing;
        return nothing;
      }
    }
    else {
      // next == curr
      s[i] = getStatus(a, s, n, i + 1, p);
      return s[i];
    }
  }
}

int main() {
  // 1 < n <= 1000
  int n;
  // area
  int a[1000] = {};
  // status
  int s[1000] = {};

  std::cin >> n;

  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }

  // the ends are unknown
  s[0] = nothing;
  s[n - 1] = nothing;

  for (int i = 1; i < n - 1; ++i) {
    getStatus(a, s, n, i);
  }

  int num_swamp = 0;
  int num_plateau = 0;
  for (int i = 0; i < n; ++i) {
    switch (s[i]) {
    case swamp:
      ++num_swamp;
      break;
    case plateau:
      ++num_plateau;
      break;
    case nothing:
      break;  
    default:
      throw "Should know everything";
    }
  }
  
  std::cout << num_plateau << ' ' << num_swamp << std::endl;

  return 0;
}
