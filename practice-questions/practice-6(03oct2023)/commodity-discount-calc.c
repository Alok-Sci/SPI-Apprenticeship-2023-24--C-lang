// Cost            Discount on Laptop  Discount on Desktop
// 0-10000         5%                  7%
// 10001-30000     7%                  9%
// 30001-50000     9%                  10%
// above 50000     12%                 15%

// WAP to input cost of a commodity, 
//calculate and print the discount and final amount according to the above conditions.

#include <stdio.h>

int main(){
    int commodity, disc, cost;

    int re = 0;
    do{
        // input commodity and its cost 
        printf("\nEnter the commodity you want to buy: ");
        printf("\n1. Laptop");
        printf("\n2. Desktop\n");
        printf("\n>> ");
        scanf("%d", &commodity);

        switch(commodity){
            case 1:
                //input the cost of laptop
                printf("Enter its cost: ");
                scanf("%d", &cost);
                
                //evaluate discount
                if(cost>0 && cost<=10000){
                    disc = 5;
                }
                else if(cost>10000 && cost<=30000){
                    disc = 7;
                }
                else if(cost>30000 && cost<=50000){
                    disc = 9;
                }
                else if(cost>50000){
                    disc = 12;
                }

                //calculate final cost of laptop
                cost -= (cost*disc)/100;

                //display the final cost 
                printf("Final cost of your laptop after %d%% discount is: %d", disc, cost);

                break;
            case 2:
                //input the cost of desktop
                printf("Enter its cost: ");
                scanf("%d", &cost);

                //evaluate cost of desktop
                if(cost>0 && cost<10000){
                    disc = 7;
                }
                else if(cost>10000 && cost<30000){
                    disc = 9;
                }
                else if(cost>30000 && cost<50000){
                    disc = 10;
                }
                else if(cost>50000){
                    disc = 15;
                }

                //calculate the final cost
                cost -= (cost*disc)/100;

                //display the final cost
                printf("Final cost of your desktop after %d%% discount: %d", disc, cost);

                break;
            default:
                //wrong choice
                printf("\nInvalid Commodity Choice!!\n");
                re = 1;
        }
    }while(re == 1);

}