#include <iostream>

using namespace std;
int contador = 0;
int main()
{
    for(int i = 0; i < 100; i +=4){
        cout << 'iteracion' << contador ++<< i << endl;
    }
    system("PAUSE");
    return 0;
}
