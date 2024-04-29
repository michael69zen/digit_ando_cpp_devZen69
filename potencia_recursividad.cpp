#include <iostream>
using namespace std;

int potencia(int x,int y){
    if (y==0){
        return 1;
    }else if(y==1){
        return x;
    }else{
        return x*potencia(x,y-1);
    }
}

int main(){

    int a,b;
    cout<<"DIGITE BASE x: "; cin>>a;
    cout<<"DIGITE EXPONENTE y: "; cin>>b;

    cout<<a<<" elevado a "<<b<<" es: "<<potencia(a,b)<<endl;

	return 0;
}

/*
      By devZen69

        $ $$$ $
         $ $ $
        $$$$$$$
*/
