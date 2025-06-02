#include<stdio.h>
int main(){
    int i,j,k;
    for (int i=0; i <=5; i++) //row
    {
        for (int j=i; j < 5; j++) //space
        {
            printf(" ");
        }
        for (int k =1; k <= i;k++) //colum
        {
            printf("%d",k);
        }

        printf("\n");
    }
    return 0;
}

