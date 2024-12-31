#include<stdio.h>

/*

Bit Fields.....

*/

typedef struct personinfo1
{
    int age; // 4 bytes = 32 bits

}st_in;

int main(){

    printf("The size of structure is %d\n",sizeof(st_in));
}