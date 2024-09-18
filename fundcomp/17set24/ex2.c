#include <stdio.h>

int main (){
    int idade;
    printf("idade\n");
    scanf("%d", &idade);
    if (idade > 17){
        printf("maior de idade\n");
    }else{
        printf("menor de idade\n");
    }
}
