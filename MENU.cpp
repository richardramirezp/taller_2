/*
*Nombre: Trabajo 1 ED ll
*Autor: Richard Ramirez Patiño, Sebastian Urbano.
*Fecha: 04/09/2017
*Resumen:
*/
//estructuras
struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};
struct estudiante{
	char nombre[30];
	float nota1,nota2,nota3;
	float promedio;
	char grado[10];
	char sexo;
	int edad;
	struct Promedio prom;
}alum, alumnos[100], *pAlum = &alum, *pAlumnos = alumnos;

struct Etapa{
	int horas,min,seg;
}etapa[3],*petapa = etapa;

struct Competidor{
	char nombre[20];
	int edad;
	char sexo;
	char club[20];
};

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
	char grado[10];
}alumno[3],estu[3],*p_alumno = alumno, *p_a = estu;

struct Trabajador{
	char nombre[30];
	int edad;
	char telefono[10];
	char cargo[30];
	float salario;
}trabajo[100], *ptra = trabajo;
//Libreria
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define lon 3
//Prototipos de Menus
void Menu();
void menu_Arreglos();
void MenuMatricez();
void MenuEstructuras();
void menu_punteros();
//prototipos Arreglos con Funciones
void Arreglo_Declarado();
void Arreglo_NumxNum();
void Arreglo_4x4();
//Prototipo Funciones Matrices
void matriz3x3();
void matrizAutomatica();
void matrizPrimos();

//Prototipo Funcion Registros
void N_alumnos();
void datosCompetidor();
void promedio();
void MejoryMenor();
void Alumnos_3();
void Alumno_promedio();
void trabajador();
//Prototipos Funciones
void Par();
void Primo();
void Arreglo_10();
void Menor_Arreglo();
void Arreglo_ascendente();
void Arreglo_busqueda();
void vocales();
void cada_vocal();
void SumaMatrices();
void Matriz_Transpuesta();
void alumnoPromedio();
void Etapa();
//Funcion Principal
int main(){
	Menu();
}
//Menu Principal
void Menu(){
	int opcion;

	do{
		printf("\t\t----------------------------------------\n");
		printf("\t\t|             MENU PRINCIPAL           |\n");
		printf("\t\t----------------------------------------\n");
		printf("\t\t|                  |                   |\n");
		printf("\t\t|  1. Arreglo con  |  3. Estructura    |\n");
		printf("\t\t|      Punteros.   |     con Punteros. |\n");
		printf("\t\t|  2. Matricez con |  4. Punteros      |\n");
		printf("\t\t|     Punteros.    |                   |\n");
		printf("\t\t|              0. Salir                |\n");
		printf("\t\t----------------------------------------\n\n");
		printf("\t\tQue deseas hacer: ");
		scanf("%d",&opcion);
		system("cls");
		switch(opcion){
		case 1: menu_Arreglos();
            break;
		case 2:MenuMatricez();
            break;
		case 3:MenuEstructuras();
            break;
		case 4:menu_punteros();
            break;
		case 0: exit(0);
            break;
		default: printf("\t\tNumero Equivocado\n");
            break;
		}
		system("pause");
		system("cls");
	}while(opcion != 0);
}
//Menu Arreglo Punteros
void menu_Arreglos(){
	int opcion;
	do{
		printf("\t\t-----------------------------\n");
		printf("\t\t|            MENU           |\n");
		printf("\t\t-----------------------------\n");
		printf("\t\t|                           |\n");
		printf("\t\t|  1. Arreglo con Punteros  |\n");
		printf("\t\t|  2. Arreglo NumxNum       |\n");
		printf("\t\t|     con Punteros.         |\n");
		printf("\t\t|  3. Arreglo 4x4 con       |\n");
		printf("\t\t|     Punteros.             |\n");
		printf("\t\t|  0. Salir                 |\n");
		printf("\t\t|                           |\n");
		printf("\t\t-----------------------------\n\n");
		printf("\t\tQue deseas hacer: ");
		scanf("%d",&opcion);
		system("cls");
		switch(opcion){
		case 1:Arreglo_Declarado();
			break;
		case 2:Arreglo_NumxNum();
			break;
		case 3:Arreglo_4x4();
			break;
		case 0:Menu();
			default:printf("\t\tNumero Equivocado\n\n");
			break;
		}
		system("pause");
		system("cls");
	}while(opcion != 0);
}

