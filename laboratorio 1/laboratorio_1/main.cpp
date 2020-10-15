#include <iostream>

using namespace std;
int pot(int base, int exponente){   //potencia ejercicio sisas
        int sum = 1;
        if(base == 1){
            sum = 1;
        }
            while(exponente !=0){
                sum = sum*base;
                exponente -=1;
            }

        return sum;
    }

bool primo(int p){     //verificar que sea un primo ejercicio 13
    for(int i = 2; i <= p/2; i++){
        if(p%i == 0)
            return false;
    }
    return true;
}

bool verficarmes(int mes){  //funcion de verficiacion de mes ejercicio 3
    if(mes <= 12 and mes >= 1)
        return true;
    else
        return false;
}
void verificardia(int dia, int mes){   // verificacion de dia ejercicio 3
    if (mes == 1 or mes == 3 or mes == 5 or mes == 7 or mes == 8 or mes == 10 or mes == 12){
        if (dia == 31)
            cout << dia << " es una fecha valida" <<endl;
        else
            cout << dia << " es una fecha invalida" <<endl;
    }
    else if (mes == 4 or mes == 6 or mes == 9 or mes == 11){
        if (dia != 30)
            cout << dia << " es una fecha valida" <<endl;
        else
            cout << dia << " es una fecha invalida" <<endl;
    }
    else if(mes == 2){
        if(dia <= 29)
            cout << dia << " posible anio bisiesto" <<endl;
        else
            cout << dia << " es una fecha invalida" <<endl;

    }
}

int invertir(int inverso){                // Funciones para el ejercicio 14
    int respuesta = 0;
    while(inverso > 0){
        respuesta = respuesta + (inverso % 10);
        respuesta = respuesta * 10;
        inverso = inverso/10;
    }
    return respuesta /10;
}
bool esPalindromo(int inverso){
    if (inverso == invertir(inverso)){
        return true;}
     else{
        return false;}
}


int divisores(int n){  //Funcion para el numero de divisires del ejercicio 17
    int cont = 0;
    int d = 1;
    while (d != n){
        if(n%d == 0){
            cont +=1;
        }
        d +=1;
    }
    return cont;
}


