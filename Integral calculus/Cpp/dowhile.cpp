#include<iostream>

using namespace std;

int main ()
{
  int i = 10;
  do // Ejecuta y luego cumple el código.
  {
      cout << i << endl;
      i++;
  }while(i <= 5);
  cin.get();
  return 0;
}
