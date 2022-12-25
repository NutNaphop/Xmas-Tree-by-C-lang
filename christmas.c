#include <stdio.h>
int main(){
    int num = 15 ; 
    for (int i = 1 ; i <= 3 ; i ++){
        for (int j = 1 ; j <= num ; j ++ ){
            for (int k = 1 ; k <= (2*num-1) ; k ++){
                if ( i >= 2 && (j >= 1 && j <= 3)){
                    continue;
                }
                else if (k >= num-(j-1) && k <= num+(j-1) ){
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            if (i >= 2 && (j >= 1 && j <= 3)){
                continue;
            }
            else{
                 printf("\n");
            }
        }
    }
    // A Stick 
    for (int i = 1 ; i <= 3 ; i++){
        for (int j = 1 ; j <= num ; j ++){
            if ( j == num ){
                printf("*\n");
            }
            else {
                printf(" ");
            }
        }
    }
    return 0 ;
}