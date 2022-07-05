#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int i;
int num;
void Redsignal(){
	for(i = 60; i>=0;i = i -1)
		{
		printf(" ==> Current Signal light is Red\n");
		sleep(1);
		printf("Current down time is %d\n",i);
		}
	return 0;
}

void Greensignal(){
for(i = 60; i>=0;i = i -1)
		{
		printf(" ==> Current Signal light is Green\n");
		sleep(1);
		printf("Current down time is %d\n",i);
		}
	return 0;
}

void Amber(){
	printf("Current Signal light is Amber \n");
	printf("Current down time is NA \n");
	sleep(10);
}
void push(){
            int i = 1;
		while(i)
		{
		i++;
		printf("Choose your Light to display\n");
		printf("Enter number \"1\" for Red light \n");
		printf("Enter number \"2\" for Green light\n");
		printf("Enter number \"3\" for Amber\n");
		printf("Enter number \"4\" for exit\n");
		scanf("%d", &num);
			
		if(num == 1)
		{
			Redsignal();
		}
		else if(num == 2)
		{
			Greensignal();
		}
		else if(num == 3)
		{
			Amber();
		}
		else if(num == 4)
		{
			close(0);
		}
		else
		{
			printf("Note: Invalid input");
		}
		}
		}

void main() {
	Redsignal();
	Greensignal();
	Amber();
	push();
return 0;
}
