#include<stdio.h>
#include<string.h>
#define SIZE 10
int main()
{
	char nonter;
	char beta, alpha;
	int num;
	char prod[10][SIZE];
	int index=3;
	printf("Enter number of production:");
	scanf("%d",&num);
	printf("Enter the grammar as E->a:\n");
	for(int i=0; i<num;i++)
	{
		scanf("%s",prod[i]);
	}
	
	for(int i=0;i<num;i++)
	{
		printf("\nGrammar :::%s ",prod[i]);
		nonter=prod[i][0];
		if (nonter==prod[i][index])
		{
			alpha=prod[i][index+1];
			printf("is left recursive\n");
			while(prod[i][index]!=0 && prod[i][index]!='|')
			index++;
			if(prod[i][index]!=0)
			{
				beta=prod[i][index+1];
				printf("Grammar without left recursion:\n");
				printf("%c-> %c %c\'",nonter,beta,nonter);
				printf("\n %c\'->%c%c\'|$\n",nonter,alpha,nonter);
			}
			else{
				printf("cannot be reduced\n");
			}
		}
		else 
		printf("is not left recursive\n");
		index=3;
	}
}

