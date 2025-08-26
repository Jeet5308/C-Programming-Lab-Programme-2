#include <stdio.h>
int main() {
    float sales, netsales, discount;
    printf("Enter gross sales: ");
    scanf("%f", &sales);

    if (sales > 20000)
        discount = 0.15 * sales;
    else if (sales > 10000)
        discount = 0.10 * sales;
    else
        discount = 0.05 * sales;

    netsales = sales - discount;
    printf("Net Sales = %.2f\n", netsales);

    return 0;
}
