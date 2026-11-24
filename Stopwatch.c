#include<stdio.h>
#include<windows.h>
#include<conio.h>

void goToZero() {
    COORD coord;
    coord.X = 0;
    coord.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){

    system("cls");

    int h=0,m=0,s=0;

    while(1){
        goToZero();

        printf("            ******* Stop Watch *******\n\n\n");
        printf("\r                     %.2d:%.2d:%.2d      ",h,m,s);
        printf("\n\n\n             *************************");
        printf("\n\n\n               Enter any key to stop");

        if(_kbhit()){
            _getch();
            printf("\n\n\n           **** Stop Watch stopped!!! ****\n\n\n");
            break;
        }


        s++;

        Sleep(1000);

        if(s==60){
            m++;
            s=0;
        }

        if(m==60){
            h++;
            m=0;
        }

    }

    return 0;
}
