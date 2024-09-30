#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    int num = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            i % 2 == 0? num += 2 : num ++;
            printf("%d ", num); 
        }
        printf("\n");
    }
    return 0;
}