/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int stock, customers, requested, sum, diff, product;
    int totalsold = 0;
    int earnings = 0;
    int price = 5;

    printf("Enter initial bread stock: ");
    scanf("%d",&stock);
    printf("Enter number of customers: ");
    scanf("%d",&customers);
    
    int customer;
    for (int i = 1; i <= customers; i++) {
        printf("\nCustomer %d\n", i);
        printf("Enter quantity requested: ");
        scanf("%d",&requested);

        if (requested <= stock && requested > 0) {
           stock -= requested;
           totalsold += requested;
           earnings += requested * price;

            printf("Sale succesful\n");
        } else {
            printf("Sale rejected! Not enough bread available.\n");
        }
        
    }

    printf("\n============= SALES SUMMARY ===============\n");
    printf("Total bread sold: %d pieces\n",totalsold);
    printf("Remaining stock: %d pieces\n", stock);
    printf("Total earnings: P%d\n", earnings);

    return 0;
}