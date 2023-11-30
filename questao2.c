#include <stdio.h>


int main(){
    int num1;
    int fat;
    printf("Digite um numero para saber seu fatorial: ");
    scanf("%d", &num1);

    for(int i = 1; i < num1; i++){
        fat = num1 * i;
        
    }
    printf("%d", fat);
}
