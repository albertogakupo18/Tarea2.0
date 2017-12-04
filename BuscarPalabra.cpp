#include <iostream>
#include <string.h>

using namespace std;
int buscar(char texto[200], char palabra[20]);

int main()
{
    int posicion;
	char palabra[20],texto[200]={"tobira hirakeba nejireta hiru no yoru kinou dou yatte kaetta karada dake ga tashika ohayou kore kara mata maigo no tsudzuki minareta shiranai keshiki no naka de mou dame "};
	cout << texto << endl;
	cout << "ingresa la palabra a buscar " << endl;
	cin >> palabra;
	posicion=buscar(texto,palabra);
	if(posicion==-1)
		cout << "la palabra no existe\n";
	else
		cout << "la palabra empieza en la posicion " << posicion << endl;
	return 0;
}
int buscar(char texto[200], char palabra[20])
{
	int cont=0;
    for (int i=0;i<strlen(texto);i++)
    {
        if(palabra[cont]==texto[i])
        {
            cont++;
            if(cont==strlen(palabra))
                return (2+i-cont);
        }
        else cont=0;
    }
    return -1;
}
