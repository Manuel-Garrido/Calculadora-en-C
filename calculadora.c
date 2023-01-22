#include <stdio.h>
#include <conio.h>

int num1, num2;
int result;

void sumar(){
	result=num1+num2;
	printf("\nLa suma es: %d",result);
}

void restar(){
	result=num1-num2;
	printf("\nLa resta es: %d",result);
}

void multiplicar(){
	result=num1*num2;
	printf("\nLa multiplicación es: %d",result);
}

void dividir(){
	result=num1/num2;
	printf("\nLa división es: %d",result);
}

void introducirValores(){
	printf("Introduzca el primer valor para N1: ");
	scanf("%d",&num1);
	
	printf("\nIntroduzca el segundo valor para N2: ");
	scanf("%d",&num2);
}

void menu(){
	introducirValores();
	int opcion=0;
	printf("Bienvenido a la calculadora simple:");
	do{
		printf("\nIntroduzca que opción desea:\n1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n5.Salir\n");
		scanf("%d",&opcion);
		
		switch(opcion){
			case 1:
				sumar();
				break;
		    case 2:
		    	restar();
		    	break;
		    case 3:
		    	multiplicar();
		    	break;
		    case 4:
		    	dividir();
		    	break;
		    case 5:
		    	printf("Gracias por usar nuestra calculadora simple.");
		    	break;
		    default:
		    	printf("Usted no ha introducido una opción correcta.");
		}
	}while(opcion!=5);
}

int main(){
	menu();
	getch();
	return 0;
}
