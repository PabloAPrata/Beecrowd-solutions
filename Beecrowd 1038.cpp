#include <stdio.h>


int main()
{
	int item, quant;
	double total;


	scanf("%d",&item);
	
	switch (item)
	{
		case 1 :
		
		scanf("%d",&quant);
		total = quant*4;
		printf("Total: R$ %.2lf\n",total);
		break;
		
		case 2 :
		scanf("%d",&quant);
		total = quant*4.5;
		printf("Total: R$ %.2lf\n",total);
		break;	
		
		case 3 :
		scanf("%d",&quant);
		total = quant*5;
		printf("Total: R$ %.2lf\n",total);
		break;
		
		case 4 :
		scanf("%d",&quant);
		total = quant*2;
		printf("Total: R$ %.2lf\n",total);
		break;	
		
		case 5 :
		scanf("%d",&quant);
		total = quant*1.5;
		printf("Total: R$ %.2lf\n",total);
		break;	
	}
	

	return 0;
}

