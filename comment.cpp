#include<stdio.h>
#include<string.h>
int main()
{
	char com[30];
	int len, comment=0;
	printf("enter comment \n");
	gets(com);
	len= strlen(com);
	if(com[0]=='/')
	{
		if(com[1]=='/')
		{
			comment=1;
		}
		else if(com[1]=='*'&& com[len-1]=='/')
		comment=1;
	}
	else 
	comment=0;
if(comment){
	printf("it is a comment \n");
}
else
{
	printf("it is not a comment\n");
}
return 0;
}
