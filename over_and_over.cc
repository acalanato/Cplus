#include <iostream>
using namespace std;

template <class T>
T sum (T a, T b) {
  T result;
  result = a + b;
  return result;
}

template <class Teste>
Teste suma (Teste a, Teste b) {
  return a + b;
}

int operate (int a, int b) {
  return (a * b);
}

double operate (double a, double b) {
  return (a / b);
}

int sum (int a, int b) {
  return a + b;
}

double sum (double a, double b) {
  return a + b;
}

int main () {

  cout << sum<int>(14,16) << '\n';
  int x=5,y=2;
  double n=5.0,m=2.0;
  cout << operate (x,y) << '\n';
  cout << operate (n,m) << '\n';

  cout << suma (10, 20) << '\n';
  cout << suma (1.1, 1.2) << '\n';

  int i=5, j=6, k;
  double f=2.0, g=0.5, h;
  k=sum<int>(i,j);
  h=sum<double>(f,g);
  cout << k << '\n';
  cout << h << '\n';

  return 0;
}
