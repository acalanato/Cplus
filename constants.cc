#import <iostream>

#define NAME "Adamastor"
#define SURN "Pitaco"

const double pi = 3.14159;
const char newline = '\n';

void name() {
  std::cout << NAME << SURN << std::endl;
}

void circle() {
  double r = 5.0;
  double circle;

  circle = 2 * pi *r;
  std::cout << circle;
  std::cout << newline;
}

void string_too() {
#include <string>
using namespace std;

  string first;
  first = "Starting";
  cout << first << endl;
  first = "Ending";
  cout << first << endl;
  
}

void var_dec() {
  int a = 5;
  int b(3);
  int c{2};
  int result;
  a = a + b;
  result = - c;
  std::cout << result;
}

int main() {
  int dec = 75;
  int oct = 0113;
  int hex = 0x4b;
  float pi = 3.14159;
  float avogadro = 6.02e23;
  float eCharge = 1.6e-19;
  float three = 3.0;
  string_too();
  circle();
  name();
}
