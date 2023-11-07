/*
//lectura
#include<stdio.h>
int main(){
	char caracter; //char type
	FILE*file =fopen("archivo.txt","r");
	
	if(file ==NULL){
		perror("Error en la apertura del archivo");
		return 1;
	}
	while (feof(file)==0)
	{
		caracter = fgetc(file);
		printf("%c",caracter);
	}
	fclose(file);
	printf("\n\nTodo esta en viento en popa...\n\n\n\n");

	return 0;
}

//lectura imprimir cuantas columnas hay 
#include<stdio.h>
int main(){
	char caracter; //char type
	int count;
	bool condition;
	FILE *file = fopen("Line.txt","r");
	
	if (file == NULL){
		perror("Error en la apertura del archivo");
		return 1;
	}
	count = 0;
	condition = false;
	while(feof(file)== 0)
	{
		caracter = fgetc(file);
		if(caracter == '\n ')
		condition = true;
		if(!condition)
		if(caracter == ',' )
		count++;
	
	}
	printf("%d", count);
	fclose(file);
	printf("\n\nTodo esta viento en popa...\n\n\n\n");
	return 0;

}



//escritura
#include<stdio.h>
int main(){
	FILE*archivo;
	
	archivo = fopen("archivo.txt", "w");
	if(archivo == NULL){
		perror("Error al crear el archivo");
		return 1;
	}
	//Ahora puedes escribir en el archivo
	fprintf(archivo,"Este es un nuevo archivo.\n");
	
	//Cierra el archivo despues de usarlo
	fclose(archivo);
	return 0;
}




//creacion de archivo
#include<stdio.h>
int main(){
	FILE*archivo;
	
	archivo = fopen("archivo.txt", "a");
	if(archivo == NULL){
		perror("Error al crear el archivo");
		return 1;
	}
	//Ahora puedes escribir en el archivo
	fprintf(archivo,"Este es un nuevo archivo.\n");
	
	//Cierra el archivo despues de usarlo
	fclose(archivo);
	return 0;
}


// CAMBIO DE FLUJO

#include<stdio.h>
int main (){
	FILE*file= freopen("Line.txt","w",stdout);
	if(file == NULL){
		perror("Error en la apertura del archivo");
		return 1;
	}
	//Ahora, las salida estandar(stdout" esta redirigida al archivo "line.txt"
	printf("Este texto se escribira en el archivo.\n");
	
	//Cierra el archivo
	fclose(file);
	return 0;
}	
	
|*/

#include<stdio.h>
 int main(){
 	char caracter;
 	int num;
 	FILE*archivo;
 	
 	archivo = fopen("valores.txt", "r");
 	if(archivo == NULL){
 		perror("Error al crear el archivo");
 		return 1;
 	}
 	while(feof(archivo)== 0){
 		fscanf(archivo, "%d", &num);
 		printf("%d\n",num);
 	}
 	// cierra el archivo despues de usarlo
 	fclose(archivo);
 	return 0;
 	
 }	
	
	
