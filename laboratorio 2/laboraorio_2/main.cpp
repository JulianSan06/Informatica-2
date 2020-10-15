#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;
int pot(int exponente);
int imp (char *cadena, int longitud);
int lon (char *cadena, int longitud);
int copIn(char *cadena, int dig, int cont);
void imprimir_matriz(int **mariz, int n);
void intercepcion(int cuadrado1[4], int cuadrado2[4], int arregloC[4]);
void crear_matriz();
void imprimir_matriz2(int **arreglo);
void Intercambio(int **apuntador_arreglo, int **arreglo);

int **arreglo={NULL}, **apuntador_arreglo;
int main()
{
    int op= 9;
    while (op != 0){
        cout << "******Segunda practica******" << endl;
        cout << "ingrese 1 para ver el punto 1" << endl;
        cout << "ingrese 2 para ver el punto 2" << endl;
        cout << "ingrese 4 para ver el punto 4" << endl;
        cout << "ingrese 6 para ver el punto 6" << endl;
        cout << "ingrese 7 para ver el punto 7" << endl;
        cout << "ingrese 9 para ver el punto 9" << endl;
        cout << "ingrese 12 para ver el punto 12" << endl;
        cout << "ingrese 14 para ver el punto 14" << endl;
        cout << "ingrese 15 para ver el punto 15" << endl;
        cout << "ingrese 16 para ver el punto 16" << endl;
        cout << "ingrese 0 para salir" << '\n' << endl;
        cin >> op;
        switch (op) {
        case 1:{
            int valor = 0;
            cout << "ingrese un valor: ";
            cin >> valor;
            int array[10] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
            for(int i = 0; i!=10; i++){
                int div = array[i];
                if (valor/div != 0){
                    cout << array[i] << " : " << valor/div << endl;
                    valor = valor%div;
                }
                else{
                    cout << array[i] << " : " << 0 << endl;
                }
            }
            cout << "falto : " << valor << endl;
            break;
        }
        case 2:{
            char array[100] = "" ;
            srand(time(NULL));
            for(int i = 0; i != 100; i++){
                int vnum = 65+rand()%(90-65+1);
                array[i] = vnum;
                cout << array[i];
            }
            cout << endl;
            for(char j= 65; j <= 90; j++){
                int sum = 0;
                for(int i = 0; i != 100; i++){
                    if (array[i] == j){
                        sum += 1;
                    }
                }
                cout << j << " : " << sum << endl;
            }
            break;
        }
        case 4:{
            char pal;
            int num;
            int cont = 0;
            int dig;
            int sum = 0;
            int aux;

            cout << "ingrese el numero de digitos: " << endl;
            cin >> num;
            char array1[num];
            int array2[num];
            while(cont < num){
                cout << "ingrese un numero" << endl;
                cin >> pal;
                array1[cont] = pal;
                cont += 1;
            }

            for(int i = 0; i<cont; i++){
                dig = array1[i] - 48;
                array2[i] = dig;
            }

            for(int i = 0; i< cont; i++){
                aux = (array2[i]*pot(num));
                num -=1;
                sum += aux;

            }
            cout << sum/10 << endl;
            break;
        }
        case 6:{
            const int cons = 23;
            char pal[cons] ={'\0'*cons}, cop[cons] = {'\0'*cons};
            cout << "ingrese una palabra: ";
            cin >> pal;
            int L = lon(pal, cons);
            for(int i = 0; i<L; i++){
                if(pal[i]>90 && pal[i]<97){
                    cop[i] = pal[i];
                }
                else if(pal[i]>=97){
                    cop[i] = pal[i]-32;
                }
                else{
                    cop[i]=pal[i];
                }

            }
            cout << "original: ";
            imp(pal, L);
            cout << endl;
            cout << "Mayuscula: ";
            imp(cop, L);
            cout << endl;
            break;
        }
        case 7:{
            const int cons=23;
                char original[cons]={'\0'*cons}, copia[cons+1]={'\0'*cons};

                cout<<"Ingrese una cadena de caracteres que tenga como maximo "<< cons << " caracteres sin espacios: ";
                cin >> original;
                for(int i=0; i<cons; i++){
                    copia[i]=original[i];
                }
                copia[cons]='\0';
                cout << "Original: ";
                int l = imp( original, cons);
                int com1, com2;
                for(int i= 0; i<l; i++){
                    com1 = original[i];
                    for(int j = i+1; j< l; j++){
                        com2 = copia[j];

                        if(com1 == com2 && copia[j] != '\0'){
                            copia[i] = '\0';

                        }

                    }
                }
                cout <<". Sin repetir: ";
                imp(copia, l);
                cout << endl;
            break;
        }
        case 9:{
            const int dig = 100;
            char num[dig] ={'\0'*dig};
            cout << "ingrese un numero entero: ";
            cin >> num;

            int L = lon(num, dig);
            num[7] = '\0';
            int n = 0;
            cout << "ingrese el numero de particiones que hara en el arreglo: ";
            cin >> n;
            cout << "Original: ";
            for(int i = 0; i<L; i++){
                cout << num[i];
            }

            cout << endl;
            cout << "Suma: ";
            int num2[L];
            for(int i = 0; i<L; i++){
                num2[i]= num[i]-48;
            }

            int aux[n];
            int sum = 0, auxsum = 0;
            for(int i = L-1; i>0;){

                for(int j=0; j<n;j++){
                    aux[j] = num2[i];
                    i--;
                }
                for(int k = n-1; k!=-1;){           //corregir este for no suma las potencias hasta \0!
                    auxsum = (aux[k]*pot(k));
                    //pot1 +=1;
                    sum += auxsum;
                    k--;
                }


            }
            cout << sum << endl;;

            break;

        }
        case 12:{
            int **matriz;
            int n = 0, pos = 0;
            matriz = new int*[n];
            cout << "ingrese el numero de filas y columnas de la matriz: ";
            cin >> n;

            for(int i =0; i < n; i++){
                matriz[i] = new int[n];
            }

            cout << "\nDigitando elementos en la matriz: \n";
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout << "Digite un numero["<<i<<"]["<<j<<"]: ";
                    cin >> *(*(matriz+i)+j);
                }
            }

            imprimir_matriz(matriz, n);
            int const c = (n*n)+2;
            int sumas[c];
            for(int i=0; i<c; i++){
                *(sumas+i)=0;
            }

            //Sumas---------------------------------------------------------------------------------------

            //filas---------------------------------------------------------------------------------------

            for(; pos<n; pos++){
                for(int j=0; j<n; j++){
                    (*(sumas+pos))+=(*(*(matriz+pos)+j));
                }
            }

            //columnas------------------------------------------------------------------------------------
            for(int i=0; i<n; i++){  //itera en columnas
                for(int j=0; j<n; j++){  //itera en filas
                    (*(sumas+pos))+=(*(*(matriz+j)+i));
                }
                pos++;
            }

            //Diagonales----------------------------------------------------------------------------------

            for(int i=0; i<n; i++){  //itera en columnas y filas
                (*(sumas+pos))+=(*(*(matriz+i)+i));
            }
            pos++;

            int columna = n-1;
            for(int fila=0; fila<n; fila++){  //itera en columnas
                (*(sumas+pos))+=(*(*(matriz+fila)+columna));
                columna-=1;
            }

            //verificacion--------------------------------------------------------------------------------
            int i=0;
            bool e=true;
            for(; i<c and *(sumas+i)!='\0' ; i++){
                //cout << *(sumas+i) << endl;
                if (i>=1 and *(sumas+i)!=*(sumas)){
                    cout << "La matriz ingresada no genera un cuadrado magico\n" ;
                    e=false;
                    break;
                }
            }
            if (e==true)
                cout << "La matriz ingresada genera un cuadrado magico\n" ;



        break;
        }
        case 14:{

            cout << "ejecutando el problema 14: " << endl;
            crear_matriz();

            //imprimir la primera matriz(orginal)

            imprimir_matriz2(arreglo);

            //imprimir la tercera matriz(90°)
            Intercambio(apuntador_arreglo, arreglo);
            cout << "matriz rotada 90 grados: ";
            imprimir_matriz2(apuntador_arreglo);


            //imprimir la cuarta matriz (180°)
            Intercambio(arreglo, apuntador_arreglo);
            cout << "matriz rotada 180 grados: ";
            imprimir_matriz2(arreglo);


            //imprimir la tercera matriz(270°)
            Intercambio(apuntador_arreglo, arreglo);
            cout << "matriz rotada 270 grados: ";
            imprimir_matriz2(apuntador_arreglo);


            break;

        }
        case 15:{
            int cuadrado1[4], cuadrado2[4], arregloC[4];

            //el primer cuadrado
            for(int i=0; i < 4; i++){
                cout << "ingrese el elemento:  " << i <<  " del primer cuadrado: " << endl;
                cin >> cuadrado1[i];
            }

            //el segundo cuadrado
            for(int i=0; i < 4; i++){
                cout << "ingrese el elemento: " << i << " del segundo cuadrado: " << endl;
                cin >> cuadrado2[i];
            }

            intercepcion(cuadrado1, cuadrado2, arregloC);
            cout << "la intercepcion de los dos rectandulos es: {" ;
            for(int i = 0; i<4; i++){
                cout << arregloC[i];
                if(i !=4){
                    cout << ',';
                }
            }
            cout << '}' << endl;
            break;

        }
        case 16:{
            int n;
            long long int acumS=1, acumI=1;
            cout << "Ingrese un numero entero mayor a cero: ";
            cin >> n;
            if (n>0){
                for(int i=(n*2); i>1; i--){
                    acumS*=i;                    //(n*2)!
                }

                for(int i=n; i>1; i--){
                    acumI*=i;                       //n!
                }

                acumI*=acumI; //(n!*n!)
                cout <<  "Para una malla de " << n << "x" << n << " puntos hay " << acumS/acumI << " caminos.\n";

            }
            else
                cout << "El dato ingresado no cumple con los requerimientos\n";
            break;
        }
        default:{
            cout << "ingrese un numero valido o 0 para finalizar el programa: " << endl;
        }
        }
    }
    return 0;
}

