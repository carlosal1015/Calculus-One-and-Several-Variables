#include<iostream>

using namespace std;

bool compare;

int number1, number2, number3, number4;

int main ()
{
  number1 = 12;
  number2 = 20;
  number3 = 4;
  number4 = 13;
  compare = (number4 > number1 || number3 > number2);
  cout << compare << endl;
  cin.get();
  return 0;
}
