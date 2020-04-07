/*
Calculate the factorial of the number enter by the user
*/

#include <iostream>

using namespace std;

int main()
{
  int num{};
  unsigned int fact{1}, original{};

  cout << "Enter the number: ";
  cin >> num;

  if(num < 0)
  {
    cout << "No factorial for negative number" << endl;
  }
  else if (num == 0)
  {
    cout << num << "! = 1" << endl;
  }
  else
  {
    original = num;
    while(num >= 1)
    {
      fact = fact * num--;
    }
    cout << original << "! = " << fact << endl;
  }

  return 0;
}