int pot(int exponente){   //potencia
        int sum = 1;
        int base = 10;
        if(exponente == 0){
            sum = 1;
        }
        else{
            while(exponente >0){
                sum = sum*base;
                exponente -=1;
            }
    }
        return sum;
}

int imp (char *cadena, int longitud){  //imprime los caracteres de una cadena char y halla su longitud ejercicio 7
    int L=0;
    for (int c=0; c<longitud ; c++){
        if(cadena[c]!='\0'){
            cout << cadena[c] ;
            L+=1;
        }
    }
    return L;
}

int lon (char *cadena, int longitud){ //retorna la longitud de cadenas tipo char
    int L=0;
    for (int c=0; c<longitud ; c++){
        if(cadena[c]!='\0'){
            L+=1;
        }
    }
    return L;
}

void imprimir_matriz(int **matriz, int n){   //imprime la matriz con puntero doble del ejercicio 12
    cout <<"\nLa matriz  que usted ingreso es: \n" << endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << *(*(matriz+i)+j) << " ";
        }
        cout << endl;
    }
}

void intercepcion(int cuadrado1[4], int cuadrado2[4], int arregloC[4]){   // interce
    int *a = NULL, *b =NULL;
    //VERIFICACION DE CUAL ESTA A LA DERECHA
    if(cuadrado1[0] > cuadrado2[0]){
        a = cuadrado1;
        b = cuadrado2;
    }
    else{
        a = cuadrado2;
        b = cuadrado1;
    }

    //DOS PRIMERAS POSICIONES DEL ARREGLO INTERCEPCION
    if(*a > *b)
        arregloC[0] = *a;
    else
        arregloC[0] =*b;

    if(*(a+1) < *(b+1))
        arregloC[1] = *(a+1);
    else
        arregloC[1] =*(b+1);

    if(((*a)+(*(a+2)))>arregloC[0] && ((*(b+1))+(*(b+3)))>arregloC[1] && ((*a)+(*(a+2)))-arregloC[0]>0 && ((*(a+1))+(*(a+3)))-arregloC[1]>0){
        //cout << "(*a)+(*(a+2)): " << (*a)+(*(a+2)) << endl;
        //cout << "(*(b+1))+(*(b+3)): " << (*(b+1))+(*(b+3)) << endl;
        arregloC[2]=((*(b+2))- arregloC[0]);
        arregloC[3]=((*(b+3))- arregloC[1]);
    }


}

void crear_matriz(){
    arreglo=new int*[5]; //arreglo de matriz con la cantidad de 5 filas
    for(int i=0; i<5; i++){
        arreglo[i]=new int[5];
    }
    apuntador_arreglo=new int*[5]; //arreglo de matriz con la cantidad de 5 filas.
    for(int i=0; i<5; i++){
        apuntador_arreglo[i]=new int[5];
    }

    //INGRESO DE DATOS --------------------------------------------------------------------------------------------
    int numero=1;
    for(int f=0; f<5; f++){
        for(int c=0; c<5; c++){
            *(*(arreglo+f)+c)=numero;
            numero+=1;

        }
    }
}

void imprimir_matriz2(int **arreglo){
    cout << endl;
    for(int f=0; f<5; f++){
        for(int c=0; c<5; c++){
            cout << *(*(arreglo+f)+c);
            if ((*(*(arreglo+f)+c))/10>0)
                cout << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl << endl ;
}

void Intercambio(int **apuntador_arreglo, int **arreglo){
    for(int columna=0; columna<5; columna++){
        int c=0;
        for(int fila=4; fila>=0; fila--){
            *(*(apuntador_arreglo+columna)+c)=*(*(arreglo+fila)+columna);
            c++;
        }
    }
}






