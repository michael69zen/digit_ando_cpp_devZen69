#include <iostream>
using namespace std;

int main(){
    int numeros[100],n,mayor=0,menor=9999999;

    cout<<"DIGITE EL NUMERO DE ELEMENTOS: ";
    cin>>n;

    for(int i=0; i<n ; i+=1){
        cout<<"DIGITE EL "<<i+1<<" NRO: ";
        cin>>numeros[i];

        if(numeros[i]<menor){
            menor=numeros[i];
        }

        if(numeros[i]>mayor){
            mayor = numeros[i];
        }
    }

    cout<<"EL MAYOR ES: "<<mayor<<endl;
    cout<<"EL MENOR ES: "<<menor<<endl;

    return 0;
}
