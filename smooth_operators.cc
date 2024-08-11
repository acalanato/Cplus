#include <iostream>

int tf() {
  std::cout << (7 == 5);
  std::cout << (5 < 4);
  std::cout << (3 != 2);
  std::cout << (6 >= 6);
  std::cout << (5 < 5);
  // ! not
  // && and
  // || or
  int test = 4 > 5 ? 1 : 0;
  int an = 7 > 8 && 8 < 9 ? 0 : 1;
  return 7 == 8 ? 1: 0;
}

void assign() {
  int x, y, z;
  x = 100;   
  y = x;
  z = y = x;
  z = x * y;
  x = y - z;
  y = z / x;
  z = x * y;
  x = y % z;
  std::cout << "x: " << x << "y: " << y << "z: " << z << std::endl;
}

int incrDecr() {
  int x = 0;
  ++x;
  x += 1;
  x= x + 1;
  return x;
}

int main() {
  assign();
  std::cout << incrDecr() << std::endl;
  tf();
}
