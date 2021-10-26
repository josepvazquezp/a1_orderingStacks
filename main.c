#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    Stack *stack = newStack();
    int nums[] = {4,3,-1,5,4};
    
    for(int i=0; i<5;i++)
    {
        push(stack, nums + i);
    }

    display(stack);
    sortStack(stack, compare);
    display(stack);

    return 0;
}