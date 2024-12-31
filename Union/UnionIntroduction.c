/*

Union is just like a structure, a collection of data items of different DataTypes
but the difference is:

Union allocates memory space of largest union member
in case of union we can only access one element at a time at one instance

The only difference of syntax between union and struct is the word while declaring

Syntax:

union person
{
    char name[10];
    int age;
    float percentage;
};




*/