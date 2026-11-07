#include <stdio.h>

int main(){
    int escolha;
    float n1,n2,resul;
    
    printf("Avisos\nNao coloque os simbolos das operacoes, mas separe-os\nNo lugar de , para separar coloque .\n");
    printf("Escolha uma das opções:\n1-Soma\n2-Subtracao\n3-Divisao\n4-Multiplicacao\nDigite aqui:");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
        printf("Diga o primeiro número da soma: ");
        scanf("%f", &n1);
        printf("Diga o segundo número da soma: ");
        scanf("%f",&n2);
        resul=n1+n2;
        printf("%.2f + %.2f = %.2f",n1, n2, resul);
        break;
        
        case 2:
        printf("Diga o primeiro número para a subtração: ");
        scanf("%f", &n1);
        printf("Diga o segundo número para a subtração: ");
        scanf("%f",&n2);
        resul=n1-n2;
        printf("%.2f - %.2f = %.2f",n1, n2, resul);
        break;
        
        case 3:
        printf("Diga o primeiro número da subtração: ");
        scanf("%f", &n1);
        printf("Diga o segundo número da subtração: ");
        scanf("%f",&n2);
        resul=n1/n2;
        printf("%.2f / %.2f = %.2f",n1, n2, resul);
        break;
        
        case 4:
        printf("Diga o primeiro número da multiplicação: ");
        scanf("%f", &n1);
        printf("Diga o segundo número da multiplicação: ");
        scanf("%f",&n2);
        resul=n1*n2;
        printf("%.2f * %.2f = %.2f",n1, n2, resul);
        break;
        
        default:
        printf("Digite um numero valido entre as opcoes acima");
    }
}