void Arreglo_Declarado(){
	float Arreglo[]={32.583,11.239,45.781,22.237};
	float *A = Arreglo;
	printf("\t");
	printf("\t\t--- Arreglo Punteros ---\n\n");
	printf("\t\t");
	for(int i = 0; i < 4; i++){
		printf("[%.3f] ",*(A+i));
	}printf("\n\n");
	printf("\t\t");
}
void Arreglo_NumxNum(){
    int numeros[100][100],f, c, filas,columnas;
    int *n = &numeros[0][0];

    printf("\t");
	printf("\t\t--- Arreglo Punteros ---\n\n");
    printf("\t\tIngrese el numero de filas: ");
    scanf("%d", &filas);
    printf("\t\tIngrese el numero de columnas: ");
    scanf("%d", &columnas);
    system("cls");
    printf("\t");
	printf("\t\t--- Arreglo Punteros ---\n\n");

    for(f = 0; f < filas; f++){
		for(c = 0; c < columnas; c++){
			if(f == c){
				*(n+c+f*columnas) = 1;
			}else{
				*(n+c+f*columnas) = 0;
			}
		}
	}
	printf("\n");
	for(f = 0; f < filas; f++){
		for(c = 0; c < columnas; c++){
			printf("%d ", *(n+c+f*columnas));
		}
		printf("\n");
	}
}

void Arreglo_4x4(){
    int AR[4], BR[4], CR[4], DR[4];
    int *A = AR, *B = BR, *C = CR, *D = DR;

	printf("\t");
	printf("\t\t--- Arreglo Punteros ---\n\n");
	for(int i = 0; i < 4; i++ ){
        printf("\t\tIngrese el numero %d del arreglo: ",i+1);
        scanf("%d", &*(A+i));
    }
    system("cls");
    printf("\t");
	printf("\t\t--- Arreglo Punteros ---\n\n");
    for(int i = 0; i < 4; i++){
        printf("\n");
        if(i == 0){
        	printf("\t\t");
        	for(int i=0; i<4; i++){
        		printf("[%d]    ",*(A+i));
			}
        }
        if(i == 1){
        	printf("\t\t");
        	for(int i=0; i<4; i++){
        		*(B+i) = pow(*(A+i),2);
            	printf("[%d]    ", *(B+i));
			}

        }
        if(i == 2){
        	printf("\t\t");
        	for(int i=0; i<4; i++){
        		*(C+i) = pow(*(A+i),3);
            	printf("[%d]    ", *(C+i));
			}
        }
        if(i == 3){
        	printf("\t\t");
        	for(int i=0; i<4; i++){
        		*(D+i) = pow(*(A+i),4);
            	printf("[%d]    ", *(D+i));
			}
    	}
    }printf("\n\n");
	printf("\t\t");
}
void MenuMatricez(){
	int opcion, i;

	do{
		printf("*-----------------------------MENU OPCIONES----------------------------*\n");
        printf("*  1. llenar Matriz 3x3.                                                *\n");
        printf("*  2. llenar Matriz automaticamente por el sistema                     *\n");
        printf("*  3. llenar Matriz automaticamente por el sistema con numeros primos  *\n");
        printf("*  0.Salir                                                             *\n");
        printf("*----------------------------------------------------------------------*\n");
        printf("\nQue deseas hacer: ");
        scanf("%d",&opcion);
        system("cls");

        switch(opcion){
            case 1: matriz3x3();
                break;
            case 2: matrizAutomatica();
                break;
            case 3: matrizPrimos();
                break;
            case 0: Menu();
                break;
            default: printf("vuelva a intentar Numero equivocado\n");
                break;
        }
    	system("pause");
		system("cls");
	}while(opcion != 0);
}

void matriz3x3(){
	int matriz[lon][lon], suma = 0;
	int c,f,*psuma;
	int *p = &matriz[0][0];
	psuma = &suma;

	for(int f=0 ; f < lon; f++){
		for(int c = 0; c < lon ; c++){
        printf("ingrese valor posicion [%d][%d]:  ", f, c);
        scanf("%d",&*(p+c+f*lon));
		}
	}
	system("cls");
	for(f = 0; f < lon; f++){
		for(c = 0; c < lon; c++){
			suma = suma + *(p+c+f*lon);
		}
	}
	for(f = 0; f < lon; f++){
		for(c = 0; c < lon; c++){
			printf("%d  ",*(p+c+f*lon));
		}printf("\n");
	}
	printf("\nLa suma es igual a = %d  \n",suma);
	printf("\n");
}

