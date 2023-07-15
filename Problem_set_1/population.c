#include <stdio.h>

int main(){
    int start,end,year;
    do
    {
        printf("Start size: ");
        scanf("%d",&start);
    } while (start<9);
    do
    {
        printf("End size: ");
        scanf("%d",&end);
    } while (end<start);
    
   
    while(start<end){
        start = start + start/3 - start/4;
        year++;
        
    }
    
    printf("Years: %d",year);
    return 0;
}