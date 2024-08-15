#include <iostream>
using namespace std;

template <class T> void println(T s) {
  std::cout << s << endl;
}

template <class T> T input(T s) {
  std::cin >> s;
  return s;
}

int main() {
  char name[20];
  input(name);
  println(name);
  return 0;
}