void matrizAutomatica(){
    int automatica[lon][lon];
	int f, c;
	int *pm = &automatica[0][0];

	srand(time(0));
       for (f = 0; f < lon; f++){
         for (c = 0; c < lon; c++){
           *(pm+c+f*lon) = rand()%(20);
            printf("\t%d",*(pm+c+f*lon));
         }
       printf("\n");
    }
}

void matrizPrimos(){
    int Num, filaprima = 0, columnaprima = 0;
    int primos[lon][lon], *pp;
    int i = 1, d = 0, f, c;
    pp = &primos[0][0];

    printf("Ingrese un numero inicial: ");
    scanf("%d", &Num);
    system("cls");

    while(filaprima < lon){
        while(true){
            if( Num % i == 0){
              d += 1;
            }
            if(d > 2){
                break;
            }
            if(i >= Num){
        		break;
        	}
            i += 1;
        }
        if(d == 2){
            *(pp+columnaprima+filaprima*lon) = Num;
            columnaprima += 1;
            if(columnaprima == lon){
                filaprima += 1;
                columnaprima = 0;
            }
        }
        Num += 1;
        i = 1;
        d = 0;
    }
    for(c = 0; c < lon; c++){
	    for(int f = 0; f < lon; f++){
	        printf("%d \t", *(pp+c+f*lon));
	    }
	    printf("\n");
    }
}
void menu_punteros(){
	int x;
    int opcion;
    do{
		printf("\t\t************************************************\n");
		printf("\t\t*                    MENU                      *\n");
        printf("\t\t************************************************\n");
		printf("\t\t*                                              *\n");
        printf("\t\t*   1. Par o Impar.                            *\n");
        printf("\t\t*   2. Primo o no.                             *\n");
        printf("\t\t*   3. Pares de un arreglo.                    *\n");
        printf("\t\t*   4. Menor numero de un Arreglo.             *\n");
        printf("\t\t*   5. Arreglo  en orden.                      *\n");
        printf("\t\t*   6. Buscar en el arreglo.                   *\n");
        printf("\t\t*   7. Numero de vocales.                      *\n");
        printf("\t\t*   8. Numero de veces de cada vocal.          *\n");
        printf("\t\t*   9. Suma de Mactricez.                      *\n");
        printf("\t\t*  10. Matriz Trasnpuesta.                     *\n");
        printf("\t\t*  11. Estructura Alumno.                      *\n");
        printf("\t\t*  12. Estructura Tiempo Etapa.                *\n");
        printf("\t\t*   0. Salir                                   *\n");
        printf("\t\t*                                              *\n");
		printf("\t\t************************************************\n\n");
        printf("\t\tQue deseas realizar:  ");
        scanf("%d", &opcion);
		system("cls");
        switch(opcion){
            case 1:Par();
                break;
            case 2:Primo();
                break;
            case 3:Arreglo_10();
                break;
            case 4:Menor_Arreglo();
                break;
            case 5:Arreglo_ascendente();
                break;
            case 6:Arreglo_busqueda();
                break;
            case 7:vocales();
                break;
            case 8:cada_vocal();
                break;
            case 9:SumaMatrices();
                break;
            case 10:Matriz_Transpuesta();
                break;
            case 11:alumnoPromedio();
                break;
            case 12:Etapa();
                break;
            default: printf("\t\tOpcion invalida\n\n");
                break;
        }
        system("pause");
        system("cls");
    }while(opcion != 0);
}
void Par(){
	int num, *p;
	p = &num;

	printf("Ingrese un numero: "); //Pedimos el numero al usuario
	scanf("%d",p);


	if(*p %2 == 0){
		printf("\nEl numero: %d " ,*p );
		printf("es par");
		printf("\nLa Posicion es:  %p " ,p );
	}
	else{
		printf("\nEl numero: %d " ,*p );
		printf ("es impar");
		printf("\nLa Posicion es:  %p " ,p);
	}
}
void Primo(){
	int num,*p,cont=0;

	printf("Ingrese un numero: ");
	scanf("%d",&num);
	p = &num;

	//Determinamos si es primo o no
	for(int i = 1;i < num; i++){
		if(*p % i == 0){
			cont++;
		}
	}

	if(cont>2){
		printf("\nEl numero: %d " ,*p );
		printf("No es Primo");
		printf("\nLa Posicion es:  %p " ,p);
	}
	else{
		printf("\nEl numero: %d " ,*p );
		printf ("es Primo ");
		printf("\nLa Posicion es:  %p " ,p);
	}
}
void Arreglo_10(){
	int num[10];
	int *p = num;

	for(int i=0;i<10;i++){
		printf("Digite un numero[%d]: ", i+1);
		scanf("%d",&*(p+i));
	}
	system("cls");
	for(int i=0;i<10;i++){
		if(*(p+i) % 2 == 0){
			printf("\nEste es un Numero par: %d", *(p+i));
			printf("\nPosicion: %p\n",*(&p + i));
		}
	}
}
void Menor_Arreglo(){
	int num[100];
	int *p=num;
	int menor=0,longitud;

	printf("ingrese la longitud del arreglo: ");
	scanf("%d", &longitud);

	for(int i=0;i < longitud; i++){
		printf("\nDigite un numero[%d]: ", i+1);
		scanf("%d", &num[i]);
	}
	menor = *p;

	for(int i=0; i < longitud; i++){
		if(*(p+i) < menor){
			menor = *(p+i);
		}
	}
	printf("\nEl menor elemento es: %d", menor);
	printf("\nPosicion: %p", p);
	printf("\n");
}
void Arreglo_ascendente(){
	int longitud, i, j, aux;
	int arreglo[100];
	int *pArreglo = arreglo;

	printf("Ingrese Longitud del Arreglo: ");
	scanf("%d", &longitud);

	for(i = 0; i < longitud; i++){
		printf("Digite un numero[%d]: ", i);
		scanf("%d", &arreglo[i]);
	}

	for(i = 1; i < longitud; i++) {
        j = i;
        aux = pArreglo[i];
        while(j > 0 && aux < pArreglo[j-1]){
            pArreglo[j] = pArreglo[j-1];
            j--;
        }
        pArreglo[j] = aux;
    }
    for(i = 0; i < longitud; i++) {
        printf("\nEl arreglo ordenado es: %d ", pArreglo[i]);
    }
    printf("\n");
}

