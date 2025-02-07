#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string getin() {
  cout << "Mention something";
  string input;
  getline (cin, input); // because cin will ignore input after spaces
  return input;
}

void convert() {
  string input;
  float price;
  int quant;
  
  cout << "Diga o preço: " << '\n';
  getline(cin, input);
  stringstream(input) >> price;
  cout << "Quantidade" << '\n';
  getline(cin, input);
  stringstream(input) >> quant;
  cout << "Total: " << price * quant << endl;
}

int main() {
  //cout << getin() << '\n';
  convert();
  return 0;  
}
