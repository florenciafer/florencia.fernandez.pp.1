/*
 ============================================================================
 Crear una funci�n llamada aplicarAumento que reciba como par�metro el precio de un producto
 y devuelva el valor del producto con un aumento del 5%. Realizar la llamada desde el main.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int aplicarAumento (int precio);
int reemplazarCaracteres ( char cadenaCaracter[], char caracter1,char caracter2);
int main(void) {
	int precio;
	precio=100;

	int aumento;
	aumento=aplicarAumento(precio);
	printf("El aumento es de %d \n",aumento);

	int numerodeiteracion;
	  char cadenaCaracter[5]="hola";
	  char caracter1="f";
	  char caracter2="n";
	numerodeiteracion=reemplazarCaracteres(cadenaCaracter,caracter1,caracter2);
	printf("las veces que se reemplazo fue de %d",numerodeiteracion);

	return EXIT_SUCCESS;
}

 int aplicarAumento (int precio)
 {

	  int aumento;
	 int precioConAumento;
	  precioConAumento =0;
	   if (precio >0)
	   {
		   aumento= precio*0.5;
		   precioConAumento =precio+aumento;
	   }

	  return  precioConAumento;
 }

 /*. Crear una funci�n que se llame reemplazarCaracteres que reciba una cadena
  *  de caracteres como primer par�metro, un car�cter como segundo
  *  y otro car�cter  como tercero,
  *   la misma deber� reemplazar cada ocurrencia del segundo par�metro por el tercero
  * y devolver la cantidad de veces que se reemplazo ese car�cter  en la cadena*/


int reemplazarCaracteres ( char cadenaCaracter[], char caracter1,char caracter2)
  {
	  	  int contador;
	  	  contador=0;
	     if ( cadenaCaracter !=NULL && caracter1 !=NULL && caracter2 !=NULL)
	     {
	    	 while (strcmp(cadenaCaracter,caracter1)!=0 || strcmp(cadenaCaracter,caracter1)!=0 )
	    		  	  {
	    		 	 	 strcpy(cadenaCaracter,caracter1);
	    		 	 	 strcpy(cadenaCaracter,caracter2);
	    		 	 	 contador++;
	    		  	  }
	    	 return contador;
	     }

  }


