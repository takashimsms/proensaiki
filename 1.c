#include <stdio.h>

int mod(int n, int p){
    if(n < p)
        return n;
    mod(n - p, p);
}

int main(){
    int n, p, q;
    scanf("%d %d", &n, &p);
    q = mod(n, p);
    printf("%d を %d で割った余りは %d\n", n, p, q);
    return 0;
}