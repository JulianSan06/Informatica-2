/* imprimir los numeros pares entre 0 y 100*/
#include <iostream>

using namespace std;

int main()
{
    float med;
    float pro;
    float cont = 0;
    while (true) {
        cout << "Ingrese una medida de calidad del aire en un rangode 0-100 (-1 para terminar) -> " << endl;
        cin >> med;
        if (med == -1) {

            pro = pro/cont;
            cout << "El promedio de la calidad es = " << pro << endl;
        }
        pro = med + pro;
        cont += 1;


    }

    return 0;
}
