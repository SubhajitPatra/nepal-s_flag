#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=0;i<7;i++){
        for(j=0;j<8;j++){
            if(i==6||j==0){
                printf("*");
            }
            else if (j==2*i){
                printf("*");
            }
            else if(i==3){
                printf("*");
            }
            else if(i==4&&j==2||i==5&&j==4||i==6&&j==5){
                printf("*");
            }


                else{
                    printf(" ");
                }



        }
        printf("\n");
    }

    return 0;
}
