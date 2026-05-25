#include<iostream>
using namespace std;
void changeValue(int &num) {
  num = 50;
}
int main() {
  int value = 10;
  changeValue(value);  // Call the function and change the value to 50
  cout << value; 
  return 0;
}
//yesma k hunxa bhane & num ma value already assign hunxa bhane