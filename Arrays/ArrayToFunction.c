#include<stdio.h>

//Program to pass array elements to a function

int main(){
int arr[10],i;

void check_even_odd();

for (i=0; i<10; i++){

    printf("Enter the element for arr[%d]: \n",i);
    scanf("%d",&arr[i]);
    check_even_odd(arr[i]);
}

}

void check_even_odd(int num){

    if (num%2 == 0){
        printf("%d is even\n",num);
    }
    else{
        printf("%d is odd\n",num);
    }


}