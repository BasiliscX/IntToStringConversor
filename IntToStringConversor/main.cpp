#include<iostream>
using namespace std;
#include "IntString.h"

int main(){
system("mode con: cols=55 lines=14");
system("color 8F");

    int integrer=1;
    IntString Conversor;

    while(integrer>=0){
    system("cls");
        cout<<"\n\tInteger to Text Converter\n\n";
        cout<<"Enter an integer (0 - 999): ";
        cin>>integrer;
    if(integrer<0)cout<<"\n\tExit.\n";
        cout<<endl<<Conversor.ReturnString(integrer)<<endl<<endl;
    system("pause");
    }

return 0;
}
