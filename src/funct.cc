#include <iostream>
using namespace std;

void noRefer(int a, int b, int c) {
  a = 2;
  b = 2;
  c = 2;
}

void refer(int &a, int &b, int &c) {
  a = 3;
  b = 3;
  c = 3;
}

inline void concat(int x, int y, int z) { //inline tell the compiler to insert code instead of func call
  cout << "x:" << x << " y: " << y << " z: " << z << endl;  
}

void noFunction(int fear, int mindkiller); // rust custom types!
void into(int, int);


int main() {
  int x = 1, y = 2, z = 3;
  noRefer(x, y, z);
  concat(x, y, z);
  refer(x, y, z);
  concat(x, y, z);

  into(12, 15);
  
  return 0;
}

void into(int x, int y) {
  cout << x * y << endl;
}
