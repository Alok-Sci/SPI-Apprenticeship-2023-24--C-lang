//WAP to create s function to calculate simple interest using
// int si(int p, int r, int t);
// where p = principal,
// r = rate,
// t = time.

#include <stdio.h>

int si(int p, int r, int t);

int main(){
    int p, r, t;
    printf("\nEnter your principal amount: ");
    scanf("%d", &p);
    printf("\nEnter your interest rate: ");
    scanf("%d", &r);
    printf("\nEnter the time: ");
    scanf("%d", &t);

    printf("\nYour simple interest is: %d", si(p, r, t));
    printf("\nYour total amount is: %d", p + si(p, r, t));

}

int si(int p, int r, int t){
    int si = p*r*t/100;
    return si;
}