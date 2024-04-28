
#include <iostream>
using namespace std;

int main (){
    cout<<"BIENVENIDO AL MENU"<<endl;
    cout<<"********************"<<endl;
    cout<<"1. Un Nro al cubo"<<endl;
    cout<<"2. Nro. par o impar"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"********************"<<endl;

    int nro,n,cubo=0,num;
    cout<<"DIGITE UNA OPCION: ";
    cin>>nro;

    switch(nro){
        case 1: cout<<"DIGITE UN NRO: "; cin>>n;
                cubo=n*n*n;
                cout<<"EL CUBO DEL NRO ES: "<<cubo<<endl;

        case 2: cout<<"DIGITE UN NRO: "; cin>>num;
                if(num%2==0){
                    cout<<"EL NRO ES PAR";
                } else {
                    cout<<"EL NRO ES IMPAR";
                }
        case 3: break;

    }


    return 0;
}
/*
      By devZen69

        $ $$$ $
         $ $ $
        $$$$$$$
*/
