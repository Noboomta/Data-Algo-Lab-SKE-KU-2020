#include <iostream>
#include <list>

int main() {
  // 1 <= n <= 50,000
  int n;
  // 1 <= m <= 200,000
  int m;
  int t;
  int x;

  std::list<int> lst;
  std::list<int>::iterator angel;

  std::cin >> n >> m;

  for (int i = 0; i < n; ++i) {
    lst.push_back(0);
  }

  angel = lst.begin();

  for (int i = 0; i < m; ++i) {
    std::cin >> t;
    switch (t) {
    case 0:
      angel = lst.begin();
      break;
    case 1:
      angel++;
      break;
    case 2:
      angel++;
      lst.insert(angel, 0);
      angel--;
      angel--;
      break;
    case 3:
      std::cin >> x;
      *angel += x;
      break;
    default:
      throw "Should not be this type";
    }
  }

  for (auto elem : lst) {
    std::cout << elem << ' ';
  }
  std::cout << std::endl;

  return 0;
}
