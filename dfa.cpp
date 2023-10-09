#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 100
int main()
{
	char string[max],choice;
	int i, len, accept=0, checkstring=1;
	printf("\n enter string that is to be checked:");
	scanf("%s",string);
	len = strlen(string);
	for(i=0; i<len-1; i++)
	{
		if (string[i]!='0' && string[i]!='1')
		{
			checkstring=0;
		}
	}
	if (string[0]=='1'&& string[len-1]=='0')
	accept=1;
	if(accept==1 && checkstring==1)
	printf(" String is accepted");
	else
	{
	printf(" string is rejected");
    }
    
	
	return 0;
}
	