int main()
{
    int op= 9;
    while (op != 0){
        cout << "******Primera practica******" << endl;
        cout << "ingrese 2 para ver el punto 2" << endl;
        cout << "ingrese 3 para ver el punto 3" << endl;
        cout << "ingrese 5 para ver el punto 5" << endl;
        cout << "ingrese 7 para ver el punto 7" << endl;
        cout << "ingrese 8 para ver el punto 8" << endl;
        cout << "ingrese 9 para ver el punto 9" << endl;
        cout << "ingrese 11 para ver el punto 11" << endl;
        cout << "ingrese 13 para ver el punto 13" << endl;
        cout << "ingrese 14 para ver el punto 14" << endl;
        cout << "ingrese 17 para ver el punto 17" << endl;
        cout << "ingrese 0 para salir" << '\n' << endl;
        cin >> op;
        switch (op) {
        case 2:{
            cout <<"ejecutando el segundo punto... \n";
            int valor = 0;
            cout << "ingrese un valor: " << endl;
            cin >> valor;
            int Vb = 0;
            int res = 0;
            if(valor/50000 == 0)
            {
                res = res +(valor % 50000);
                cout << "50000: " << '0' << endl;
            }
            else {
                    Vb = valor/50000;
                    cout << " 50000: " << Vb << endl;
                    res = res + (valor%50000);
                }

            if(res/20000 == 0){
                res = res % 20000;
                cout << "20000: " << '0' << endl;
            }
            else{
                Vb = res/20000;
                cout << "20000: " << Vb << endl;
                res = res % 20000;
            }
            if(res/10000 == 0){
                res = res % 10000;
                cout << "10000: " << '0' << endl;
            }
            else{
                Vb = res/10000;
                cout << "10000: " << Vb << endl;
                res = res % 10000;
            }

            if(res/5000 == 0 ){
                cout << "5000: " << '0' << endl;
                res = res % 5000;
            }
            else{
                Vb = res/5000;
                cout << "5000: " << Vb << endl;
                res = res % 5000;
            }
            if(res/2000 == 0){
                cout << "2000: " << '0' << endl;
                res = res % 2000;
            }
            else{
                Vb = res/2000;
                cout << "2000: " << Vb << endl;
                res = res % 2000;
            }

            if(res /1000 ==0){
                cout << "1000: " << '0' << endl;
                res = res % 1000;
            }
            else{
                Vb = res/1000;
                cout << "1000: " << Vb << endl;
                res = res % 1000;
            }
            if(res/500 == 0){
                cout << "500: " << '0' << endl;
                res = res % 500;
            }
            else{
                Vb = res/500;
                cout << "500: " << Vb << endl;
                res = res % 500;
            }
            if(res/200 == 0){
                cout << "200: " << '0' << endl;
                res = res % 200;
            }
            else{
                Vb = res/200;
                cout << "500: " << Vb << endl;
                res = res % 200;
            }
            if(res / 100 == 0){
                cout << "100: " << '0' << endl;
                res = res % 100;
            }
            else{
                Vb = res/100;
                cout << "100: " << Vb << endl;
                res = res % 100;
            }
            if(res/ 50 == 0){
                cout << "50: " << '0' << endl;
                res = res % 50;
            }

             else{
                Vb = res/50;
                cout << "50: " << Vb << endl;
                res = res % 50;

            }
            cout << "falto : " << res << '\n' << endl;
            break;
       }
        case 3:{
            cout <<"ejecutando el tercer punto... \n";
            int mes, dia;
            cout << "ingrese un mes: ";
            cin >> mes;
            if(verficarmes(mes) == true){
                cout<< "ingrese un dia: ";
                cin >> dia;
                cout << mes << '/';
                verificardia(dia, mes);
            }
            else{
                cout << mes << " mes invalido" << endl;
            }
            break;
        }
        case 5:{
            cout <<"ejecutando el quinto punto... \n";
            int N,esp,ast,cont;
            cout << "Ingrese un numero impar: ";
            cin >> N;
            cont=0;
            ast=1;
            esp=(N-1)/2;
            if(N%2 == 1){
                while(ast <= N){
                    for(;esp != cont; cont++){
                        cout << ' ';
                    }
                    cont = 0;
                    for(;ast!=cont;cont++){
                        cout << '*';
                    }
                    cont = 0;
                    for(;esp!=cont; cont++){
                        cout << ' ';
                    }
                    cout <<"\n";
                    esp -= 1;
                    ast +=2;
                    cont = 0;

                }
                esp += 2;
                ast -=4;
                while(esp <= ((N-1)/2)){


                    for(;esp != cont; cont++){
                        cout << ' ';
                    }
                    cont = 0;
                    for(; ast != cont; cont++){
                        cout <<'*';
                    }
                    cont = 0;
                    for(;esp!=cont; cont++){
                        cout << ' ';
                    }
                    ast -=2;
                    esp +=1;
                    cont =0;
                    cout << "\n";
                }



            }
            else
                cout << "valor invalido, reinicie el programa e introduzca un numero impar.\n";
            cout << endl;
                    break;
        }
        case 7:{
            cout <<"ejecutando el septimo punto... \n";
            cout << "ingrese un numero entero mayor que 0: ";
            int n, acum, A, B, acumA, acumB;
            bool E;
            cin >> n;
            if(n>0){
                E= false;
                acum = 0;
                acumA = 0;
                acumB = 0;
                A = 1;
                B = 1;
                while(A < n or B < n){ // revisar que ni a ni b sean mayores que n
                    if(E== false){
                        B= B+A;
                        E = true;
                    }
                 else{ //
                        A = A+B;
                        E = false;
                    }
                 if( A >=n or B >= n){
                     break;
                 }
                 if( A%2 == 0 and acumA == 0){
                     acum += A;
                     acumA = 2;
                 }
                 else{
                     if(B%2 == 0 and acumB == 0){
                         acum += B;
                         acumB = 2;
                     }

                 }
                 if(acumA != 0 or acumB !=0){
                     if(acumB != 0){
                         acumB -= 1;
                     }
                     else
                         acumA -= 1;
                 }
                }
            cout << "el resultado de la suma es: " << acum << endl;
            }
        else
                cout << "ingrese un numero entero y positivo. \n";

            break;
        }
        case 8:{
            cout <<"ejecutando el octavo punto... \n";
            int  a, b, c, sum = 0, acum1 = 0, acum2 = 0;
            cout << "ingrese un numero A: ";
            cin >> a;
            cout << "ingrese un numero B: ";
            cin >> b;
            cout << "ingrese un numero C que sea mayor o igual a A y B: ";
            cin >> c;
            for(int i = 1; i*a < c; i++ ){       //sumatoria para los multiplos de A
                if(a*i < c){
                    cout << a*i << '+';
                    acum1 = acum1 + a*i;
                }
            }
            for(int i = 1; i*a < c; i++){        //sumatoria de los muliplos de B
                if(b*i < c){
                    if(b*i-c > b){
                        cout << b*i << '+';
                    }
                    else{
                        cout << b*i;
                    }
                    acum2 = acum2 + b*i;
                }
            }
            sum = acum1 + acum2;
            cout << '=' << sum << endl;
            break;
        }
        case 9:{
            cout <<"ejecutando el noveno punto... \n";
            int n, aux;
            int sum = 0; //suma de los digitos
            cout << "ingrese un numero: ";
            cin >> n;
            while(n>0){
                aux = n%10;
                n= n/10;
                sum = sum + pot(aux, aux);

                }
            cout << "el resultado de la suma es: " << sum << endl;
            break;
            }
        case 11:{
            cout <<"ejecutando el undecimo punto... \n";
            int N, cont=0, aux;
            cout << "Ingrese un numero entero positivo: " ;
            cin >> N;
            bool V = false;
            if(N > 0){
                while(V == false){
                   cont += 1;
                   aux = 0;
                   for(int i=1; i <= N; i++){
                       if(cont%i == 0)
                           aux += 1;
                   }
                   if(aux == N)
                       V = true;

                }
            }
            else
                cout << "valor invalido, intentelo de nuevo \n" << endl;

            cout << "el minimo comun multiplo es: " << cont << endl;

            break;
        }
        case 13:{
            cout <<"ejecutando el decimotercer punto... \n";
            cout << "ingrese un numero entero y positivo: ";
            int n, sum = 0;
            cin >> n;
            for(int i = 2; i < n; i++ ){
                if (primo(i)==true)
                    sum += i;
            }
            cout << "el resultado de la suma es: " << sum << endl;
            break;
        }
        case 14:{
            cout <<"ejecutando el decimocuarto punto... \n";
            int max=0, cont=100, aux=0;
                while(cont <= 999){
                    for(int i=100; i<=999; i++){
                        aux = i*cont;
                        if(esPalindromo(aux)){
                            if(max < aux){
                                max = aux;
                            }
                        }

                    }
                    cont+=1;
                }
                cout << max;


            break;
        }
        case 17:{
            cout <<"ejecutando el decioseptimo punto \n";
            cout << "ingrese un numero positivo y entero: ";
            int k, pos1 =0, pos2 = 1, aux = 0;
            cin >> k;
            for(;aux < k; pos2++){          // que el numero de divisores sea menor al k ingresados
                pos1 = pos1 +pos2;          //numero triangular
                aux = (divisores(pos1));    // numero de divisores
                aux +=1; //
            }
            cout << "el numero: " << pos1 << " tiene: " << aux << " divisores" << endl;
            break;
        }
        default:{
            cout << "ingrese un valor valido o 0 para finalizar el programa " << '\n' << endl;
        }
        }

    }
    return 0;
}
