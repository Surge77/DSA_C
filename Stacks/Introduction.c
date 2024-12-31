/*

Stack ADT:  LIFO - last in first out

We will only look about features / operations or logical view of stack not the implementations

A stack is basically a collection with this property,that an item in the stack must be inserted or removed from the same end that we call the top of stack

This is not just a property,this is a constraint or restriction.
Only the top of a stack is accessible and any item has to be inserted or removed from the top

A stack is also called last In First Out collection. Most recently added item in the stack has to go first

Definition: A list with the restriction that insertion and deletion can be performed only from one end called the top

-Operations: 
1.Push() or insertion
2.Pop() or remove
3.Top() - Returns the top element
4.IsEmpty() - Checks whether stack is empty or not -> returns true or false

These all operations take constant time i.e O(1)

Applications:

-Function Calls/ Recursion
-undo Operations in an editor
-Balanced parenthesis in source code 
*/