#include <iostream>
using namespace std;


template <class T>
void println(T s) {
  cout << s << endl;
}

int main() {
  string a = "Fui declarada no escopo exterior";
  {
    string b = "Fu declarada no escopo interior";
    println(b); //statements inside curled brackets seems to run first
  }
  println(a);
  return 0;
}
