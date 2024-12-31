/*

Memory is a crucial resource , every program keeps demanding it,so memory manager is the one which allocated memory to every program

The thing about arrays , it is stored as a one contiguous block of memory, a application can access any of the element in an array irrespective of the size of the array
in constant time

The problem with arrays is it cannot be extended to add element we have to create a new block and copy all the elements into new block or array

-The solution to this problem is a data structure called as linked list

-In linked list the data is stored in disjoints or non-contiguous memory locations
-To link these non-contiguous nodes together and to store the information which node is which number we store the address of the next node 
-We need two variables one to store the data and other pointer variable to store the address of the next node in the list

Logical view of Linked List:

-Data is stored in these nodes and each node stores the data as well as the link to the next node kind of points to the next node
-The first node is called the head node and the only information about the ilst we keep all the time is address of head node or first node
-The address of the head node kind of gives us access to the complete list
-The address of the last node is null or zero which means the last node does not point to any other node
-Now if we want to traverse the linked list is we go to the first node address then address of next node and next node and so on..
-Unlike arrays we cannot access the elements in constant time
-So the time taken to access the elements will be proportional to the size of the list i.e n
-The time complexity of this operation is O(n)
-The advantage is we can create nodes when we want and also delete whenever we want
-We do not need to define the size beforehand
-The address of the memory block allocated to each of the node is random, there is no relation , there is no guarantee that the addresses will be in increasing or decreasing order or adjacent to each other

-Implementation of Linked List:

-we create a variable that will be of type pointer to node and this guy will store the address of the first node and we can name it as A
-The name of this particular pointer variable that points to the head node or the first ndoe can also be interpreted as the name of linked list
-Because this is the only identity of th linked list Pwe keep with us all the time

*/