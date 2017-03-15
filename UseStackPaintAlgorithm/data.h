#ifndef DATA_H
#define DATA_H

#define MAX 100

typedef struct _data{
	int x;
	int y;
} DATA;

DATA STACK[MAX];
int top;

void initStack();
int push(DATA* data);
int pop(DATA* data);
int emptyStack();
int fullStack();
#endif