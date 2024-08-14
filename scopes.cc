#include <iostream>
#include <string>
using namespace std;


template <class T>
void println(T s) {
  cout << s << endl;
}

int main() {
  println("Fui declarada no escopo exterior");
  {
    println("Fui declarada no escopo interior");
    {
      println("E eu no interior do escopo interior");
    }
  }
  return 0;
}
