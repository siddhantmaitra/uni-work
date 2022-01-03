#include<stdio.h>
#include<stdlib.h>

float triangle(float a, float b){
    return(0.5 * a * b);
}

int rectangle(float a, float b){
    return(a * b);
}

float circle(float a){
    return(3.14 * a * a);
}

int main(){
    int value;
    float result,a,b;
    printf("Press 1 for area of triangle\nPress 2 for area of rectangle\nPress 3 for area of circle\n");
    printf("Press 4 for Exit\nEnter your choice\t");
    while(1){
        scanf("%d",&value);
        switch(value){
        case  1:
            printf("Enter Height and Base:\t");
            scanf("%f%f",&a,&b);
            result = triangle(a,b);
            printf("Area of Triangle: %f\n",result);
            break;
        case 2:
            printf("Enter Length and Breadth:\t");
            scanf("%f%f",&a,&b);
            result = rectangle(a,b);
            printf("Result of Area of Rectangle: %f\n",result);
            break;
        case 3:
            printf("Enter Radius:\t");
            scanf("%f",&a);
            result = circle(a);
            printf("Result of Area of Circle: %f\n",result);
            break;
        case 4:
            exit(0);
        default:
            printf("Enter right choice");
        }
    }
}

