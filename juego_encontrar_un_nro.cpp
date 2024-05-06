#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    int numero, dato, contador=0;

    srand(time(NULL));
    dato = 1+rand()%(100);

    do{
        cout<<"DIGITE UN NUMERO: "; cin>>numero;

        if (numero>dato){
            cout<<"DIGITE UN NUMERO MENOR..."<<endl;
        }
        if (numero<dato){
            cout<<"DIGITE UN NUMERO MAYOR..."<<endl;
        }
        contador += 1;
    }while(numero!=dato);

    cout<<"FELICIDADES ENCONTRASTE EL NUMERO..."<<endl;
    cout<<"NUMERO DE INTENTOS: "<< contador << endl;

    return 0;
}
