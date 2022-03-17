#include <stdio.h>


int main()
{
	float vet[5];
	int soma, i;
	
	
	for ( i=0; i <= 5; i++){		
		scanf("%f",&vet[i]);	
	}
	
	for (i=0; i <=5; i++){
		if (vet[i] > 0)
		soma++;
	}
	
	printf("%d valores positivos\n",soma);
	
	return 0;
}
