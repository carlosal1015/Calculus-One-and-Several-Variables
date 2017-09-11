#include<iostream>

using namespace std;

int main ()
{
    char c[6]
    c[0] = '¡'
    c[1] = 'H';
    c[2] = 'o';
    c[3] = 'l';
    c[4] = 'a';
    c[5] = '!';
    
    for (int i=0; i<6; i++)
    {
        cout << c[i] << endl;
    }
    cin.get();
    return 0;
}
