#include <stdio.h>

int main()
{
int i, j, w = 0;
int matriz[3][3];
int p1, p2, p3, n1, n2, n3, det;

printf("\n\t[a]\t[b]\t[c]\t[A]\t[B]\n\n\t[d]\t[e]\t[f]\t[D]\t[E]\n\n\t[g]\t[h]\t[i]\t[G]\t[H]\n\n");

for(i=0; i<3; i++)
 for(j=0; j<3; j++) 
  {
   printf("Digite o valor de %c: ", ('a' + w++));
   scanf("%i", &matriz[i][j]);
  }

p1 = (matriz[0][0] * matriz[1][1] * matriz[2][2]);
p2 = (matriz[1][0] * matriz[2][1] * matriz[0][2]);
p3 = (matriz[2][0] * matriz[0][1] * matriz[1][2]);

n1 = (matriz[2][0] * matriz[1][1] * matriz[0][2]);
n2 = (matriz[0][0] * matriz[2][1] * matriz[1][2]);
n3 = (matriz[1][0] * matriz[0][1] * matriz[2][2]);

det = p1 + p2 + p3 - n1 - n2 - n3;


printf("\n\t[%i]\t[%i]\t[%i]\n", matriz[0][0], matriz[0][1], matriz[0][2]);
printf("\n\t[%i]\t[%i]\t[%i]\n", matriz[1][0], matriz[1][1], matriz[1][2]);
printf("\n\t[%i]\t[%i]\t[%i]\n", matriz[2][0], matriz[2][1], matriz[2][2]);


printf("\n\nDET = %i", det);

return 0;
}
