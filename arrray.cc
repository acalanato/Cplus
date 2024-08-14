#include <iostream>
using namespace std;

int arr [10];

template <class T> void println(T s) {
  cout << s << endl;
}

template <class T> void printarr(T arr[], T len) {
  //int len = sizeof(arr);
  
  for (int i = 0; i != len; i++) {
    cout << arr[i] << " ";
  }
  cout << '\n';
}

int main() {
  for (int i = 0; i < 10; i++)
    arr[i] = i;
  printarr(arr, 10);
  int arr[] = {10, 20, 30, 20, 10};
  printarr(arr, 5);
  return 0;
}
