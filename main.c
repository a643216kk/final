#include <stdio.h>

#include "include/my_stack.h"

int main(void) {
        int x;
        int *y
        Stack S;
        Stack*p=&s;
        InitStack(p,10);
        while ( !IsFull(p) ) {
                scanf("%d", &x);
                Push(p,x);
        }


        while ( !IsEmpty(p) ) {
                Pop(p,y);

                printf("%d\t", *y);
        }
        printf("\n");
        return 0;
}
    
