#include <stdio.h>
#include <string.h>

int main(void){
char str[21], strConcat[22];

int i;

printf("Digite uma string limitada a 20 caracteres: ");
scanf("%20[^\n]", str);
printf("A string tem %d caracteres. \n", strlen(str)); //Exibe no de caracteres, sem \0
strcpy(strConcat, str); //Copia dados da str para a strConcat
strcat(strConcat, "!"); //Insere uma exclamação ao final do texto de strConcat
printf("String concatenada: %s", strConcat);
return 0;


}
