#include <iostream>
using namespace std;

int main(){
	int numero,conteo=0;

	do{
		cout<<"Digite un numero: ";
		cin>>numero;
		if(numero>0){
			conteo++; 
		}
	}while(numero != 0);


	cout<<"El total de numeros mayores que 0 es: "<<conteo;

	return 0;
}
/*
      By devZen69

      
