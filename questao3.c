#include <stdio.h>
#include <string.h>

int main(){
 char palavra1[50];
 char palavra2[50];
 float media;
printf("Digite uma palavra: ");
 gets(palavra1);
 printf("Digite uma palavra: ");
 gets(palavra2);

media=(strlen(palavra1)+strlen(palavra2))/2;

printf("%f %s",media, palavra2);
}