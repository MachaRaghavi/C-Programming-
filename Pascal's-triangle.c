#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int num = 1;  // first value in every row
        for (int j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
