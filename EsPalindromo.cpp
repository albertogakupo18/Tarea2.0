#include <iostream>
#include <string.h>

using namespace std;
int espalindromo(char c[50],int i,int f);

int main()
{
    char c[50];
    int resultado,largo;
    cout << "Ingresa la palabra " << endl;
    cin.getline(c,50);
    largo=strlen(c)-1;
    resultado=espalindromo(c,0,largo);
    if(resultado==1)
    {
        cout << "La palabra es palindromo " << endl;
		return 0;
	}
	else
		cout << "La palabra no es palindromo " << endl;
    return 0;
}
int espalindromo(char c[50],int i,int f)
{
	if(i<f)
	{
		if(c[i]==' ')
			return espalindromo(c,++i,f);
		else if(c[f]==' ')
			return espalindromo(c,i,--f);
		else if(c[i]==c[f])
			return espalindromo(c,++i,--f);
		else
			return 0;
	}
	else
		return 1;
}
