#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");
    int z, y;

    printf("Digite o valor de z: ");
    scanf("%d", &z);

    printf("Digite o valor de y: ");
    scanf("%d", &y);	

    if ((x > 10 || x < -10) || (y > 10 || y < -10)) {
            printf("Você errou o alvo!");
    } else if ((x >= -1 && x <= 1) && (y >= -1 && y <= 1)) {
        printf("Parabens voce ganhou 10 pontos!");
    } else if ((x >= -5 && x <= 5) && (y >= -5 && y <= 5)) {
        printf("Parabens voce ganhou 5 pontos!");
    } else if ((x >= -10 && x <= 10) && (y >= -10 && y <= 10)) {
        printf("Parabens voce ganhou 1 pontos! \n");
        printf("Voce é legal! \n");
    }

    system("pause");
}