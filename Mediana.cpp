#include <stdio.h>
int Numeros[10],j, i,m,tamano=10;
float mediana;  
int main () 
{ 
  printf ("Introduce los %d numeros:\n", tamano); 
  for (i = 0; i < tamano; i++) 
  	{ 
    	printf ("\n%d: ", i + 1); 
    	scanf ("%d", &Numeros[i]); 
  	} 
  	for (i = 0; i < (tamano - 1); i++) 
  	{ 
    	for (j = i + 1; j < tamano; j++) 
    	{ 
    	  if (Numeros[j] < Numeros[i]) 
      		{ 
       			m = Numeros[j]; 
        		Numeros[j] = Numeros[i]; 
        		Numeros[i] = m; 
      		} 
    	} 
  	} 
  	mediana=Numeros[4]+Numeros[5];
  	mediana=mediana/2;
	printf("la mediana de los numeros que introduciste es: %.1f",mediana);
}
