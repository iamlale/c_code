//Write a function that will take one integer pointer, *number, and an integer N. Then reverse
//number's last N digits.

#include <stdio.h>
#include <math.h>

void reverseN(int *number, int N) {

    int useless_part = (*number / pow(10, N));
    int n = *number - useless_part * pow(10, N);
    int sum = 0;

    if (useless_part <= 0) {
        printf("N must be less than %d !", N);
    } else {
        while (n != 0) {
            sum = sum * 10 + n % 10;
            n /= 10;
        }

        printf("%f\n", (useless_part * pow(10, N)) + sum);
    }

}

int main() {

    int Num;
    int Number;

    printf("enter a number : \n");
    scanf("%d", &Number);
    printf("enter a Num : \n");
    scanf("%d", &Num);

    reverseN(&Number, Num);
}

