#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10];
    int sum = 0;
    int inp;

    for (int i = 0; i < 10; i++){
        scanf("%d", &inp);
        if (i == 2 || i == 4 || i == 9){
            sum += inp;
        }
    }
    printf("%d", sum);
    return 0;
}