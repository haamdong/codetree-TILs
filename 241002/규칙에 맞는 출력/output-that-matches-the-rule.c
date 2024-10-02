#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        for(int j = N-i; j <= N; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}