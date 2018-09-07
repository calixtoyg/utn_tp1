/**
 *
 * @return Retorna el float a main.
 */
float cargar() {
    float a;
    printf("Ingrese un numero:");
    scanf("%f", &a);
    return a;

}

/**
 *
 * @param a float que recibe de main.
 * @param b float que recibe de main.
 * @return retorna la suma de ambos floats.
 */
float suma(float a, float b) {
    return a + b;

}

/**
 *
 * @param a float que recibe de main.
 * @param b float que recibe de main.
 * @return retorna la resta de ambos floats.
 */
float resta(float a, float b) {
    return a - b;

}

/**
 *
 * @param a float que recibe de main.
 * @param b float que recibe de main.
 * @return retorna la multiplicacion de ambos floats.
 */
float multi(float a, float b) {
    return a * b;

}

/**
 * Recibe un float que castea a int para poder operar sobre el mismo.
 * Si la operacion no es exitosa imprime un mensaje por pantalla y retorna 0.
 * @param b float qeu recibe de main.
 * @return retorna el numero en caso de que la operacion sea exitosa.
 */
int factorial(float b) {
    int index = 1, fact = 1;
    int a = (int) b;


    for (index = 1; index <= a; index++) {
        fact = fact * index;

    }
    if (a < 0) {
        printf("No se puede realizar un factorial sobre un numero negativo.\n");
        return 0;
    }
    return fact;
}

/**
 * Divide dos floats en caso de que la operacion no sea exitosa retorna un cero y antes imprime
 * un mensaje por pantalla.
 * @param a float que recibe de main.
 * @param b float que recibe de main.
 * @return retorna la division de los numberos en caso de que la operacion sea exitosa.
 */
float division(float a, float b) {
    if (b == 0) {
        printf("El divisor no puede ser 0.\n");
        return 0;

    } else {
        return a / b;
    }

}
