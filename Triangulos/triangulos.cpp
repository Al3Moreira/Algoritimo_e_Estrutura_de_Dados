#include <iostream>
#include <locale>

using  namespace std;

int main ()
{
    setlocale(LC_ALL,"portuguese");
    float a,b,c;
    cout << "Digite as medidas do tri�ngulo: "; cin >>a >>b >>c;
    if (a==b && b==c && c==a)
        cout << "Este tri�ngulo �  EQUILATERO!!";
    else 
        if (a==b || b==c || c==a)
            cout << "Este tri�ngulo �  IS�CELES!!";
        else 
            cout << "Este tri�ngulo � ESCALENO!!";
    
    return 0;
}