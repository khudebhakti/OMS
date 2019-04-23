/* g4_M[] - My array
 * g4_O[] - Opponent's array
 * g4_Iternum - Iteration number
 * a = counter for 'like mindedness'
 * b = counter for 'differences'
 * C = counter for c's
 * D = counter for d's 
*/
#include<stdio.h>
#define g4_n 10000
char g4_M[g4_n]={'Z'};char g4_O[g4_n];
int g4_Iternum=0,g4_j=0;//,k,a,b,C,D;
//int g4_j=0;
char g4_1(char g4_q)
{
  int k,a,b,C,D;
  //printf("j %d\n",g4_j);
  g4_O[g4_j]=g4_q;
  if(g4_M[0]=='Z')
  {
    g4_Iternum =1;
    //printf("Iternum %d",g4_Iternum);
    g4_M[0] = 'd';
    g4_M[1] = 'd';
    g4_M[2] = 'c';
    return g4_M[0];
  }
  
  if(g4_M[g4_Iternum-1]=='c'|| g4_M[g4_Iternum-1] =='d')
  {
    g4_Iternum = g4_Iternum + 1;
    g4_j = g4_Iternum -1;  /* Decrementing g4_Iternum to get correct array locations */
    //printf("Iternum %d\n",g4_Iternum);
  }
 
  if(g4_j>=3)     /* Iteration 4 onwards */
  {
   a =0;b=0;C=0;D=0;
    for(k=0;k<g4_j;k++)
    {
      if(g4_M[k]==g4_O[k])
       { a = a+1;}  /* Like-mindedness */ 
      else 
      { b = b+1; }          /* Differences */

      if(g4_O[k]=='c'){ C = C+1;}   /* C counter */
      else { D = D+1;}           /* D counter */
    }

    //printf("\na %d b %d C %d D %d",a,b,C,D);
    if((a>=b && g4_M[g4_j-1]==g4_O[g4_j-1] && C>D)||(a>=b && g4_O[g4_j-1]=='c'&& C>D))
    { g4_M[g4_j]='c';}
 
    else if (b>a && C>D)
    { g4_M[g4_j]='c';}

    else { g4_M[g4_j]='d';}
 
   return g4_M[g4_j];
  }
  return g4_M[g4_j];   /* for g4_M[1] and g4_M[2] element */
}
