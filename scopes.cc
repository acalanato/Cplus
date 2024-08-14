#include <iostream>
#include <string>
using namespace std;

namespace exterior {
  string a;
}

int zero;

template <class T>
void println(T s) {
  cout << s << endl;
}

int main() {
  exterior::a = "";
  int any;
  println("Fui declarada no escopo exterior");
  {
    println("Fui declarada no escopo interior");
    {
      println("E eu no interior do escopo interior");
    }
  }
  println(zero);
  println(any); // tut must be outdated
  return 0;
}
