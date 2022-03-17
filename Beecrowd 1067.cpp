#include <stdio.h>


int main()
{
	int x,i;

	
	scanf("%d",&x);
	
	for(i=0; i<=x; i++){
		
		int vet[i];
		vet[i] = i;
		
		if(vet[i] % 2 !=0)
		printf("%d\n", vet[i]);
		
	}
	
	return 0;
}
