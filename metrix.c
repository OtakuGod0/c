#include <stdio.h>
#define row 2
#define col 3
int main(){
    int i, j;
    int a[row][col] = { {1, 2, 3}, {4, 5, 6} };

    for(i = 0; i < col; i++){
        for(j = 0; j < row; j++){
            printf("%d \t", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
