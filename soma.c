#include <stdio.h>

int main() {
    //declarando variaveis
    int a, b, multix;
    //entrada a ser guardada na primeira variavel a
    printf("escolha um numero: ");//troca de chaves por colchetes
    //guardando entrada no endereço de a
    scanf("%d", &a);//inclusao do e comercial
    //entrada a ser guardada na variavel b
    printf("escolha um segundo numero: ");//troca de chaves por colchetes
    //guardando entrada no endereço de b
    scanf("%d", &b);//inclusao do e comercial
    //operacao de somatoria
    multix = a*b;
    //saida do resultado para o usuario
    printf("O resultado dos produtos: %d", multix);//troca de chaves por colchetes
return 0;
}
