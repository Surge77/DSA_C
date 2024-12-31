/*
Decalaration: void free(void *p)

The dynamically allocated memory is not automatically released.It will exist till the end of the program.
If we have finished working with the dynamically allocated memory,it is our responsiblity to release that memory so it can be reused.
the function free() is used to release the memory space allocated dynamically.The memory released by free() is made available to the heap again
and can be used for some other purposes

Once a memory location is freed it should not be used.We should not try to free any memory location that was not allocated by malloc(),calloc() or realloc()
*/