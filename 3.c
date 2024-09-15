#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int bilPrima(int x) {
    if (x <= 1) 
        return 0; 
    if (x == 2 || x == 3) 
        return 1; 
    if (x % 2 == 0 || x % 3 == 0) 
        return 0;

    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) 
            return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n); 
    if (bilPrima(n)) {
        printf("PRIMA\n"); 
    } else {
        printf("BUKAN\n");
    }  
    
    return 0;
}