/* G4 algorithm - Bhakti K. and Vardhini K.
 * g4_M[] - My array
 * g4_O[] - Opponent's array
 * g4_Iternum - Iteration number
 * a = counter for 'like mindedness'
 * b = counter for 'differences'
 * C = counter for c's
 * D = counter for d's 
*/
#include<stdio.h>
#define g4_n 10000

char g4_new(char g4_q)
{
  static char g4_M[g4_n]={'Z'}, g4_O[g4_n];
  static long int g4_Iternum,g4_j;/*,k,a,b,C,D;*/
  long int k,a,b,C,D;

  g4_O[g4_j]=g4_q;
  if(g4_M[0]=='Z')
  {
    g4_Iternum =1;
    g4_M[0] = 'd';
    g4_M[1] = 'd';
    g4_M[2] = 'c';
    return g4_M[0];
  }
  
  if(g4_M[g4_Iternum-1]=='c'|| g4_M[g4_Iternum-1] =='d')
  {
    g4_Iternum = g4_Iternum + 1;
    g4_j = g4_Iternum -1;  /* Decrementing g4_Iternum to get correct array locations */
  }
 
  if(g4_j>=3)     /* Iteration 4 onwards */
  {
   a =0;b=0;C=0;D=0;
    for(k=0;k<g4_j;k++)
    {
      if(g4_M[k]==g4_O[k])
       { a = a+1;}         /* Like-mindedness */ 
      else 
      { b = b+1;}          /* Differences */

      if(g4_O[k]=='c'){ C = C+1;}   /* C counter */
      else { D = D+1;}           /* D counter */
    }

    if((a>=b && g4_M[g4_j-1]==g4_O[g4_j-1] && C>D)||(a>=b && g4_O[g4_j-1]=='c' && C>D))
    { g4_M[g4_j]='c';}
 
    else if (b>a && C>D)
    { g4_M[g4_j]='c';}

    else { g4_M[g4_j]='d';}
 
   return g4_M[g4_j];
  }
  return g4_M[g4_j];   /* for g4_M[1] and g4_M[2] element */
}
