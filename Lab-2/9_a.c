#include<stdio.h>
#include<stdlib.h>

int main(){
    int x =3, y=4;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("swapped %d , %d", x,y);
}