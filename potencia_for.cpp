#include <iostream>
using namespace std;

int main(){

    int x,y,rpta=1;
    cout<<"DIGITE LA BASE x: "; cin>>x;
    cout<<"DIGITE EL EXPONENTE y: "; cin>>y;

    for (int i=1 ; i<=y ; i+=1){
        rpta *= x;
    }

    cout<<x<<" elevado a "<<y<<" es: "<<rpta<<endl;

	return 0;
}
/*
      By devZen69

        $ $$$ $
         $ $ $
        $$$$$$$
*/
