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
    
    //WAP to find the area of a rectangle
    int l, br; 
    printf("Input length and breath in order ");
    scanf("%d %d", &l, &br);
    printf("Area of the rectangle is %d", l*br);

    //WAP to input seconds and convert into hours, minutes and seconds
    int seconds = 17403, minutes, hours; 
    hours = seconds / (60*60);
    seconds = seconds  - hours * 60 * 60;

    minutes = seconds / 60;
    seconds = seconds - minutes * 60;

    printf("%d hours %d minutes %d second \n", hours, minutes, seconds);

    return 0;
}
