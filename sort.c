#include <stdio.h>

int main(){
    int i, j, tmp;
    int A[] = {45, 87, 67, 34, 10, 28, 56, 89, 15, 99, 81, 59, 72, 52, 4, 48, 25, 95, 40, 6};
    int n = sizeof(A) / sizeof(A[0]);
    printf("%d", n);

    for(i = 0; i < n; i++){
        for(j = 1; (j + i) < n; j++){
            if(A[i] > A[i+j]){
                tmp = A[i];
                A[i] = A[i+j];
                A[i+j] = tmp;
            }
        } 
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
