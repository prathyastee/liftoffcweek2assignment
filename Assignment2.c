#include <stdio.h>
int main(){
    int num,se=0,so=0,i;
    printf("Enter 10 numbers:\n");
    for (i=0;i<10;i++){
        scanf("%d",&num);
        if(num%2==0)
        {
            se=se+num;
        }
        else
        {
            so=so+num;
        }
    }
    printf("Sum of all even numbers: %d \n", se);
    printf("Sum of all odd numers: %d", so);

    return 0;
    }