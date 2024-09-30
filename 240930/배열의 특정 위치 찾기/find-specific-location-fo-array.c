#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a[10], inp;
    double avr; 
    int sum1, sum2;
    sum1=sum2=0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
        if (i % 2 == 1){
            sum1+=a[i];
        }
        if((i+1)%3==0){
            sum2+=a[i];
        }
    }
    avr=(double)sum2/3;
    printf("%d %.1f", sum1, avr);
    return 0;
}