#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[100];

    for (int i = 0; i < 100; i++){
        scanf("%d", &a[i]);
        if(a[i]==0){
            printf("%d", a[i-3]+a[i-2]+a[i-1]);
            break;
        }
    }
    return 0;
}