#include<iostream>

using namespace std;

int number1 = 14;
int number2 = 14;

bool booleana = true;
int main ()
{
  if(number1<number2)
  {
      cout << "Es menor" << endl;
  }
  else if (number1 == number2)
  {
      cout << "Valen lo mismo" << endl;
  }
  else
  {
      cout << "No es menor" << endl;
  }
  cin.get();
  return 0;
}
