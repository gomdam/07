#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int inc(int counter)
{
	counter++;
	return counter;
}

int main(int argc, char *argv[]) 
{
	int i=10;
	printf("before i = %d\n", i);
	i = inc(i); //�Լ��� ��ȯ�� �̿� 
	printf("after i = %d\n", i);
	return 0;
}
