/*
Add two number enter by user
*/

#include <iostream>

using namespace std;

int main()
{
  int num1{}, num2{}, sum{};

  cout << "Enter the two number: "
  cin >> num1 >> num2;

  sum = num1 + num2;

  cout << "Sum of " << num1 << " + " << num2 << " = " << sum <<endl;
  return 0;
}
