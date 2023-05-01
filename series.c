#include <stdio.h>

int main(){
    int a = 1, b = 3, c, n = 10;

    for(n=0;n<10;n++){
        printf("%d\n", a);
        c = a+b;
        a = b;
        b = c;

    }
    return 0;
}