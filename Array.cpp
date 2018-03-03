#include<stdio.h> 
#include<conio.h> 
int main() 
{ 
int x[10]; 
int i,j,a; 
/* Capturando los valores del arreglo */ 
for (i=0; i <10; i=i+1) 
{ 
printf("De valor de x[%d]:", i+1); 
scanf("%d",&x[i]); 
} 
/* Ordenando el arreglo */ 
for (i=0; i <10; i=i+1) 
for (j=0; j <10; j=j+1) 
if ( x[i] < x[j] ) 
{ 
a= x[i]; 
x[i]=x[j]; 
x[j]=a; 
} 
/* Desplegando el contenido del archivo */ 
for(i=0; i <10; i=i+1) 
printf("%3d", x[i]); 
getch(); 
return 0; 
} 

