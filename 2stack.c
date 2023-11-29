#include<stdio.h>
#define true 1
#define false 0
#define size 10
#include<stdlib.h>
struct stack{
int top1;
int top2;
};
void initialize(struct stack *s)
{
    s->top1=-1;
    s->top2=size;
}
int IsEmpty1(struct stack *s)
{
    if(s->top1==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int IsEmpty2(struct stack *s)
{
    if(s->top2==size)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push1(int x,struct stack *s)
{
    if(s->top1+1==s->top2)
    {
        printf("Overflow");
        exit(1);
    }
    else{
        s->top1++;
        s->item[s->top1]=x;
    }
}
void push2(int x,struct stack *s)
{
    if(s->top2==s->top1-1)
    {
        printf("Overflow");
        exit(1);
    }
    else{
        s->top2=s->top2-1;
        s->item[s->top2]=x;
    }
}
int pop1(struct stack *s)
{
    if(s->top1==-1)
    {
        printf("underflow");
        exit(1);
    }
    else
    {
        int x=s->item[s->top1];
        s->top1=s->top1-1;
        return x;
    }
}
int pop2(struct stack *s)
{
    if(s->top2==size)
    {
        printf("underflow");
        exit(1);
    }
    else
    {
        int x=s->item[s->top2];
        s->top2=s->top2+1;
        return x;
    }
}
void main()
{
    struct stack s;
    int arr1[]={3,5,6};
    for(int i=0;i<3;i++)
    {
        s.push1(arr1[i],&s);
    }
    while(!IsEmpty1(&s))
    {
        printf("%d",s.pop1(&s));
    }
}
