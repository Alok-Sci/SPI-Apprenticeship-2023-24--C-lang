//WAP to input the units, and find the electricity bill according to the mentioned coditions
/*
1. up to 50 units --> 4rs/unit
2. 50-100 units --> 6rs/unit
3. 100-200 units --> 8rs/unit
4. 200-300 units --> 10rs/unit 
5. more than 300 units --> 15rs/unit
*/

#include <stdio.h>

int main(){

//input units
    printf("Enter the number of units consumed: \n");
    int units, bill = 0;
    scanf("%d", &units);


// 1. up to 50 units --> 4rs/unit --> 200rs
    if( units <= 50 ){
        bill = units * 4;
    }
// 2. 50-100 units --> 6rs/unit --> 300rs
    else if( units > 50 && units <= 100 ){
        bill = 200 + ((units - 50) * 6);
    }
// 3. 100-200 units --> 8rs/unit --> 800rs
    else if( units > 100 && units <= 200 ){
        bill = 200 + 300 + (units - 100 * 8);
    }
// 4. 200-300 units --> 10rs/unit --> 1000rs
    else if( units > 200 && units <= 300 ){
        bill = 200 + 300 + 800 + (units - 200 * 10);
    }
// 5. more than 300 units --> 15rs/unit -->
    else if( units > 300  ){
        bill = 200 + 300 + 800 + 1000 + (units - 300 * 15);
    }

//Print bill
    printf("Your bill for %d units is : %d Rs.", units, bill);

}