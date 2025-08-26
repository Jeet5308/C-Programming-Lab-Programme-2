#include <stdio.h>
int main() {
    float gross, allowances, deductions, netsalary;
    printf("Enter gross salary and deductions: ");
    scanf("%f%f", &gross, &deductions);

    if (gross > 10000)
        allowances = 0.10 * gross;
    else if (gross > 5000)
        allowances = 0.07 * gross;
    else
        allowances = 0.05 * gross;

    netsalary = gross + allowances - deductions;
    printf("Net Salary = %.2f\n", netsalary);

    return 0;
}
