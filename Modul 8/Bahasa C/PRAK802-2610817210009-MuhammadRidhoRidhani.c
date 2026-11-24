#include <stdio.h>
void tukar(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
int main (){
int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Sebelum ditukar: Andi = %d, Budi = %d\n", num1, num2);
    tukar(&num1, &num2);
    printf("Sesudah ditukar: Andi = %d, Budi = %d\n", num1, num2);
    return 0;
}