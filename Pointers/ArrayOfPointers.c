#include<stdio.h>

// ARRAY OF POINTER....


int main(){

    char *str[3] = {"C programming","JAVA","C++"}; //

    printf("%s\n",str[1]);

    for(int i=0; i<3; i++){

        printf("%s\n",str[i]); 

    }
}