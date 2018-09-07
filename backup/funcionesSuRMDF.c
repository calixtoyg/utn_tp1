float suma(float, float);
float resta(float,float);
int factorial(float);
float div(float,float);


float suma(float a, float b) {
    return a+b;

}

float resta(float a,float b) {
    return a-b;

}

float multi(float a,float b) {
    return a*b;

}

int factorial(float a) {
    int index=0;

    for (index=0;index<a-1;index++){
            a=a*a-1;
            a--;
    }
    return a;
}
float div(float a,float b) {
    if (b==0){
        printf("El divisor no puede ser 0");
        return 0;

    }

}
