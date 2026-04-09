#include <stdio.h>
int main() {
int n, i;
int a = 0, b = 1, next;
printf("Enter N: "); scanf("%d", &n);
if (n > 0) {
    printf("%d", a);
}
if (n > 1) {
    printf("%d", b);
}
for (i = 2; i < n; ++i) {
    next = a + b;
    printf("%d", next);
    a = b;
    b = next;
}
return 0;
}
