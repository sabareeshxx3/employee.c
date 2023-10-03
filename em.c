#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    int id;
    float payment;
};

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee em[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", em[i].name);
        printf("ID: ");
        scanf("%d", &em[i].id);
        printf("Payment: ");
        scanf("%f", &em[i].payment);
    }

    int highestPaymentIndex = 0;
    for (int i = 1; i < n; i++) {
        if (em[i].payment > em[highestPaymentIndex].payment) {
            highestPaymentIndex = i;
        }
    }
    printf("\nEmployee with the highest payment:\n");
    printf("Name: %s\n", em[highestPaymentIndex].name);
    printf("ID: %d\n", em[highestPaymentIndex].id);
    printf("Payment: %.2f\n", em[highestPaymentIndex].payment);

    return 0;
}