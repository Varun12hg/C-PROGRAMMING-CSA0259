#include<stdio.h>
struct player
{
     char name[20];
     int runs;
};
int main()
{
     int i,s=0;
     struct player a[11];
     printf("Enter Name of Player \t Runs Scored \n");
     printf("\n");
     for(i=0;i<=10;i++)
     {
        
        scanf("%s \t %d",&a[i].name,&a[i].runs);
 
     }
     for(i=0;i<=10;i++)
          s=s+a[i].runs;
     printf("\n---------------------------------------------\n");
     printf("Total Runs Scored by Team: %d",s);
     return 0;
}
