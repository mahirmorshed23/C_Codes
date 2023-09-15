#include <stdio.h>

int main() {
    int num, binary_num = 0, i = 1, r;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    for(int i=1; num!=0; i*=10)
    {
        r = num % 2;
        num /=2;
        binary_num += r*i;
    }
    printf("Binary number: %d\n", binary_num);
    return 0;
}
