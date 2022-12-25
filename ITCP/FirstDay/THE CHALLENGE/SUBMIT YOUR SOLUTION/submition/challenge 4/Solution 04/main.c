#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[4], A[3], i, j, val;

    for(i=0; i<4; i++){
        printf("Donner T[%d]", i+1);
        scanf("%d", &T[i]);
    }

    for(j=0; j<3; j++){
        printf("Donner A[%d]", j+1);
        scanf("%d", &T[j]);
    }

    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            if(A[j] < T[i]){
                val = T[i];
                T[i] = A[j];
                A[j] = val;
            }
        }
    }

    for(i=0; i<4; i++){
        printf("T[%d]=%d \n", i+1, T[i]);
    }

    for(j=0; j<3; j++){
        printf("A[%d]=%d \n", j+1, A[i]);
    }
    return 0;
}
