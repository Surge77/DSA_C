#include<stdio.h>

/*
Program to show that changes made to inside the function affect the original array
*/

void func(int a[]); //function declaration

int main(){

    int i,arr[5] = {3,6,2,7,1};
    func(arr);
    printf("Inside main() : ");
    for  (i=0; i<5; i++){
        printf("%d\t",arr[i]);
    }

}  

void func(int a[]){

    int i;
    printf("Inside func(): ");
    for (i=0 ; i<5; i++){
        a[i] = a[i] + 2;
        printf("%d\t",a[i]);

    }
}