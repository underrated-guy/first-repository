#include<stdio.h>
int main(){
    float arr[5] = {12.5, 10.0, 13,5, 90.5, 0.5};
    float *ptr1=&arr[0];
    float *ptr2=&arr[1];
    printf("%f",*ptr2);
    printf("%f",*ptr2-*ptr1);
    return 0;
}