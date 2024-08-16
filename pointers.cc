#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

template <class T> void println(T s) {std::cout << s << endl;}

string name = "Endereço";

int main() {
  int age = 42;
  auto reference = &name;
  auto dereference = *reference;

  int number = 12345;
  char character  = 'o';
  double fnumber = 12.34;

  int * Number = &number;
  char * Character = &character;
  double * Fnumber = &fnumber;

  println(Number);
  println(Character);
  println(Fnumber);

  cout << &name << '\n';
  cout << name << '\n';
  cout << "reference: " << reference << endl;
  cout << "dereference: " << dereference << endl;

  println("Mixing arrays and pointers");

  int numbers[10];
  int * a;
  a = numbers; *a = 10;
  a++; *a = 20;
  a = &numbers[4]; *a = 20;
  a = numbers; *(a+5) = 20;
  for (int i = 0; i < 10; i++) {
    println(numbers[i]);
  }
  return 0;
}
