#include <stdio.h>

int main() {
    //declarando variaveis
    double a, b, rest;
    //entrada a ser guardada na primeira variavel a
    printf("escolha um numero: ");//troca de chaves por colchetes
    //guardando entrada no endereço de a
    scanf("%d", &a);//inclusao do e comercial
    //entrada a ser guardada na variavel b
    printf("escolha um segundo numero: ");//troca de chaves por colchetes
    //guardando entrada no endereço de b
    scanf("%d", &b);//inclusao do e comercial
    //operacao de resto
    rest = a%b;
    //saida do resultado para o usuario
    printf("\n\tO resultado dos produtos: %d", rest);//troca de chaves por colchetes
return 0;
}
