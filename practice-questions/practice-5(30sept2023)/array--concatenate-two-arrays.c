//WAP to input elements in 2 arrays of size 5(i.e. a[5] and b[5]) and store them in the third array(c[10])in the following:
// a[]={1,2,3,4,5}
// b[]={6,7,8,9,10}
// c[]={1,2,3,4,5,6,7,8,9,10}

#include <stdio.h>

int main(){
// declaring array size 
    int arr_size = 5;
    int a[arr_size], b[arr_size];

// insert elements in the array a[]
    printf("Insert the elements in the array:\n");
    for(int i=0; i<arr_size; i++){
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }

// insert elements in the array b[]
    printf("Insert the elements in the array:\n");
    for(int i=0; i<arr_size; i++){
        printf("b[%d] : ", i);
        scanf("%d", &b[i]);
    }

// display the array a[] 
    printf("Array a[%d]: \n", arr_size);
    printf("a[");
    for(int i=0; i<arr_size; i++){
        printf("%d,", a[i]);
    }
    printf("\b]\n");

// display the array b[]
    printf("\nArray b[%d]: \n", arr_size);
    printf("b[");
    for(int i=0; i<arr_size; i++){
        printf("%d,", b[i]);
    }
    printf("\b]\n");

// concatenate both the arrays 
    int c[arr_size*2];
    for(int i=0; i<arr_size; i++){
        for(int j=arr_size+i-1; j<arr_size+i; j++){
            c[i] = a[i];
            c[j] = b[i];
        }
    }

// display the array c[]
    printf("Array c[%d]:\n", arr_size*2);
    printf("c[");
    for(int i=0; i<arr_size*2; i++){
        printf("%d,", c[i]);
    }
    printf("\b]\n");

    return 0;
}