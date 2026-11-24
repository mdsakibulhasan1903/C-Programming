#include<stdio.h>
#include<windows.h>

void goToZero() {
    COORD coord;
    coord.X = 0;
    coord.Y = 0;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){

    int hour,minute,second;

    printf("Enter hour minute second : ");
    scanf("%d%d%d",&hour,&minute,&second);

    system("cls");

    int h=hour,m=minute,s=second;

    while(1){

        goToZero();

        printf("             ********* Timer *********\n\n\n");
        printf("\r                     %.2d:%.2d:%.2d      ",h,m,s);
        printf("\n\n\n             *************************");

        Sleep(1000);

        if(s==0){
            if(m>0){
                m--;
                s=60;
            }
            else if(m==0){
                if(h>0){
                    h--;
                    m=60;
                }
                else if(h==0){
                    printf("\n\n\n                    Time's  Out!\n\n\n");
                    break;
                }
            }
        }

    s--;

    }

    return 0;
}
