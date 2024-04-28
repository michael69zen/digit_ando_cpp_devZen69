
#include <iostream>
using namespace std;

int main (){
    char letra;
    cout<<"DIGITE LETRA: ";
    cin>>letra;

    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"ES UNA VOCAL MINUSCULA"; break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"ES UNA VOCAL MAYUSCULA"; break;
        default: cout<<"NO ES UNA VOCAL"; break;

    }

    return 0;
}
/*
      By devZen69

        $ $$$ $
         $ $ $
        $$$$$$$
*/
