#include<stdio.h>
#define m 10000

char c[m],d[m];
int p1[m],p2[m];
int p=0,q=0,n,i=0;
int main()
{
  printf("\nEnter no of iterations:\n");
  scanf("%d",&n);
  printf("\nPlayer1\t\tPlayer2(G10)\t\tp1(score)\t\tp2(score) \n");
  
  while(i<n)
   {  
      c[i]=g4_new(d[i-1]);
      d[i]=g4_1(c[i-1]);
      if(c[i]=='c' && d[i]=='c')
 	{
  		p1[i]=20;
  		p2[i]=20;
 	}
      else if(c[i]=='c' && d[i]=='d')
  	{
    		p1[i]=0;
    		p2[i]=30;
  	}
      else if(c[i]=='d' && d[i]=='c')
  	{
    		p1[i]=30;
    		p2[i]=0;
  	}
      else
  	{
    		p1[i]=10;
    		p2[i]=10;
  	}
 		p=p+p1[i];
 		q=q+p2[i];
 		printf("\n");
 		printf("%c\t\t%c\t\t\t%d\t\t\t%d",c[i],d[i],p1[i],p2[i]);
      	i++;
   }
printf("\n-----------------------------------------------------------------------------------------------------------------------------"); 
printf("\nTotal score=\t\t\t\t%d\t\t\t%d\n",p,q);
if(p > q)  
   printf("\n\nPlayer 1 won\n\n");
else if(p < q)
          printf("\n\nPlayer 2 won\n\n");
     else
	  printf("\n\nGame tie\n\n");
  return 0;
}
