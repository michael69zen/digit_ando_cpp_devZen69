#include <iostream>
using namespace std;

int main(){

	float temperatura , suma_temperatura=0 , temperatura_media=0;
	float temp_alta=0 , temp_baja=999;

	for (int i=0 ; i<=24 ; i+=4){
        cout<<"TEMPERATURA A LAS "<<i<<"hrs: ";
        cin>>temperatura;

        if(temperatura>temp_alta){
            temp_alta=temperatura;
        }

        if(temperatura<temp_baja){
            temp_baja=temperatura;
        }

        suma_temperatura += temperatura;
	}

	temperatura_media=suma_temperatura/6;
	cout<<"TEMPERATURA MEDIA DEL DIA: "<<temperatura_media<<endl;
	cout<<"TEMPERATURA MAXIMA: "<<temp_alta<<endl;
	cout<<"TEMPERATURA MINIMA: "<<temp_baja<<endl;


	return 0;
}
/*
      By devZen69

        $ $$$ $
         $ $ $
        $$$$$$$
*/
