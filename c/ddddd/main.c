#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    printf("Enter your Number: \n");
    scanf("%d", &num1);

    if(num1>20){
        printf( "number is greater than 20 \n");
    }else if (num1>10){
        printf( "number is between 10 and 20 \n");
    }else if (num1>0){
        printf( "number is between 0 and 10 \n");
    }else if (num1==0){
        printf( "it is ZERO \n");
    }else{
         printf(number is negative );

    }




    return 0;
}
