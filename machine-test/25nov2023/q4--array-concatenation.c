// 4. WAP to input elements in 2 arrays of size 5 (i.e. a[5] and b[5]) and stored them in the third array (c[10]) in the following:
// a[]={1,2,3,4,5};
// b[]={6,7,8,9,10};
// c[]={1,2,3,4,5,6,7,8,9,10};


#include <stdio.h>

void main(){
    int a[5], b[5], c[10];

// take input in array a[]
    printf("Enter elements of array a: \n");
    for(int i=0; i<5; i++){
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
        c[i] = a[i];
    }

// print elements of array a[]
    printf("Array a[5] = ");
    printf("[");
    for(int i=0; i<5; i++){
        printf(" %d,", a[i]);
    }
    printf(" ]\n");


// take input in array b[]
    printf("Enter elements of array b: \n");
    for(int i=0; i<5; i++){
        printf("b[%d]: ", i);
        scanf("%d", &b[i]);
        c[i+5] = b[i];
    }

// print elements of array b[] 
    printf("Array b[5] = ");
    printf("[");
    for(int i=0; i<5; i++){
        printf(" %d,", b[i]);
    }
    printf(" ]\n");

// print elements of array c[]
    printf("Array c[10] = ");
    printf("[");
    for(int i=0; i<10; i++){
        printf(" %d", c[i]);
        if(i < 9) {
            printf(",");
        }
    }
    printf(" ]\n");

}