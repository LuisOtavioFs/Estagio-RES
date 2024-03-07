#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
    int valor1; 
    int valor2 = 1;
    int valor3;
    int cont = 1;

    printf("Digite um numero para gerar a sequencia\n");
    scanf("%d",&valor1);
    fflush(stdin);
     
    while (cont <= valor1)
    {
        valor3 = valor1 + valor2;

        printf("%d - ",valor3);

        valor1 = valor2;
        valor2 = valor3;
        cont =+ 1;

        if (valor1 == 0 || valor1 == 1){
        printf("- Esse numero faz parte da sequencia\n");
    }else if (valor1 = valor3){
        printf("- Esse numero faz parte da sequencia\n");
    }else{
        printf("- Esse numero faz parte da sequencia\n");
    }
    };
    
    return 0;
}