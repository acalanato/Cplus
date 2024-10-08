#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

template <class T> void println(T s) {std::cout << s << endl;}

void point_add(int* start, int* stop) {
  int * current = start;
  while (current != stop) {
    ++(*current);
    ++current;
  }
}

void print_all(const int *start, const int *stop) {
  const int *current = start;
  while (current != stop) {
    println(current);
    ++current;
  }
}


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

  int num[] = {10, 20, 30};
  point_add(num, num+3);
  println("Pointers as arguments:");
  print_all(numbers, numbers+3);
  
  return 0;
}
