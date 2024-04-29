#include <iostream>
using namespace std;

//1+3+5+7+...+(2n-1)
int main(){
    int n, suma=0;
    cout<<"DIGITE EL NRO DE ELEMENTOS: ";
    cin>>n;

    for(int i=1 ; i<=n ; i+=1){
        suma += (2*i)-1;
    }

    for(int j=1 ; j<=n ; j+=1){
        cout<<(2*j)-1<<" ";
    }

    cout<<endl;
    cout<<"la suma es: "<<suma<<endl;


	return 0;
}

/*
      By devZen69

        $ $$$ $
         $ $ $
        $$$$$$$
*/
