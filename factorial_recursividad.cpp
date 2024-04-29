#include <iostream>
using namespace std;

int factorial(int nro){
    if (nro<=0){
        return 1;
    }else{
        return nro*factorial(nro-1);
    }
}

int main(){

    int a;
    cout<<"DIGITE UN NUMERO: "; cin>>a;

    cout<<"El factorial de "<<a<<" es: "<<factorial(a)<<endl;

	return 0;
}

/*
      By devZen69

        $ $$$ $
         $ $ $
        $$$$$$$
*/
