#include<stdio.h>

void exchange(int *p1,int *p2){

    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(){
    int x1 = 10 , x2 = 20;
    int *s1 = &x1, *s2 = &x2;
    printf("Before swapping\n");
    printf("x1 = %d\nx2 = %d\n",x1,x2);
    exchange(s1,s2);
    printf("After swapping\n");
    printf("x1 = %d\nx2 = %d\n",x1,x2);


}