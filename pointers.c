#include<stdio.h>
int main(){
    int i=90;
    int *k = &i;
    printf("%p \n",k);
    k++;
    k--;
}