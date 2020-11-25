#include <stdio.h>
#include <math.h>
#include <float.h>
#include <time.h>
#include <stdlib.h>

int** AbsElem(int n, int m, int x[n][m]);
int main(void) 
{
const int rowCount = 2, colCount = 2, Low = 2,  High = 15;  
srand(time(0));
int a[rowCount][colCount];  
for (int i = 0; i < rowCount; i++) 
for (int j = 0; j < colCount; j++) 
a[i][j]=Low+rand()%(High-Low+1);       //рандомні числа

for (int i = 0; i < rowCount; i++)     //вивід чисел
{
for (int j = 0; j < colCount; j++)

printf("a[%d][%d]=%d\t", i, j, a[i][j]); 
printf("\n");
                          		 //ввивід чисел
}
int **p=AbsElem( rowCount, colCount,a);   //виклик підпрограми         
for (int i = 0; i < rowCount; i++)  
for (int j = 0; j < colCount; j++)  	
{
printf("x[%d][%d]=%d\t", i, j, p[i][j]); //виклик підпрограми 
} 
}


int** AbsElem(int n, int m, int x[n][m]) //підпрограмма
{
int max = x[0][0];                 //макс. число
int b[n][m],h;         
for (int i = 0; i < n; i++)  
for (int j = 0; j < m; j++)
{            
  if(x[i][j]> max)
  {                    
    max = x[i][j];            //макс. число
  }
}
for (int i = 0; i < n; i++)  
for (int j = 0; j < m; j++)
{
  b[i][j]=x[i][j]/max;        //ділення на макс.число
}
  return b;
}