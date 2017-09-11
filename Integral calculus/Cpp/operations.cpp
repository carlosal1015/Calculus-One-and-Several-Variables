#define sumar(a,b) a+b //sustitution
#define multiplicar(a,b) a*b
#define dividir(a,b) a/b
#define mod (a,b) a%b

#include <iostream>

int number1 = 2;
int number2 = 4;

int suma;
int mult;
int divid;
using namespace std;

int main ()
{
    suma = sumar(number1,number2);
    mult = multiplicar(number1,number2);
    divid = dividir(number2,number1);
    modulo = mod(number2,number1);
    
    cout << "La suma es: " << suma << endl;
    cout << "El producto es: " << mult << endl;
    cout << "El cociente es: " << divid << endl;
    cout << "El mod es: " << modulo << endl;
    
    cin.get();
    return 0;
}
