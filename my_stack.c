/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#include<malloc.h>

typedef int DATA_TYPE;

struct Stack
{
        DATA_TYPE *data;
        int top;
        int capacity;
};

int InitStack(Stack* s,int size=10)
{
        s->data = (DATA_TYPE*)malloc(size*sizeof(DATA_TYPE));

        if(s->data == NULL) //如果空间动态非配出错，就报错
                return 0;
        s->capacity = size;
        s->top = 0;
        return 1;
}

int IsFull(Stack* s)
{
        if(s->top >= s->capacity)return 1;
        else return 0;
}

int IsEmpty(Stack *s)
{
        if(s->top <= 0)return 1;
        else return 0;
}


int Push(Stack *s ,DATA_TYPE d)
{
        if(IsFull(s))return 0;
        else
 {
                s->data[s->top++]=d;
                return 1;
        }
}

int Pop(Stack* s,DATA_TYPE &d)
{
        if(IsEmpty(s))
                return 0;
        else
        {
                s->top--;
                d=s->data[s->top];
                return 1;
        }
}

int GetTop(Stack*s,DATA_TYPE &d)
{
        if(IsEmpty(s))return 0;
  else
        {
                d = s->data[s->top-1];
                return 1;
        }
}

int ClearStack(Stack* s)
{
        s->top=0;
        return 1;
}

int DestoryStack(Stack* s)
{
        delete[] s->data;
        s->top=-1;
        s->capacity=-1;
        return 1;
}

