#include<stdio.h>
int fd(int year){
    int day=(year * 365 + ((year-1)/ 4) - ((year-1)/ 100) + ((year-1)/ 400))%7;
    return day;
}
int main(){
    char month[12][20]={
        {"January"},
        {"February"},
        {"March"},
        {"April"},
        {"May"},
        {"June"},
        {"July"},
        {"August"},
        {"September"},
        {"October"},
        {"November"},
        {"December"}
    };

    int dm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,j,year;

    printf("Enter the Calender Year: ");
    scanf("%d",&year);

    int wd=fd(year);

    if((year%100!=0 && year%4==0) || (year%400==0)){
        dm[1]=29;
    }

    for(i=0;i<12;i++){
        printf("\n\n\n   ------------ %s %d ------------\n\n",month[i],year);
        printf("   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");

        for(j=0;j<wd;j++){
            printf("      ");
        }

        for(j=0;j<dm[i];j++){
            printf("%6d",j+1);
            wd++;
            if(wd>6){
                wd=0;
                if((j+1)!=dm[i])
                    printf("\n\n");
            }

        }
        printf("\n   --------------------------------------\n");
    }

    return 0;
}
