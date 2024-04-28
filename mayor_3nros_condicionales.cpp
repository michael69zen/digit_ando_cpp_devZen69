//MAYOR DE 3 NROS

#include <iostream>
using namespace std;

int main (){

    int n1,n2,n3;
    cout<<"DIGITE 1 NUM: ";
    cin>>n1;
    cout<<"DIGITE 2 NUM: ";
    cin>>n2;
    cout<<"DIGITE 3 NUM: ";
    cin>>n3;

    if((n1>n2)&&(n1>n3)){
        cout<<n1;
    } else {
        if(n2>n3){
            cout<<n2;
        }else{
            cout<<n3;
        }
    }

    return 0;
}
