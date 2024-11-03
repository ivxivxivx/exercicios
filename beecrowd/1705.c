#include <stdio.h>

int main()
{
    long int in,crr,r,c,p,fin=0;
    long int HA[4096];

    for(int i=1; i<4097; i++){
            crr = 0;
            r = i;
            p=1;
            while(r>0){
                crr += (r%2) ? p : 0 ;
                r = r/2;
                p = p * 10;
            }
            HA[i-1] = crr;
    }
    while(scanf("%ld", &in)!=EOF){
        fin = 0;
        for(int j=0; j<4096;j++){
            if(HA[j]%in==0){
                fin = HA[j];
                j = 4096;
            }
        }
        
        if(fin>0){
            printf("%ld\n", fin);
        }else{
            printf("-1\n");
        }

    }

    return 0;
}