#include <iostream>
using namespace std;

int arr [32];

template <class T> void println(T s) {
  cout << s << endl;
}

template <class T> void printarr(T arr[], T len) {
  //int len = sizeof(arr);
  
  for (int i = (len - 1); i > 0; i--) {
    cout << arr[i];
  }
  cout << '\n';
}

int main() {
  for (int i = 0; i < 10; i++)
    arr[i] = i;
  printarr(arr, 10);
  return 0;
}
