//COMPROBANDO UN NUMERO

#include <iostream>
using namespace std;

int main (){
    int nro, dato=69;
    cout<<"DIGITE UN NUMERO: ";
    cin>>nro;

    if (nro==dato){
        cout<<"CLAVE CORRECTA..."<<endl;
    } else{
        cout<<"EL NUMERO ES DISTINTO..."<<endl;
    }

    return 0;
}