void Arreglo_busqueda(){
		int arreglo[100];
	int *pArreglo = arreglo;
	int longitud, i, dato;
	bool estado = false;

	printf("Ingrese Longitud del Arreglo: ");
	scanf("%d", &longitud);

	for(i = 0; i < longitud; i++){
		printf("Digite un numero[%d]: ", i);
		scanf("%d", &arreglo[i]);
	}
	system("cls");

	printf("\nIngrese el numero que desea buscar:");
		scanf("%d", &dato);

   for(i = 0; i < longitud; i++){
       if(pArreglo[i] == dato){
           estado = true;
           break;
       }
   }
   if(estado == true){
       printf("\nDato Encontrado \n");
   } else {
       printf("\nDato No Encontrado \n");
   }
}
void vocales(){
	int c,cont = 0;
	int *pcont = &cont;
	printf("DIgite una frase y luego presione control+z");
	while (EOF != (c = getchar())){
		switch(c){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':cont++;

		}
	}
	printf("La frase tiene: %d vocales ",*pcont);
}

void cada_vocal(){
	char frase[100];
	char *pfrase = frase;
	int a_con=0, e_con=0,i_con=0, o_con=0,u_con=0;
	int *pa_con=&a_con, *pe_con=&e_con, *pi_con=&i_con, *po_con=&o_con, *pu_con=&u_con;
	fflush(stdin);
	printf("Ingrese una frase: ");
	fgets(frase,100,stdin);

	for(int i = 0; i < 100; i++){
		switch(frase[i]){
			case 'a':a_con++;break;
			case 'e':e_con++;break;
			case 'i':i_con++;break;
			case 'o':o_con++;break;
			case 'u':u_con++;break;
		}
	}
	printf("\nvocal a: %d",*pa_con);
	printf("\nvocal e: %d",*pe_con);
	printf("\nvocal i: %d",*pi_con);
	printf("\nvocal o: %d",*po_con);
	printf("\nvocal u: %d",*pu_con);
	printf("\n");
}
void SumaMatrices(){
	int f,c,filas,columnas;
	int A[f][c], B[f][c], C[f][c];
	int *pa = &A[0][0], *pb = &B[0][0], *pc = &C[0][0];

	printf("Digite el tamano de las filas: ");
	scanf("%d",&filas);
	printf("Digite el tamano de las columnas: ");
	scanf("%d",&columnas);
	system("cls");

	//llenar las matrices
	printf("\tLlene La Matriz 1\n");
	for(f = 0; f < filas; f++){
		for(c = 0; c < columnas; c++){
			printf("Ingrese Numero En La Posicion [%d][%d]: ", f, c);
			scanf("%d", &*(pa+c+f*columnas));
		}
	}
	printf("\n\tLlene La Matriz 2\n");
	for(f = 0; f < filas; f++){
		for(c = 0; c < columnas; c++){
			printf("Ingrese Numero En La Posicion [%d][%d]: ", f, c);
			scanf("%d", &*(pb+c+f*columnas));
		}
	}
	system("cls");

	//imprimir matrices
	printf("\n\tMatriz 1\n");
	for(f = 0; f < filas; f++){
		for(c = 0; c < columnas; c++){
			printf("%d ", *(pa+c+f*columnas));
		}
		printf("\n");
	}
	printf("\n\tMatriz 2\n");
	for(f = 0; f < filas; f++){
		for(c = 0; c < columnas; c++){
			printf("%d ", *(pb+c+f*columnas));
		}
		printf("\n");
	}

	//sumo las dos matrices
	printf("\n\tLa Suma De Las Dos Matrices\n");
	for(f = 0; f < filas; f++){
		for(c = 0; c < columnas; c++){
			*(pc+c+f*columnas) = *(pa+c+f*columnas) + *(pb+c+f*columnas);
			printf("%d ", *(pc+c+f*columnas));
		}
		printf("\n");
	}
}
void Matriz_Transpuesta(){
	int i,j;
	int l, matriz[l][l];
	int *pm = &matriz[0][0];

		printf("\tLlene La Matriz\n");
	for(i = 0; i < l; i++){
		for(j = 0; j < l; j++){
			printf("Ingrese Numero En La Posicion [%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	//matriz original
	printf("\tMatriz Llena\n");
	for(i = 0; i < l; i++){
		for(j = 0; j < l; j++){
			printf("%d ", *(pm + j + i * l));
		}
		printf("\n");
	}

	//matriz transpuesta
	printf("\tMatriz Traspuesta\n");
	for(i = 0; i < l; i++){
		for(j = 0; j < l; j++){
			printf("%d ", *(pm + i + j * l));
		}
		printf("\n");
	}
}
void alumnoPromedio(){
	float Mejorpro = 0.0;
	int posicion = 0;

	for(int i = 0; i < 3; i++){
		printf("\n\tIngrese Datos Del Estudiante\n");
		fflush(stdin);
		printf("\nIngrese Nombre Del Estudiante: ");
		fgets((p_alumno + i) -> nombre, 30, stdin);
		printf("Ingrese La Edad: ");
		scanf("%d", &((p_alumno + i) -> edad));
		printf("Ingrese El Promedio: ");
		scanf("%f", &((p_alumno + i) -> promedio));
		fflush(stdin);
		system("cls");
	}

	for(int i = 0; i < 3; i++){
		if((p_alumno + i) -> promedio > Mejorpro){
			Mejorpro = (p_alumno + i) -> promedio;
			posicion = i;
		}
	}

	printf("\n-----ALUMNO CON EL MEJOR PROMEDIO-----\n");
	printf("\nNombre: %s", ((p_alumno + posicion) -> nombre));
	printf("Edad: %d\n", ((p_alumno + posicion) -> edad));
	printf("Promedio: %0.1f", ((p_alumno + posicion) -> promedio));
	printf("\n\n");
}
void Etapa(){

	int horas=0,minutos=0,segundos=0;

	printf("Digite los tiempos empleados: \n");
	for(int i=0;i<3;i++){
		printf("Horas: "),
		scanf("%d",&((petapa+i)->horas));
		printf("Minutos: ");
		scanf("%d",&((petapa+i)->min));
		printf("Segundos: ");
		scanf("%d",&((petapa+i)->seg));
		printf("\n");
	}
	for(int i=0;i<3;i++){
		horas += (petapa+i)->horas;
		minutos += (petapa+i)->min;
		if(minutos >= 60){
			minutos -= 60;
			horas++;
		}
		segundos += (petapa+i)->seg;
		if(segundos >= 60){
			segundos -= 60;
			minutos++;
		}
	}

	printf("\n-----TIEMPO TOTAL DE LA ETAPA-----");
	printf("\nHoras: %d", horas);
	printf("\nMinutos: %d", minutos);
	printf("\nSegundos: %d", segundos);
	printf("\n\n");

}
void MenuEstructuras(){
	int x;
    int opcion;
    do{
		printf("\t\t************************************************\n");
		printf("\t\t*                    MENU                      *\n");
        printf("\t\t************************************************\n");
		printf("\t\t*                                              *\n");
        printf("\t\t*   1. Datos de un Competidor                  *\n");
        printf("\t\t*   2. Mejor Promedio de 3 estudiantes.        *\n");
        printf("\t\t*   3. Trabajador                              *\n");
        printf("\t\t*   4. Mejor y menor Promedio de N estudiantes *\n");
        printf("\t\t*   0. Salir                                   *\n");
        printf("\t\t*                                              *\n");
		printf("\t\t************************************************\n\n");
        printf("\t\tQue deseas realizar:  ");
        scanf("%d", &opcion);
		system("cls");
        switch(opcion){
            case 1:datosCompetidor();
                break;
            case 2:Alumno_promedio();
                break;
            case 3:trabajador();Alumnos_3(); 
                break;
            case 4:promedio(); 
                break;
            case 5:N_alumnos();
                break;
            case 6:
                break;
            case 7: MejoryMenor();
                break;
            case 0: Menu();
                break;
            default: printf("\t\tOpcion invalida\n\n");
                break;
        }
        system("pause");
        system("cls");
    }while(opcion != 0);
}
void datosCompetidor(){
	Competidor Compe;
	Competidor *pC = &Compe;
	fflush(stdin);
	char categoria[20];

	printf("\t");
	printf("\t\t*** Datos Participante ***\n\n");
	printf("\t\tIngrese Nombre: ");
	fgets(pC->nombre,20,stdin);
	printf("\t\tIngrese Edad: ");
	scanf("%d", &pC->edad);
	fflush(stdin);
	printf("\t\tIngrese m => masculino o f => femenino: ");
	scanf("%c", &pC->sexo);
	fflush(stdin);
	printf("\t\tIngrese Nombre del Club: ");
	fgets(pC->club,20,stdin);
	system("cls");
	fflush(stdin);
	printf("\t");
	printf("\t\t*** Datos Participante ***\n\n");
	printf("\t\tNombre: %s",pC->nombre);
	printf("\t\tEdad: %d\n",pC->edad);
	printf("\t\tSexo: %c\n",pC->sexo);
	printf("\t\tClub: %s",pC->club);
	printf("\t\tCategoria: ");
	if(pC->edad <= 15){
		printf("Infantil");
	}
	else if(pC->edad <= 40){
		printf("Joven");
	}
	else{
		printf("Mayor");
	}printf("\n\n");
}
void Alumno_promedio(){
	float Mejorpro = 0.0;
	int posicion = 0;

	for(int i = 0; i < 3; i++){
		printf("\n\tIngrese Datos Del Estudiante\n");
		fflush(stdin);
		printf("\nIngrese Nombre Del Estudiante: ");
		fgets((p_a + i) -> nombre, 30, stdin);
		printf("Ingrese La Edad: ");
		scanf("%d", &(p_a+ i) -> edad);
		printf("Ingrese El Grado: ");
		scanf("%d", &((p_a + i) -> grado ));
		printf("Ingrese El Promedio: ");
		scanf("%f", &((p_a + i) -> promedio));
		fflush(stdin);
		system("cls");
	}

	for(int i = 0; i < 3; i++){
		if((p_a + i) -> promedio > Mejorpro){
			Mejorpro = (p_a + i) -> promedio;
			posicion = i;
		}
	}

	printf("\n-----ALUMNO CON EL MEJOR PROMEDIO-----\n");
	printf("\nNombre: %s", ((p_a + posicion) -> nombre));
	printf("Edad: %d\n", ((p_a + posicion) -> edad));
	printf("Grado: %d\n", ((p_a + posicion) -> grado));
	printf("Promedio: %0.1f", ((p_a+ posicion) -> promedio));
	printf("\n\n");
}
void trabajador(){
	float MejorSalario = 0.0, MenorSalario = 0.0;
	int cont = 0, con =0;

	for(int i = 0; i < 3; i++){
		printf("\n\tIngrese Datos Del Estudiante\n");
		fflush(stdin);
		printf("\nIngrese Nombre Del Trabajado: ");
		fgets((ptra + i) -> nombre, 30, stdin);
		printf("Ingrese La Edad: ");
		scanf("%d", &(ptra + i) -> edad);
		printf("Ingrese El Telefono: ");
		fflush(stdin);
		fgets((ptra + i) -> telefono, 10, stdin);
		printf("Ingrese El Cargo: ");
		fflush(stdin);
		fgets((ptra + i) -> cargo, 30, stdin);
		printf("Ingrese El Salario: ");
		scanf("%f", &((ptra + i) -> salario));
		fflush(stdin);
		system("cls");
	}

	for(int i = 0; i < 3; i++){
		if((ptra + i) -> salario > MejorSalario){
			MejorSalario = (ptra + i) -> salario;
			cont = i;
		}
	}
	for(int i = 0; i < 3; i++){
		if((ptra + i) -> salario < MenorSalario || MenorSalario == 0.0  ){
			MenorSalario = (ptra + i) -> salario;
			con = i;
		}
	}

	printf("\n-----Trabajador con el mayor salario-----\n\n");
	printf("\nNombre: %s", ((ptra + cont) -> nombre));
	printf("Edad: %d\n", ((ptra + cont) -> edad));
	printf("Telefono: %s\n", ((ptra + cont) -> telefono));
	printf("Cargo: %s\n", ((ptra + cont) -> cargo));
	printf("salario: %0.1f", ((ptra + cont) -> salario));
	printf("\n\n");
	printf("\n-----Trabajador con el menor salario-----\n\n");
	printf("\nNombre: %s", ((ptra + con) -> nombre));
	printf("Edad: %d\n", ((ptra + con) -> edad));
	printf("Telefono: %s\n", ((ptra + con) -> telefono));
	printf("Cargo: %s\n", ((ptra + con) -> cargo));
	printf("salario: %0.1f", ((ptra + con) -> salario));
	printf("\n\n");
}
void promedio(){
	int i;
	int promMayor=0;
	float promedio_alumno,mayor=0;

	printf("\t");
	printf("\t\t*** Datos Estudiante ***\n\n");
	fflush(stdin);
	printf("\t\tIngrese Nombre: ");
	fgets(pAlum->nombre,30,stdin);
	printf("\t\tIngrese m => masculino o f => femenino: ");
	scanf("%c", &pAlum->sexo);
	printf("\t\tIngrese edad: ");
	scanf("%d", &pAlum->edad);
	printf("\n\t");
	printf("\t\t*** Datos Notas ***\n\n");
	printf("\t\tNota1: ");
	scanf("%f", &pAlum->prom.nota1);
	printf("\t\tNota2: ");
	scanf("%f", &pAlum->prom.nota2);
	printf("\t\tNota3: ");
	scanf("%f", &pAlum->prom.nota3);
	promedio_alumno = (pAlum->prom.nota1+pAlum->prom.nota2+pAlum->prom.nota3)/3;
	system("cls");
	printf("\t");
	printf("\t\t***Datos del Estudiante***\n\n");
	printf("\t\tNombre: %s",pAlum->nombre);
	printf("\t\tSexo: %c\n",pAlum->sexo);
	printf("\t\tEdad: %d\n",pAlum->edad);
	printf("\t\tPromedio: %0.2f\n",promedio_alumno);
}
void N_alumnos(){
	int i, n;
	int cont = 0, con = 0;
	float promedio_alumno;
	float menor =0.0, mayor = 0.0;
	
	printf("\t");
	printf("\t\t*** Datos Estudiante ***\n\n");
	printf("\t\tCuantos alumnos deceas promediar: ");
	scanf("%d",&n);
	fflush(stdin);
	system("cls");

	for(i = 0; i < n; i++){
		printf("\t");
		printf("\t\t*** Datos Estudiante ***\n\n");
		fflush(stdin);
		printf("\t\tIngrese Nombre: ");
		fgets((pAlumnos + i)->nombre,30,stdin);
		printf("\t\tIngrese m => masculino o f => femenino: ");
		scanf("%c", &(pAlumnos + i)->sexo);
		printf("\t\tIngrese edad: ");
		scanf("%d", &(pAlumnos + i)->edad);
		printf("\n\t");
		printf("\t\t*** Datos Notas ***\n\n");
		printf("\t\tNota1: ");
		scanf("%f", &(pAlumnos + i)->prom.nota1);
		printf("\t\tNota2: ");
		scanf("%f", &(pAlumnos + i)->prom.nota2);
		printf("\t\tNota3: ");
		scanf("%f", &(pAlumnos + i)->prom.nota3);
		promedio_alumno = ((pAlumnos + i)->prom.nota1+(pAlumnos + i)->prom.nota2+(pAlumnos + i)->prom.nota3)/3;
		system("cls");
		if(promedio_alumno > mayor){
			mayor = promedio_alumno ;
			cont = i;
		}
		if(promedio_alumno  < menor || menor == 0.0  ){
			menor = promedio_alumno ;
			con = i;
		}
	}printf("\t");
	printf("\t\t*** Datos Estudiante Mayor Promedio ***\n\n");
	printf("\t\tNombre: %s",(pAlumnos + cont)->nombre);
	printf("\t\tSexo: %c\n",(pAlumnos + cont)->sexo);
	printf("\t\tEdad: %d\n",(pAlumnos + cont)->edad);
	printf("\t\tPromedio: %0.2f\n\n",mayor);
	printf("\t\t*** Datos Estudiante Menor Promedio ***\n\n");
	printf("\t\tNombre: %s",(pAlumnos + con)->nombre);
	printf("\t\tSexo: %c\n",(pAlumnos + con)->sexo);
	printf("\t\tEdad: %d\n",(pAlumnos + con)->edad);
	printf("\t\tPromedio: %0.2f\n",menor);
	
}

void Alumnos_3(){
	estudiante alumno[3];
	estudiante *pe = alumno;
	int i;
	int mayor=0;
	float e_mayor;

	for(i = 0; i < 3; i++){
		printf("\t");
		printf("\t\t*** Datos Estudiante ***\n\n");
		printf("\t\tEstudiante %d:\n\n",i+1);
		fflush(stdin);
		printf("\t\tIngrese Nombre: ");
		fgets(pe->nombre,30,stdin);
		printf("\t\tIngrese edad: ");
		scanf("%d", &pe->edad);
		printf("\t\tIngrese el grado en letras: ");
		fflush(stdin);
		fgets(pe->grado,10,stdin);
		printf("\t\tIngrese el promedio: ");
		fflush(stdin);
		scanf("%c", &pe->promedio);
		system("cls");
		if(pe->promedio > mayor){
			mayor = pe->promedio;
			e_mayor = mayor;
		}
		fflush(stdin);
	}
	printf("\t");
	printf("\t\t***Datos del Estudiante***\n\n");
	printf("\t\tNombre: %s",(pe + mayor)->nombre);
	printf("\t\tGrado: %s\n",(pe + mayor)->grado);
	printf("\t\tEdad: %d\n",(pe + mayor)->edad);
	printf("\t\tPromedio: %0.2f\n",e_mayor);
}



void MejoryMenor(){
	int n_alumnos,promMayor=0;
	float promedio_alumno[100],mayor=0;

	printf("\t");
	printf("\t\t*** Datos Estudiante ***\n\n");
	printf("\t\tIngrese Numero de alumnos: ");
	scanf("%d",&n_alumnos);
	system("cls");
	for(int i=0;i<n_alumnos;i++){
		printf("\t");
		printf("\t\t*** Datos Estudiante ***\n\n");
		fflush(stdin);
		printf("\t\tIngrese Nombre: ");
		fgets(alumnos[i].nombre,30,stdin);
		printf("\t\tIngrese m => masculino o f => femenino: ");
		scanf("%c", &alumnos[i].sexo);
		printf("\t\tIngrese edad: ");
		scanf("%d", &alumnos[i].edad);
		printf("\n\t");
		printf("\t\t*** Datos Notas ***\n\n");
		printf("\t\tNota1: ");
		scanf("%f", &alumnos[i].prom.nota1);
		printf("\t\tNota2: ");
		scanf("%f", &alumnos[i].prom.nota2);
		printf("\t\tNota3: ");
		scanf("%f", &alumnos[i].prom.nota3);

		promedio_alumno[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;

		if(promedio_alumno[i] > mayor){
			mayor = promedio_alumno[i];
			promMayor = i;
		}
		system("cls");
	}printf("\t");
	printf("\t\t*** El Alumno con Mejor Promedio es ***\n\n");
	printf("\t\tNombre: %s",alumnos[promMayor].nombre);
	printf("\t\tSexo: %c\n",alumnos[promMayor].sexo);
	printf("\t\tEdad: %d\n",alumnos[promMayor].edad);
	printf("\t\tPromedio: %0.2f\n",promedio_alumno[promMayor]);
	printf("\n");
}

