struct fauno{
    int altura;
    float peso;
    char sexo = 'M';
};

int variavelglobal;

int main(char args) {
    float a = 666;
    float b;
    float c = 10.0E56;


    while (a != b) {
        /*ERRO AQUI - falta um abre parentese*/
        if a == b) {
            a = b - 1;
        } else {
            b = a + 1;
        }
    }

    c = a + b - 35;

    return 0;
}
