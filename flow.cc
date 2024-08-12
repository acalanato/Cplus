#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

string ternary(int a) {
  return a > 100 ? "maior que 100" : "menor que 100";
}

void simple(int x) {
  if (x == 100)
    cout << "x is 100";
}

void compound(int x) {
  if (x == 100)
    {
      cout << "x is";
      cout << x;
    }
}

void ifelse(int x) {
  if (x == 100)
    cout << "x is 100" << endl;
  else cout << "x is not 100" << endl;
}

void ifelselse(int x) {
  if (x > 0)
    cout << "x is positive" << endl;
  else if (x < 0)
    cout << "x is negative" << endl;
  else
    cout << "x is 0" << endl;
}

void whil(int x) {
  for (int i = x ; i > 0; --i) {
    cout << i << endl;
    this_thread::sleep_for(chrono::seconds(1));
  }
  cout << "puff!\n";
}

void _for(int x) {
  for (int n = x, i = 100; n!=i; ++n, --i) {
    cout << n << " " << i << endl;
  }
}

void dow() {
  string str;
  do {
    cout << "Enter text: ";
    getline(cin, str);
    cout << "You typed: " << str << '\n';
  } while (str != "goodbye");
}

string rangeBased(string str) {
  //string str {"Olár!"};
  for (char c: str) {
    cout << "[" << c << "]";
  }
  return str;
}

void jumpando(int n) {
 comeco:
  cout << n << ", ";
  n--;
  if (n>0) goto comeco;
  cout << "revolution baby!\n";
}

void swCase() {
  int opt;
  cout << "Chose a number between one and three:\n";
  cin >> opt;
  switch (opt) {
  case 1:
    cout << "One";
    break;
  case 2:
    cout << "Two";
    break;
  case 3:
    cout << "Three";
  }
  cout << endl << "What did you expected?" << endl;
}

int main() {
  /*
  ternary(1);
  simple(100);
  compound(50);
  ifelse(10);
  ifelselse(40);
  whil(5);
  _for(10);
  //dow();
  rangeBased("Oloco meu!");
  cout << endl;
  jumpando(5);
  */
  swCase();
  return 0;
}
