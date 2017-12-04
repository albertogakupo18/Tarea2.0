#include <iostream>

using namespace std;
int menu();
int factorial(int n);
int fibonacci(int l);

int main()
{
    int m;
    do
    {
        m=menu();
        switch(m)
        {
        case 1:
            int numero;
            cout << "Introduzca un numero " << endl;
            cin >> numero;
            cout << "El factorial de " << numero << " es " << factorial(numero) << endl;
            break;
        case 2:
            int resultado=0,limite=0;
            cout << "cuantas veces vas a repetir la serie " << endl;
            cin >> limite;
            resultado=fibonacci(limite);
            cout << "el resultado es " << resultado << endl;
            break;
        }
    }
    while (m!=0);
    return 0;
}
int menu()
{
    int m;
    cout << "1. Factorial" << endl
        << "2. Fibonacci " << endl
        << "0. Salir " << endl;
    cin >> m;
    return m;
}
int factorial(int n)
{
    int f;
    if (n==1)
        return 1;
    else
         return n*factorial(n-1);
}
int fibonacci(int n)
{
   if (n==0||n==1)
      return 1;
   else
      return fibonacci(n-1)+fibonacci(n-2);
}
