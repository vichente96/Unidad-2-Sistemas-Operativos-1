#include <stdio.h>
#include <math.h>

int main(){
	
	int x,y,z;
	float d1,d2,r;
	
    do{
	
	printf("***************CALCULADORA**************\n");
	printf("***Elaborado por Vicente Mata Velasco***\n");
   
    printf ("Elige una opcion\n");    //Imprimimos un menu de operaciones 
    printf("-------------------------------------\n");
	printf ("1.Suma\n2.Resta\n3.Division\n4.Multiplicacion\n5.Raiz Cuadrada\n6.Potencia\n");
	printf("-------------------------------------\n");
	printf("Opcion: ");
	scanf ("%d",&x);
	if(x>=1&&x<=6){   //Delimitamos los numeros del 1 al 6  para las cinco opcioness
		
	if (x==5){  //Como para raiz cuadrada solo se calcula con un solo numero hacemos la condicion solo para la opcion 5
		printf("Introcuce el numero: \n");
		scanf ("%f",&d1);
		r=sqrt(d1);
		printf("Su raiz cuadrada es: %.2f",r); //Solo imprimira 2 decimales
	}
	
	 else if  (x==6){
		printf("Introcuce el numero: \n");
		scanf ("%f",&d1);	
		printf ("Itroduce el numero a elevar:\n");
		scanf("%f",&d2);
		r=pow (d1,d2);
		printf("El resudltado de %.f elevado a %.f es:  %.2f ",d1,d2,r);
	}
	
	else{  //Sino se eligio la opcion 5 se realiza un switch case para las otras 4 opciones
	
	printf("Introduce el primer numero:\n");   //Para las siguintes operaciones forzosamente se necesitan 2 numeros 
    scanf ("%f",&d1);
    printf("Introduce el segundo numero:\n");
    scanf ("%f",&d2);
	switch (x) //Asignamos el dato de respuesta la variable x
	{
		
		case 1: {
		r=d1+d2;  //Suma
		printf("\nLa suma de valores es: %.2f",r);
		break;
     	}
     	
     	case 2: {   //Resta
		r=d1-d2;
		printf("\nLa Resta de valores es: %.2f",r);
		break;
     	}
     	
		case 3: {   //Division
		r=d1/d2;
		printf("\nLa division de valores es: %.2f",r);
		break;
     	}
     	
      	case 4: {    //Multiplicacion
		r=d1*d2;
		printf("\nLa multiplicacion de valores es: %.2f",r);
		break;
     	}
	    
	}

        }
}

else{
printf("\n***ERROR*** Opcion no valida");  //Mandamos una respuesta de error en dado caso que se digite un numero que no este en el menu
}
	printf("\nDigite 1 para otra opcion \nPresione un numero distinto para terminar \n");
	scanf ("%d",&y);

	}while (y==1);  //Usamos un do while para hacer distintas operaciones y se termine la ejecucion cuando se digite un numero distinto a 1
		 return 0;
}
