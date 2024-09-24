#include <stdio.h>
 
int main() {
 
    float M[12][12], result, sum, V;
    char op;
    int line;
    
    scanf("%d %c", &line, &op);
    
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%f", &V);
            M[i][j] = V;
        }
    }
    
    for(int i=0; i<12; i++){
        sum = sum + M[line][i];
    }
    
    result = (op == 'M') ? sum/12.0 : sum;
    
    printf("%.1f\n", result);
    
    
    
    return 0;
}
