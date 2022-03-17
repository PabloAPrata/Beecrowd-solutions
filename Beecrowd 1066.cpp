#include <stdio.h>

int main()

{
	int A, B, C, D, E, PAR=0, IMPAR=0, POSITIVO=0, NEGATIVO=0;
	
	scanf ("%d %d %d %d %d", &A, &B, &C, &D, &E);
	
		if(A%2==0 || A==0)
		{
			PAR++;
		}
		
		if(B%2==0 || B==0)
		{
			PAR++;
		}
		
		if(C%2==0 || C==0)
		{
			PAR++;
		}
		
		if(D%2==0 || D==0)
		{
			PAR++;
		}
		
		if(E%2==0 || E==0)
		{
			PAR++;
		}
		//---------------------------------------------------------------------------
		if(A%2!=0)
		{
			IMPAR++;
		}
		
		if(B%2!=0)
		{
			IMPAR++;
		}
		
		if(C%2!=0)
		{
			IMPAR++;
		}
		
		if(D%2!=0)
		{
			IMPAR++;
		}
		
		if(E%2!=0)
		{
			IMPAR++;
		}
		
		//--------------------------------------------------------------------------------------
		
		if(A>0)
		{
			POSITIVO++;
		}
		
		if(B>0)
		{
			POSITIVO++;
		}
		
		if(C>0)
		{
			POSITIVO++;
		}
		
		if(D>0)
		{
			POSITIVO++;
		}
		
		if(E>0)
		{
			POSITIVO++;
		}
		
		//-----------------------------------------------------------------
		
		if(A<0)
		{
			NEGATIVO++;
		}
		
		if(B<0)
		{
			NEGATIVO++;
		}
		
		if(C<0)
		{
			NEGATIVO++;
		}
		
		if(D<0)
		{
			NEGATIVO++;
		}
		
		if(E<0)
		{
			NEGATIVO++;
		}
		
		
		
		printf("%d valor(es) par(es)\n",PAR);
		printf("%d valor(es) impar(es)\n",IMPAR);
		printf("%d valor(es) positivo(s)\n",POSITIVO);
		printf("%d valor(es) negativo(s)\n",NEGATIVO);
		
	
	return 0;
}
