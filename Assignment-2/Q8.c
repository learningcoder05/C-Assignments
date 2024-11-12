#include <stdio.h>

int main(){
    int marks[5] = {50, 60, 45, 35, 25};
    int i,max=marks[0],min=marks[0];
    for (i = 0; i < 5; i++)
    {
        if(marks[i]>max){
            max=marks[i];
        }
        if(marks[i]<min){
            min=marks[i];
        }
    }
    printf("The maximum marks is %d\n", max);
    printf("The minimum marks is %d\n", min);
    return 0;
}