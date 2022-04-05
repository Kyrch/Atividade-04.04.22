#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int contEbu = 0;
    int contNorm = 0;
    float C, F, a, b;
    
    for (int i = 0; i < 5; i++) {
        printf("Digite a temperatura da água: ");
        scanf("%f", &F);
        C = (F - 32) / 1.8;
        
        if (C >= 100) {
            printf("Está em ponto de ebulição\n");
            contEbu += 1;
        } else if (C < 100) {
            printf("Não está em ponto de ebulição\n");
            contNorm += 1;
            b += C;
        }
        a += C;
    }

    printf("%d está(ão) em ponto de ebulição e %d não está(ão)\n", contEbu, contNorm);
    printf("Média das temperaturas convertidas: %f\n", a / 5);
    printf("Média das temperaturas abaixo de 100 Celsius: %f", b / 5);
    return 0;
}
