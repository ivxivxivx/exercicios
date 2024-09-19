#include <stdio.h>
 
int main() {
    
    int count, max, min, curr, pass;
    
    while(scanf("%d %d %d", &count, &min, &max) != EOF){
        pass=0;
        while(count){
            scanf("%d", &curr);
            if(min <= curr && curr <= max){
                pass++;
            }
            count--;
        }
        printf("%d\n", pass);
    }
 
    return 0;
}
