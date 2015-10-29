#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "multi.h"
#include "twosome_scanf.h"

int main()
{
	int c=0;
	int d=0;
	int* a=&c;
	int* b=&d;
	int result;
	twosome_scanf(a,b);

	result = multi(*a,*b);
	printf("%d", result);
}