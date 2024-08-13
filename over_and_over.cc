#include <iostream>
using namespace std;

template <class Teste>
Teste sum (Teste a, Teste b) {
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

  cout << sum (10, 20) << '\n';
  cout << sum (1.1, 1.2) << '\n';

  return 0;
}
