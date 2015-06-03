#ifndef _MY_STACK_H
#define _MY_STACK_H
int Push(Stack *s,DATA_TYPE x); 
int Pop(Stack *s,DATA_TYPE &x);

// The capacity of the stack


// Current available size of the stack

      

/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */ 
int IsEmpty(Stack *s);
int IsFull(Stack *s); 
    

#endif //_MY_STACK_HDATA_TYPE; 
