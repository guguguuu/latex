#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	int i=0;
	int size=5;
//	float*s=NULL;

	printf("how many numbers do you want to input?\n");
	scanf("%d",&n);
	float*s=(float*)malloc(sizeof(float)*size);

	for(i=0;i<n;i++)
	{
		if(i==size)
		{		
			size=size*2;
			s=(float*)realloc(s,sizeof(float)*size);
			
		}
		printf("please input the %d number:",i+1);
		s[i]=i;
	}
	
	free(s);
}
