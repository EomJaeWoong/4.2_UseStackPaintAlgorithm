#include <stdio.h>
#include <Windows.h>
#include "data.h"

#define P_HEIGHT 20
#define P_WIDTH 30

char cPaintPanel[P_HEIGHT][P_WIDTH] = {
	{ ' ', ' ', ' ', 'N', ' ', ' ', 'N', ' ', ' ', ' ', ' ', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ', ' ', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ' },
	{ ' ', 'N', ' ', 'N', 'N', 'N', 'N', 'N', ' ', ' ', ' ', ' ', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', ' ', 'N', 'N', ' ' },
	{ ' ', 'N', 'N', 'N', ' ', ' ', 'N', ' ', ' ', ' ', ' ', 'N', 'N', 'N', 'N', 'N', 'N', 'N', ' ', 'N', 'N', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ' },
	{ ' ', 'N', ' ', 'N', ' ', ' ', 'N', ' ', ' ', ' ', 'N', 'N', ' ', 'N', 'N', 'N', ' ', 'N', ' ', ' ', 'N', 'N', ' ', 'N', 'N', 'N', ' ', 'N', 'N', 'N' },
	{ ' ', 'N', 'N', 'N', ' ', ' ', 'N', ' ', 'N', ' ', 'N', ' ', 'N', 'N', 'N', 'N', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', ' ', 'N', ' ', 'N', ' ', ' ' },
	{ ' ', 'N', ' ', 'N', 'N', 'N', 'N', ' ', 'N', ' ', 'N', ' ', 'N', 'N', ' ', ' ', ' ', 'N', ' ', ' ', 'N', 'N', ' ', 'N', ' ', 'N', 'N', 'N', ' ', ' ' },
	{ ' ', 'N', 'N', 'N', ' ', 'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N', ' ', ' ', ' ', 'N', ' ', 'N', 'N', ' ', ' ', 'N', 'N', 'N', ' ', 'N', 'N', 'N' },
	{ 'N', 'N', 'N', 'N', ' ', ' ', 'N', ' ', ' ', 'N', ' ', 'N', ' ', 'N', 'N', 'N', 'N', 'N', ' ', ' ', 'N', 'N', ' ', 'N', ' ', ' ', ' ', 'N', 'N', ' ' },
	{ ' ', 'N', 'N', 'N', 'N', 'N', 'N', ' ', ' ', ' ', 'N', 'N', ' ', 'N', ' ', 'N', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', ' ', ' ', ' ', 'N', ' ', ' ' },
	{ ' ', ' ', 'N', 'N', 'N', ' ', 'N', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ', ' ', 'N', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', ' ', 'N', 'N', 'N' },
	{ ' ', ' ', 'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N', 'N', ' ', ' ', ' ', 'N', ' ', 'N', 'N', 'N', 'N', 'N', ' ', 'N', 'N', 'N', ' ', ' ' },
	{ ' ', ' ', 'N', 'N', 'N', 'N', 'N', ' ', ' ', 'N', 'N', 'N', ' ', 'N', 'N', 'N', 'N', 'N', ' ', ' ', 'N', 'N', ' ', 'N', ' ', ' ', ' ', 'N', 'N', ' ' },
	{ ' ', 'N', 'N', 'N', 'N', 'N', 'N', ' ', 'N', 'N', 'N', ' ', ' ', 'N', 'N', 'N', ' ', 'N', ' ', 'N', 'N', ' ', ' ', 'N', ' ', 'N', 'N', 'N', ' ', ' ' },
	{ 'N', 'N', ' ', 'N', 'N', ' ', 'N', ' ', ' ', ' ', 'N', 'N', 'N', 'N', ' ', ' ', ' ', 'N', ' ', 'N', 'N', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ' },
	{ 'N', 'N', ' ', 'N', 'N', ' ', 'N', ' ', ' ', 'N', 'N', 'N', ' ', 'N', ' ', ' ', ' ', 'N', ' ', 'N', 'N', 'N', ' ', 'N', ' ', ' ', 'N', 'N', ' ', ' ' },
	{ ' ', 'N', ' ', 'N', ' ', 'N', 'N', ' ', 'N', 'N', 'N', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ', 'N', 'N', ' ', 'N', ' ', 'N', 'N', 'N', ' ', ' ' },
	{ ' ', 'N', 'N', 'N', ' ', 'N', 'N', ' ', ' ', 'N', 'N', 'N', ' ', 'N', ' ', 'N', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', 'N', 'N', ' ', 'N', ' ', ' ' },
	{ ' ', ' ', 'N', 'N', ' ', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', 'N', 'N', 'N', ' ', 'N', 'N', 'N', ' ', ' ', ' ', 'N', 'N', 'N', 'N', 'N', 'N', ' ' },
	{ ' ', 'N', 'N', 'N', 'N', 'N', 'N', ' ', ' ', 'N', 'N', 'N', ' ', 'N', ' ', ' ', ' ', 'N', ' ', 'N', 'N', ' ', ' ', 'N', ' ', 'N', 'N', 'N', 'N', 'N' },
	{ 'N', 'N', ' ', 'N', ' ', ' ', 'N', ' ', 'N', 'N', 'N', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ', ' ', ' ', ' ', 'N', ' ', ' ', ' ', 'N', ' ', ' ' }
};
char cPanelCopy[P_HEIGHT][P_WIDTH];

void Paint();	//N -> .으로 바꿔줌
void PrintPanel();//전체 Panel 출력

void main()
{
	initStack();

	DATA first;
	first.x = 2;
	first.y = 3;
	push(&first);

	PrintPanel();
	Sleep(2000);

	Paint();
}

/*
스택이 비지 않으면
- 데이터 하나를 뽑고
- 해당 데이터 좌표의 4방향을 검사
- N이면 스택에 push
*/
void Paint()
{
	DATA tempData,tData;
	DATA* temp = &tData;

	while (emptyStack()){
		pop(temp);
		cPaintPanel[temp->y][temp->x] = '.';
		if ((cPaintPanel[(temp->y) + 1][temp->x] == 'N') && (((temp->y) + 1) >= 0) && (((temp->y) + 1) < P_HEIGHT)
			&& ((temp->x >= 0) && (temp->x < P_WIDTH))){
			tempData.x = temp->x;
			tempData.y = (temp->y) + 1;
			push(&tempData);
		}
		if ((cPaintPanel[temp->y][(temp->x - 1)] == 'N') && (temp->y >= 0) && (temp->y < P_HEIGHT)
			&& (((temp->x) - 1) >= 0) && (((temp->x) - 1) < P_WIDTH)){
			tempData.x = (temp->x) - 1;
			tempData.y = (temp->y);
			push(&tempData);
		}
		if ((cPaintPanel[(temp->y) - 1][temp->x] == 'N') && (((temp->y) - 1) >= 0) && (((temp->y) - 1) < P_HEIGHT) 
			&& ((temp->x >= 0) && (temp->x < P_WIDTH))){
			tempData.x = temp->x;
			tempData.y = (temp->y) - 1;
			push(&tempData);
		}
		if ((cPaintPanel[temp->y][(temp->x + 1)] == 'N') && (temp->y >= 0) && (temp->y < P_HEIGHT)
			&& (((temp->x) + 1) >= 0) && (((temp->x) + 1) < P_WIDTH)){
			tempData.x = (temp->x) + 1;
			tempData.y = (temp->y);
			push(&tempData);
		}

		PrintPanel();
	}
}

void initStack()
{
	int i;
	top = -1;

	for (i = 0; i < MAX; i++)
		STACK[i] = { 0, 0 };
}

int push(DATA* data)
{
	if (top < MAX){
		STACK[++top] = *data;
		return 0;
	}
	else{
		fullStack();
		return -1;
	}
}

int pop(DATA* data)
{
	if (top > -1){
		*data = STACK[top--];
		return 0;
	}
	else{
		emptyStack();
		return -1;
	}
}

int emptyStack()
{
	if (top == -1){
		printf("Stack is empty.\n");
		return 0;
	} 
	else return 1;
}

int fullStack()
{
	if (top == MAX){
		printf("Stack is full.\n");
		return 0;
	}
}

void PrintPanel()
{
	int h, w;

	system("cls");
	for (h = 0; h < P_HEIGHT; h++){
		for (w = 0; w < P_WIDTH; w++)
			printf("%c", cPaintPanel[h][w]);
		printf("\n");
	}
	Sleep(20);
}