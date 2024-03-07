#include <stdio.h>
#include <string.h>

int main() {

    char palavra[20];
    fflush(stdin);
    printf("Palavra(String) que deseja inverter os Caracteres\n");
    gets(palavra);

    size_t size = strlen(palavra);

    for(int i = 0; i < size / 2; i++) {
       char caracter = palavra[i];
       palavra[i] = palavra[size - i - 1]; 
       palavra[size - i - 1] = caracter; 
    };

    fflush(stdin);
    printf("%s", palavra);
}