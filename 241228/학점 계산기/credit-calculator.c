#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);
    double a = 0;

    double arr[100];
    for(int i = 0; i < n; i++){
        scanf("%lf", &arr[i]);
        a += arr[i];
    }
    if((a/n)>=4.0){
        printf("%.1f\nPerfect",a/n);
    }
    else if((a/n)>=3.0){
        printf("%.1f\nGood",a/n);
    }
    else{
        printf("%.1f\nPoor",a/n);
    }
    return 0;
}