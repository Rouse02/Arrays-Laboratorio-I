#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
//PROTOTIPADO FUNC
int cargarArray(int array[]); //1
void recorrerArray(int array[], int validos); //2
void sumarValidos(int array[], int validos); //3
void pasarArrayaPila(int array[], int validos, Pila *pila); //4
float cargarArrayFloat(float arrayFlotante[]);//5
float sumarFlotantesArray(float arrayFlotante[],int validos); //5
int cargarArrayChar(char arrayChar[]); //6
void mostrarArrayChar(char arrayChar[], int validos); //6
int encontrarCaracter(char array[], int validos, char letra); //6
void ordenamientoXinsercion(char arrayChar[], int validos); //7
void insertarChar(char arrayChar[], int posicionBusqueda, char dato); //7
void charMayor(char arrayChar[], int validos); //8
int cargarArrayAleatorio(int array[]); //9
int comparacionCapicua(int array[], int copia[], int validos); //9
void copyArrayInverted(int array[], int arrayCopia[], int validos); //10
void ordenamientoXinsercion1(int array[], int validos); //11
void insertarNum(int array[], int posicionBusqueda, int dato);//11
void ordenamientoXseleccion(int array[], int validos); //11
int posicionMenor(int array[], int index, int validos); //11
void unionArrays(char char1[], char char2[], char unido[], int validos3);//12
void sumaArrays(int vector[], int vectorSum[], int  validos); //13

