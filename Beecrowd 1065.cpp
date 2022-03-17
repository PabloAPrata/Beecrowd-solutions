#include <stdio.h>

int main()
{
	int A, B, C, D, E, PAR=0;
	
	scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
	
	if(A%2==0)
	{
		PAR++;
	}
	
	if(B%2==0)
	{
		PAR++;
	}
	
	if(C%2==0)
	{
		PAR++;
	}
	
	if(D%2==0)
	{
		PAR++;
	}
	
	if(E%2==0)
	{
		PAR++;
	}
	
	printf("%d valores pares\n",PAR);
	
	return 0;
}
