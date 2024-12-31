/*
We have seen that queue is a list of elements in which we can add the element only at one end called rear of the queue and delete the element only
at the other end called front of the queue.In priority queue every element of queue has some priority and it is processed based on this priority.An
element with higher priority is processed before the element which has less priority.If two elements have same priority then in this case FIFO rule
will follow i.e element which comes first in the queue will be processed first.An example of priority queue is CPU scheduling algorithm,in which
CPU needs to process the process with highest priority first.

There are two ways of implementing priority queue:

1.Through queue: In this case insertion is simple because the element is simple added at the rear end as usual.For performing deletion , first the 
                element with highest priority is searched and then deleted

2.Through sorted list: In this case insertion is costly because the element is inserted at the proper place in the list based on the priority.Here 
                        deletion is easy since the element with highest priority will always be in the beginning of the list
*/