int main()
{
    /**1.Hacer una función que reciba como parámetro
    un arreglo de números enteros y permita que
    el usuario ingrese valores al mismo por teclado.
    La función debe retornar la cantidad de
    elementos cargados en el arreglo
    (o pueden utilizar como puntero válidos).*/
    int miArreglo[10];
    int validos;

    //validos = cargarArray(miArreglo);//Cargando mi arreglo

    /**2.Hacer una función que reciba como parámetro un arreglo y
    la cantidad de elementos (válidos)
    cargados en él y los muestre por pantalla.*/

    //recorrerArray(miArreglo, validos); //Mostrar validos de un arreglo

    /**3.Hacer una función que reciba como parámetro un arreglo y
    la cantidad de elementos (válidos)
    cargados en él y calcule la suma de sus elementos. */
    /*validos = cargarArray(miArreglo);
    sumarValidos(miArreglo, validos); */

    /**4.Hacer una función que reciba como parámetro un arreglo,
    la cantidad de elementos (válidos)
    cargados en él y una Pila. La función debe copiar los elementos
    del arreglo en la pila.*/
    /*
    Pila pila;
    inicpila(&pila);

    validos = cargarArray(miArreglo);
    recorrerArray(miArreglo, validos);
    pasarArrayaPila(miArreglo, validos, &pila); */

    /**5 Realizar una función que sume los elementos de un arreglo de números reales (float) de
    dimensión 100. (se recomienda hacer una función para cargar y otra para mostrar para este
    tipo de dato asociado al arreglo) */
    /*
    float arrayFlotante[100];
    float resultado;

    validos = cargarArrayFloat(arrayFlotante);

    resultado = sumarFlotantesArray(arrayFlotante, validos);

    printf("La suma de los elementos del Arreglo es: %.2f", resultado);
    printf("\n"); */

    /**6 Realizar una función que indique si un elemento dado se encuentra en un arreglo de
    caracteres. */

   /* char arrayChar[50];

    validos = cargarArrayChar(arrayChar);
    mostrarArrayChar(arrayChar, validos);
    printf("\n");

    char letra;
    int resultado;

    printf("\n");
    printf("Ingrese el la letra a encontrar: ");
    fflush(stdin);
    scanf("%c", &letra);
    printf("\n");

    resultado = encontrarCaracter(arrayChar, validos, letra);

    if(resultado == 1) {
        printf("Letra encontrada con exito :)");
        printf("\n");
    }   else {
        printf("Letra no encontrada :c");
        printf("\n");
    }
    */
    /**7 Realizar una función que inserte un carácter en un arreglo ordenado alfabéticamente,
    conservando el orden. */

    /*char arrayCaracter[50];
    /*char dato;

    validos = cargarArrayChar(arrayCaracter); //Carga el array

    printf("Ordenando elementos cargados... \n");
    printf("\n");
    ordenamientoXinsercion(arrayCaracter, validos);
    printf("Elementos del Arreglo cargado: ");
    mostrarArrayChar(arrayCaracter, validos); //Muestra los válidos del Array
    printf("\n");
    printf("\n");

    printf("Ingrese el dato a insertar: ");
    fflush(stdin);
    scanf("%c", &dato);
    printf("\n");

    arrayCaracter[validos] = dato;
    mostrarArrayChar(arrayCaracter, validos + 1);
    printf("\n");
    printf("\n");

    ordenamientoXinsercion(arrayCaracter, validos + 1);
    printf("Ordenando elementos nuevamente... \n");
    printf("\n");
    mostrarArrayChar(arrayCaracter, validos + 1); */

    /**8 Realizar una función que obtenga el máximo carácter de un arreglo dado */
    /*validos = cargarArrayChar(arrayCaracter);
    printf("Elementos del Arreglo: ");
    mostrarArrayChar(arrayCaracter, validos);
    printf("\n");
    printf("\n");

    charMayor(arrayCaracter, validos); */

    /**9 Realizar una función que determine si un arreglo es capicúa.*/
    /*int vector[5];
    int vectorCopia[5];
    int datos, resultado;

    datos = cargarArrayAleatorio(vector);

    printf("Los elementos cargados al Array son: \n");
    recorrerArray(vector, datos);
    printf("\n");

    resultado = comparacionCapicua(vector, vectorCopia, datos);

    if(resultado == 1) {
        printf("Es capicua :)");
    }
    else {
        printf("No es capicua :c");
    }
    printf("\n"); */

    /**10Realizar una función que invierta los elementos de un arreglo.(sin utilizar un arreglo auxiliar)*/
    /*int vector[50];
    int vectorCopy[50];

    validos = cargarArray(vector);

    printf("Arreglo cargado \n");
    recorrerArray(vector, validos);

    printf("\n");
    copyArrayInverted(vector, vectorCopy, validos);
    recorrerArray(vectorCopy, validos); */

    /**11Ordenar un arreglo según los siguientes métodos:A) Selección B) Inserción */
    //int vector[50];

    /*validos = cargarArray(vector);
    printf("Arreglo cargado: \n");
    recorrerArray(vector, validos);
    printf("\n");


    ordenamientoXinsercion1(vector, validos);
    printf("ARREGLO ORDENADO POR INSERCION: \n ");
    recorrerArray(vector, validos);
    printf("\n");

    printf("Cargar un nuevo arreglo para ordenarlo por seleccion \n");
    printf("\n");

    validos = cargarArray(vector);
    printf("Arreglo cargado: \n");
    recorrerArray(vector, validos);
    printf("\n");

    printf("Mostrando nuevo arreglo cargado: \n");
    recorrerArray(vector, validos);
    printf("\n");

    ordenamientoXseleccion(vector, validos);
    printf("ARREGLO NUEVO ORDENADO POR SELECCION: \n ");
    recorrerArray(vector, validos); */

    /**12 Dados dos arreglos ordenados alfabéticamente, crear un tercer arreglo con los elementos de
    los dos primeros intercalados, de manera que quede un arreglo también ordenado
    alfabéticamente */

    char char1[50];
    char char2[50];
    char unido[100];
    int v1;
    int v2;
    int v3;
    int totalV;

    printf("\n");
    printf("Cargue el arreglo 1... \n");
    printf("\n");
    v1 = cargarArrayChar(char1);
    printf("Arreglo 1 cargado: \n");
    mostrarArrayChar(char1, v1);
    printf("\n");
    printf("\n");
    ordenamientoXinsercion(char1, v1);
    printf("Arreglo 1 ordenado: \n");
    mostrarArrayChar(char1, v1);
    printf("\n");


    printf("\n");
    printf("Cargue el arreglo 2... \n");
    printf("\n");
    v2 = cargarArrayChar(char2);
    printf("Arreglo 2 cargado: \n");
    mostrarArrayChar(char2, v2);
    printf("\n");
    printf("\n");
    ordenamientoXinsercion(char2, v2);
    printf("Arreglo 2 ordenado: \n");
    mostrarArrayChar(char2, v2);
    printf("\n");
    printf("\n");

    v3 = (v1 + v2);

    unionArrays(char1, char2, unido, v3);
    printf("Arreglo Fusionado: \n");
    mostrarArrayChar(unido, v3);
    printf("\n");
    printf("\n");

    printf("Mostrando el Arreglo fusionado ordenado alfabeticamente \n");
    ordenamientoXinsercion(unido, v3);
    recorrerArray(unido, v3);


    /**13 Dado el vector {1,5,6,7,8} escribir un programa que genere otro vector con la suma del
    contenido de todo los elementos anteriores al índice actual: {1,6,12,19,27}  */
   /* int vector[5] = {1,5,6,7,8};
    int resultadoSumaVector[5];

    int validos2 = 5;

    printf("Mostrando Array: ");
    printf("\n");
    recorrerArray(vector, validos2);
    sumaArrays(vector, resultadoSumaVector, validos2);
    printf("Mostrando Suma entre los elementos del Array:\n ");
    printf("\n");
    recorrerArray(resultadoSumaVector, validos2); */

    }

    /**FUNCIONES*/
    //1
    int cargarArray(int array[])
    {
        int i;
        i = 0;

        char eleccion = 's';

        while(eleccion == 's' && i<10)
        {
            printf("Ingrese un numero para cargarle a su arreglo: ");
            fflush(stdin);
            scanf("%i", &array[i]);

            i++;
            printf("\n");
            printf("Pulse s si desea continuar (s/n): ");
            fflush(stdin);
            scanf("%c", &eleccion);
            printf("\n");
        }
        return i;
    }
    //2
    void recorrerArray(int array[], int validos)
    {
        int i;
        for(i = 0; i < validos; i++)
        {
            printf("|%i|", array[i]);
            printf("\n");
        }
    }
    //3
    void sumarValidos(int array[], int validos)
    {
    int i, acumulador;
    acumulador = 0;
    for(i = 0; i<validos; i++)
    {
        acumulador = acumulador + array[i];
    }
    printf("%i", acumulador);
    }
    //4
    void pasarArrayaPila(int array[], int validos, Pila *pila)
    {
    int i;

    printf("\n");
    printf("Cargando Pila... \n");

    for(i = 0; i < validos; i++)
    {
        apilar(pila, array[i]);
    }

    printf("Pila cargada: \n");
    mostrar(pila);
    }

    //5
    //Cargar el arreglo
    float cargarArrayFloat(float arrayFlotante[])
    {
        int i;
        i = 0;

        char eleccion;
        eleccion = 's';

        while(eleccion == 's' && i < 100)
        {
        printf("Ingrese un numero ");
        fflush(stdin);
        scanf("%f", &arrayFlotante[i]); //Va a cargar un dato en la posición 0 del array
        printf("\n");

        i++; //Se va a incrementar en 1, para cargar en la próxima posición

        printf("Pulse s si desea continuar  (s/n) " );
        fflush(stdin);
        scanf("%c", &eleccion);
        printf("\n");
    }

    return i;
    }
    //Sumar los datos del arreglo

    float sumarFlotantesArray(float arrayFlotante[],int validos)
    {
    int i;
    float acumulador;
    acumulador = 0;

    for (i = 0; i < validos; i++)
    {
        acumulador = acumulador + arrayFlotante[i];
    }
   // printf("%f", acumulador);
    return acumulador;
    }
    //6
    //Cargar caracteres al arreglo

    int cargarArrayChar(char arrayChar[]) {
    int i = 0;
    char eleccion;
    eleccion = 's';

    while(eleccion == 's' && i < 50 ) {

    printf("Ingrese una letra: ");
    fflush(stdin);
    scanf("%c", &arrayChar[i]);
    printf("\n");

    i++;

    printf("Pulse s si desea continuar (s/n):  " );
    fflush(stdin);
    scanf("%c", &eleccion);
    printf("\n");
    }

    return i;
    }
    //Mostrar valores ingresados
    void mostrarArrayChar(char arrayChar[], int validos) {
    int i;

    for(i = 0; i < validos; i++)
    {
        printf("|%c|", arrayChar[i]);

    }
    }
    //Función que encuentra un elemento igual

    int encontrarCaracter(char array[], int validos, char letra) {

    int flag = 0;
    int i = 0;

    while(i < validos) {

    if(letra == array[i]) {
        flag = 1;
    }
    i++;
    }
    return flag;
    }
    //7
    //Array Original ordenado alfabeticamente (Ordenamiento x inserción

    /**Función del ordenamiento por inserción, ordena a través de un insertado*/

    void ordenamientoXinsercion(char arrayChar[], int validos) {

    int i = 0; //Nuestra variable contadora inicia en 0 (Queremos iterar desde el index 0 del array)

    while(i < validos - 1) { //Le restamos uno por la posición 0
        insertarChar(arrayChar, i, arrayChar[i + 1]);
        i++;
    }
    }
    /**Función del ordenamiento por inserción. "Insertar"*/

    void insertarChar(char arrayChar[], int posicionBusqueda, char dato) {

    int i = posicionBusqueda;

    while(i >= 0 && dato < arrayChar[i]) {

        arrayChar[i+1] = arrayChar[i];
        i--;
    }
    arrayChar[i+1] = dato;
    }
    //8
    //Función que nos muestra el elemento mayor de un char

    void charMayor(char arrayChar[], int validos) {

    ordenamientoXinsercion(arrayChar, validos);

    printf("El elemento mayor es: %c", arrayChar[validos - 1]);
    printf("\n");
    }
    //9
    //Cargar arreglos numericos aleatorios

    int cargarArrayAleatorio(int array[]) {
        srand(time(NULL));
        int i;

    for(i = 0; i < 5; i++) {

        array[i] = (rand()% 3 + 1);

    }
        return i;
    }
    //Comparar elementos del arreglo
    int comparacionCapicua(int array[], int copia[], int validos) {

        if(array[0] == array[4] && array[1] == array[3]){
            return 1;
        }
        else {
            return 0;
        }
    }
    //10
    //Función que invierta un array

    void copyArrayInverted(int array[], int arrayCopia[], int validos) {

    int i;

    for(i = 0; i < validos; i++) {

    arrayCopia[(validos - 1) - i] = array[i];
    }
    }
    //11
    void ordenamientoXinsercion1(int array[], int validos) {

    int i = 0; //Nuestra variable contadora inicia en 0 (Queremos iterar desde el index 0 del array)

    while(i < validos - 1) { //Le restamos uno por la posición 0
        insertarNum(array, i, array[i + 1]);
        i++;
    }
    }
    /**Función del ordenamiento por inserción. "Insertar"*/

    void insertarNum(int array[], int posicionBusqueda, int dato) {

    int i = posicionBusqueda;

    while(i >= 0 && dato < array[i]) {

        array[i+1] = array[i];
        i--;
    }
    array[i+1] = dato;
    }
    /**Función que me Ordena por selección, a través de la función posicionMenor*/
    void ordenamientoXseleccion(int array[], int validos) {

        int posmenor;
        int aux;
        int i = 0;

        while(i < validos - 1) {

            posmenor = posicionMenor(array, i, validos);

            aux = array[posmenor];
            array[posmenor] = array[i];
            array[i] = aux;
            i++;
        }

    }
    /**Función que me retorna la posición del elemento menor*/
    int posicionMenor(int array[], int index, int validos) {

        int menor = array[index];
        int posmenor = index;
        int i = index + 1;

        while(i < validos) {

            if(menor > array[i]) {

                menor = array[i];
                posmenor = i;
            }
           i++;
        }
        return posmenor;
    }

    //12
    //Funcion que une los arrays
    void unionArrays(char char1[], char char2[], char unido[], int validos) {

    int c1 = 0; //Contador del char1
    int c2 = 0; //Contador de char2
    int u = 0; //Contador de union

    while(u < validos) {

        unido[u] = char1[c1];//Array3 en su posicion  0 lo que tiene el array1 en la pos 0
        u++;
        c1++;
        unido[u] = char2[c2];//Array3 va a contener en su posicion 1 lo que tiene el array2 en su pos 0
        c2++;
        u++;
    }
    }
    //13
    //Función que suma arrays

    void sumaArrays(int vector[], int vectorSum[], int  validos) {
    int i  = 0;

    vectorSum[i] =  vector[i];

    while(i < validos - 1) {

        vectorSum[i + 1] = vector[i] + vector[i + 1];
        vectorSum[i + 1] = vectorSum[i] + vector[i + 1];
        i++;
    }

    }

