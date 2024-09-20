#include <iostream>
using namespace std;
int main()
{
int a,b;
  cin >> a;
  cin >> b;
  cout << "Arithmetic Operations:" << endl;
  cout << "Sum: " << (a + b) << endl;
  cout << "Difference: " << (a - b) << endl;
  cout << "Product: " << (a * b) << endl;
  if (b != 0) {
    cout << "Quotient: " << (a / b) << endl;
    cout << "Remainder: " << (a % b) << endl;
} 
  else {
    cout << "Quotient: Division by zero is not allowed" << endl;
    cout << "Remainder: Division by zero is not allowed" << endl;
}
  
  a++;
  b--;
  cout << "Increment and Decrement Operations:" << endl;
  cout << "Incremented first integer: " << a << endl;
  cout << "Decremented second integer: " << b << endl;
  a += b;
  cout << "Compound Assignment Operations:" << endl;
  cout << "After += operation: " << a << endl;
  a -= b;
  cout << "After -= operation: " << a << endl;
  a *= b;
  cout << "After *= operation: " << a << endl;
  cout << "Bitwise Shift Operations:" << endl;
  cout << "First integer left shifted by 1: " << (a << 1) << endl;
  cout << "Second integer right shifted by 1: " << (b >> 1) << endl;

return 0;
}