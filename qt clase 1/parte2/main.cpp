#include <iostream>

using namespace std;
char letra = 'A';
int cont = 1;
int main()
{
    for(int i=6; i>0; i--)  //i es el numero de columnas y letras diferentes
    {
        letra = 'A';
        for(int j=0; j<i; j++)
        {
            cout << letra;
            letra +=1;
        }
        for(int j=0; j<cont; j++) //genera los espacios del patron
            cout << '*';
        cont += 2;

        letra = 'A'+i-1;
        for (int j=0; j<i; j++)
        {
            cout << letra;
            letra -=1;
        }
        cout << endl;
    }
    return 0;
}
