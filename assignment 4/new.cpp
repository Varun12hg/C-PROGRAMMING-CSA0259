#include<stdio.h>
struct cricket
{
	char name[20];
	int runs;
};
int main()
{
	int i,s=0;
	struct cricket a[11];
	printf("enter the player name and runs scored\n");
	printf("\n");
	for (i=0;i<=10;i++)
	{
		scanf("%s",&a[i].name);
		printf("\t");
		scanf("%d",&a[i].runs);
	}
	for (i=0;i<11;i++)
	s=s+a[i].runs;
	printf("\n the total runs scored by the team is %d",s);
	return 0;
}
