#include <stdio.h>

int main(){
    //WAP to input two number and add them
    int a, b; 
    printf("Input two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum is: %d \n", a+b);

    //WAP to find simple interest 
    float p, t, r;
    printf("Input principle, time and rate in order: ");
    scanf("%f %f %f", &p, &t, &r);
    printf("The simple interest is: %f\n", (p*t*r)/100);

    //WAP to find the area of the circle 
    int ra;
    #define pi 3.1415
    printf("Input the radius of the circle: ");
    scanf("%d", &ra);
    printf("The area of the circle is %f\n", pi*ra*ra);
    return 0;
}