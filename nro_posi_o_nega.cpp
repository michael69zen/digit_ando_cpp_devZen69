
#include <iostream>
using namespace std;

int main (){
    int nro;
    cout<<"n: ";
    cin>>nro;

    if(nro==0){
        cout<<"EL NUMERO ES 0";
    }else if(nro<0){
        cout<<"EL NUMERO ES NEGATIVO";
    }else{
        cout<<"EL NUMERO ES POSITIVO";
    }


    return 0;
}
