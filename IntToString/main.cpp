#include<iostream>
#include"IntString.h"
#include"ventanimation.h"

int main(){
ConsoleTitle("Int to String!");
ConsoleSize(55,14);
ConsoleCursorSHOW_HIDE(0);
BackgroundAndTextColor(9);

    int integrer=1;
    IntString Conversor;

    BoxAnimation(3,ConsoleColumns(),ConsoleRows());

    PosXY(13,2);
    BoxAnimation(2,26,2);
    PosXY((ConsoleColumns()/4)+1,PosY()-1);
        std::cout<<"Integer to Text Converter";

    while(integrer>=0){
    PosXY(11,ConsoleRows()/2);
        std::cout<<"Enter an integer (0 - 999): ";
        std::cin>>integrer;

        if(integrer<0){
            ConsoleDLT();
            PosXY((ConsoleColumns()/2)-3,ConsoleRows()/3);
            std::cout<<"Exit.";
        }

    PosXY(14,PosY()+2);
        std::cout<<Conversor.ReturnString(integrer);

    PosXY(4,PosY()+2);
    system("pause");
    ConsoleClsX_Y(38,ConsoleRows()/2,10);
    ConsoleClsX_Y(14,PosY()-3,40);
    }

return 0;
}
