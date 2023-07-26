#include<iostream>
using namespace std;
#include "IntString.h"

void IntString::setString(string number="    "){
_string=number;
}
void IntString::setComposeString(string number){
_string+=number;
}

string IntString::getString(){
return _string;

}
string IntString::ReturnString(int integrer){

    int a,b,c;
    IntString value;

    if(integrer<1000){
        a=integrer%10;
        b=(integrer-a)%100;
        c=(integrer-(a+b));
        if(b>9 && b<20) b+=a;
    }

switch(c){
case 100:value.setComposeString("ONE HUNDRED ")  ;break;
case 200:value.setComposeString("TWO HUNDRED ")  ;break;
case 300:value.setComposeString("THREE HUNDRED ");break;
case 400:value.setComposeString("FOUR HUNDRED ") ;break;
case 500:value.setComposeString("FIVE HUNDRED ") ;break;
case 600:value.setComposeString("SIX HUNDRED ")  ;break;
case 700:value.setComposeString("SEVEN HUNDRED ");break;
case 800:value.setComposeString("EIGHT HUNDRED ");break;
case 900:value.setComposeString("NINE HUNDRED ") ;break;
}

if(b>9 && b<20)
    switch(b){
    case 10:value.setComposeString("TEN")      ;break;
    case 11:value.setComposeString("ELEVEN")   ;break;
    case 12:value.setComposeString("TWELVE")   ;break;
    case 13:value.setComposeString("THIRTEEN") ;break;
    case 14:value.setComposeString("FOURTEEN") ;break;
    case 15:value.setComposeString("FIFTEEN")  ;break;
    case 16:value.setComposeString("SIXTEEN")  ;break;
    case 17:value.setComposeString("SEVENTEEN");break;
    case 18:value.setComposeString("EIGHTEEN") ;break;
    case 19:value.setComposeString("NINETEEN") ;break;
    }

switch(b){
case 0 :
        if(a==0)
        value.setComposeString("ZERO")    ;break;
case 20:value.setComposeString("TWENTY ") ;break;
case 30:value.setComposeString("THIRTY ") ;break;
case 40:value.setComposeString("FORTY ")  ;break;
case 50:value.setComposeString("FIFTY ")  ;break;
case 60:value.setComposeString("SIXTY ")  ;break;
case 70:value.setComposeString("SEVENTY ");break;
case 80:value.setComposeString("EIGHTY ") ;break;
case 90:value.setComposeString("NINETY ") ;break;
}

if(b<10 || b>19){
    switch(a){
    case 1:value.setComposeString("ONE")  ;break;
    case 2:value.setComposeString("TWO")  ;break;
    case 3:value.setComposeString("THREE");break;
    case 4:value.setComposeString("FOUR") ;break;
    case 5:value.setComposeString("FIVE") ;break;
    case 6:value.setComposeString("SIX")  ;break;
    case 7:value.setComposeString("SEVEN");break;
    case 8:value.setComposeString("EIGHT");break;
    case 9:value.setComposeString("NINE") ;break;
    }
}
return value.getString();
}

