#include <iostream>
#include <string>
using namespace std;

int arr[10];
int table[3][5];

template <class T> void println(T s) {
  cout << s << endl;
}

template <class T> T len(T arr[]) {
  int len = 0;
  for (T i = 0; arr[i] != '\0' ; i++) {
    len++;
  }
  return len;
}

template <class T> void printarr(T arr[], T len) {
  for (int i = 0; i != len; i++) {
    cout << arr[i] << " ";
  }
  cout << '\n';
}

int main() {

  for (int i = 0; i < 10; i++)
    arr[i] = i;
  printarr(arr, 10);

  int arr[] = {10, 20, 30, 20, 5};
  printarr(arr, 5);

  int an[] {3,2,1,2};
  printarr(an, 4);

  for (int i = 0; i < 5; i++) {
    table[1][i] = i + 1;
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      cout <<  table[i][j];
    }
    cout << endl;
  }
  char ch[] = {'B','o','b','a','o','\0'};
  string teste = "testes";
  cout << "Array lenght: " << len(arr) << endl;
  cout << "Char length: " << teste.length();
  
  return 0;
}
