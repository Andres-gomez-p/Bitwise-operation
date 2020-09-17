//Programa ASCII
//Andrés Gómez CODIGO 2154714 David Sandoval codigo 2142786
//Version 1.0

//incluir librerias.
#include<stdio.h>
#include<string.h>
#define MAX_CHAR 20

typedef struct nombres{
	char name1[MAX_CHAR]; //nombre1
	char name2[MAX_CHAR]; //nombre2
	}nombre;
void ingreso ();	



void main()
{
	nombre recibidos;
	
	ingreso(&recibidos);
	
}

void ingreso(nombre *namex){
	printf("\n Ingrese el primer nombre: \n");
	scanf("%s", namex[0].name1);// Ingresar Andres
	printf("\n Ingrese el segundo nombre: \n");
	scanf("%s", namex[1].name2);// ingresar cualquier cosa para iniciar la variable
		
	namex[1].name2[0] = (namex[0].name1[0]|0b00000100)& 0b01000100; // cambia la A por la D
	namex[1].name2[1] = (namex[0].name1[1]|0b00000001)& 0b01100001;// cambia la n por la a
	namex[1].name2[2] = (namex[0].name1[2]>>4)| 0b01110000;// cambia la d por la v
	namex[1].name2[3] = ((namex[0].name1[3]<<2)& 0b01101001)|0b00100001;// cambia la r por la i
	namex[1].name2[4] = (namex[0].name1[4]&0b11111110);// cambia la e por la d
	namex[1].name2[5] = (namex[0].name1[5]&0b00100000);	// cambia la s por un espacio
	printf("\nNombre : %s\n", namex[1].name2 ); // imprime david
	
}

