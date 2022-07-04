#include <stdio.h>

void printA(int a[], int i){
    if(a[i] != -1){
        printA(a, i + 1);
        printf("%d ", a[i]);
    }
}


int main(){
    int a[10], b;
    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &b);
    printA(a, b);
    return 0;
}