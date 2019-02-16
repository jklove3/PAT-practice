#include <stdio.h>
int main(){
    int n, step;
    scanf("%d", &n);
    for(step = 0;n != 1; step++){
        if(n % 2 == 0) n /= 2;
        else n = (3 *n + 1) / 2;
    }
    printf("%d", step);
    return 0;
}
