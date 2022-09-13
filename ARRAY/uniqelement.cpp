#include <iostream>
using namespace std;

int main() {

  int arr[] = {1,1,3,2,4,2,3};
  int size = sizeof(arr)/sizeof(int);
  int result = 0;

  for(int i = 0 ; i < size; i++)
    result = result xor arr[i];
  
  cout << "Number occurs once: " << result;

  return 0;
}