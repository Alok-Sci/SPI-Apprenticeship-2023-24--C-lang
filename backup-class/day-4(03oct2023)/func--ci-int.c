//WAP to create s function to calculate compound interest using
// int si(int p, int r, int t);
// where p = principal,
// r = rate,
// t = time.

#include <stdio.h>

int ci(int p, int r, int t);

int main(){
    int p, r, t;
    printf("\nEnter your principal amount: ");
    scanf("%d", &p);
    printf("\nEnter your interest rate: ");
    scanf("%d", &r);
    printf("\nEnter the time: ");
    scanf("%d", &t);

    printf("\ncoumpound interest is: %d", ci(p, r, t)-p);
    printf("\nTotal amount is: %d", ci(p, r, t));

}

int ci(int p, int r, int t){

    for(int i=1; i<=t; i++){
        p = p + ((p*r)/100);
    }
    return p;
}