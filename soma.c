#include <stdio.h>

int main() {  
    //declarando variaveis
    float a, b, soma;
    //entrada a ser guardada na primeira variavel a
    printf("escolha um numero: ");//troca de chaves por colchetes
    //guardando entrada no endereço de a
    scanf("%f", &a);//inclusao do e comercial
    //entrada a ser guardada na variavel b
    printf("escolha um segundo numero: ");//troca de chaves por colchetes
    //guardando entrada no endereço de b
    scanf("%f", &b);//inclusao do e comercial
    //operacao de somatoria
    soma = a+b;
    //saida do resultado para o usuario
    printf("O resultado dos produtos: %.2f", soma);//troca de chaves por colchetes
return 0;
}