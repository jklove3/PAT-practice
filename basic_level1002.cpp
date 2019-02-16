#include <stdio.h>
#include <string.h>
int main(){
    char str[103];
    char num_to_char[10][5]= {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    int i, j;
    int sum = 0;
    int num = 0;
    int sum_fig[4] = {0};
    scanf("%s", str);
    for(i = 0; i < strlen(str); i++){
        num = str[i] - 48;
        sum += num;
    }
    for(j = 0; (sum /10 != 0)||(sum %10 != 0); j++){
        sum_fig[j] = sum % 10;
        sum /= 10;
    }
    for(j -= 1; j >= 0; j--){
        if(j == 0) printf("%s", num_to_char[sum_fig[0]]);
        else printf("%s ", num_to_char[sum_fig[j]]);
    }
    return 0;
}
