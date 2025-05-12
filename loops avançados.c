#include <stdio.h>

int main(){


    for (int i = 0; 
        i < 100 + 1; 
        i += (i % 2 == 0) ? 2 : 1){

            printf("%d ", i);
        }


    return 0;

}