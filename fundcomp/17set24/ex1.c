#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
receives a password guess and returns how many of its digits were correct
*/

int main(){
    int senha, verify=0, s1=-1, s2=-1, s3=-1;
    srand(time(NULL));

    int n1 = rand()%10;
    int n2 = rand()%10;
    int n3 = rand()%10;

    // printf("%d %d %d\n", n1, n2, n3);

    while(verify != 3){

        printf("\nDigite sua senha: ");
        scanf("%d", &senha);

        if (senha < 1000 && senha > 0){
            s1 = senha/100;
            s2 = senha%100/10;
            s3 = senha%10;
            // printf("%d%d%d\n", s1, s2, s3);
        }else{
            printf("senha invalida\n");
        }
        verify = (s1 == n1) + (s2 == n2) + (s3 == n3);
        if(verify==3){
            printf("acertou\n");
        }else{
            printf("acertou apenas %d numeros \n", verify);
        }
    }
}
