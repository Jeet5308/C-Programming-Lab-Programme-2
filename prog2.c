#include <stdio.h>
int main() {
    int a, b, c, largest, smallest;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;

    smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;

    printf("Largest = %d, Smallest = %d\n", largest, smallest);
    return 0;
}
