#include <stdio.h>
 
int main() {
 
    int a, b, n, i,j, V, pa, po, result, c;
    
    scanf("%d", &n);
    for(c=1;c<=n;c++){
        scanf("%d %d",&a ,&b);
        
        int F[a];
        for(i=0;i<a;i++)F[i]=1;
        
        pa=1;po=1;V=a;
        while(V!=1){
                if(pa==b){
                    F[po-1]=0;
                    V = V - 1;
                }
                if(pa<b){pa++;}else{pa = 1;}
                if(po<a){po++;}else{po = 1;}
                while(F[po-1]==0){
                    if(po<a){po++;}
                    else{po = 1;}
                }
                
        }
        printf("Case %d: %d\n", c, po);
    }
 
    return 0;
}