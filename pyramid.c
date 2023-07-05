#include <stdio.h>

int main(){
    int height;
    printf("height : ");
    scanf("%d" , &height);
    for (int i=0;i<height;i++){
        for (int h=i;h<height;h++){
            printf(" ");
        }
        for (int j=height-i-1;j<height+i;j++){
            printf("*");
        }
        printf("\n");
    }
}

/*
        *
       ***
      *****
     *******
*/
