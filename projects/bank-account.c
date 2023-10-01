/*
Developed by: Alok Singh
Instagram: @alok_s.in.g.h
Date: 01/10/2023
Time: 07:01am - 08:42am
Overall time taken(code+debug): 1hr 41mins.

project challege given by: Hemantpages(github)
*/

/*
Reporting an issue when finding any typo or bug will be appreciated!!
*/

//WAP to create a bank account
// 1. create an account
// 2. check_balance
// 3. deposit amount
// 4. withdraw amount
// 5. exit



#include <stdio.h>

int account, amount, withdraw, deposit;

int closeAccount(){
    printf("You have successfully withdrawn %d Rs.\n", withdraw);
    int rem_balance = amount - withdraw;

    printf("Successfully deposited %d Rs. to your account!\n", rem_balance + withdraw);
    return 0;
}

int openAccount(){
    if(account == 0){
        int redeposit = 0;
        do{
            printf("\nPlease deposit atleast 1000 Rs. to open an account!\nOr press '0' to cancel\n->");
            int deposit;
            scanf("%d", &deposit);

            if(deposit == 0){
                printf("\nCanceling deposit...\nRedirecting you to the main menu...\n");
                break;
            }
            else if(deposit>=1000){
                account = 1;
                amount += deposit;
                printf("\nYour account created successfully!\n");
                checkBalance();
                redeposit = 0;
            }
            else{
                printf("\nAccount cannot be opened with %d Rs.!\n", deposit);
                redeposit = 1;
            }
        }while(redeposit == 1);

    }
    else{
        printf("\nYou already have an account!\n");
        checkBalance();
    }
    return 0;
}
int checkBalance(){
    if(account == 1){
        printf("Your account balance is %d Rs. \n", amount);
    }
    else{
        printf("You don't have an account!\n");
        openAccount();
    }

    return 0;
        
}
int depositAmount(){
    if(account == 1){
        int redeposit = 0;
        do{
            printf(">>>Please enter the amount to deposit: ");

            int deposit;
            scanf("%d", &deposit);

            if(deposit>0){
                amount += deposit;
                printf("\n>>>Successfully deposited %d Rs. to your account!\n", amount);
                checkBalance();
            }
            else{
                printf("\nInvalid amount entered!\n");
                redeposit = 1;
            }
        }while(redeposit == 1);
    }
    else{
        printf("\n>>>You don't have an account!\n");
        openAccount();
    }
    return 0;
}
int withdrawAmount(){
    if(account == 1){

        int rewithdraw = 1;
        do{
            rewithdraw = 0;
            printf(">>>Enter the amount to withdraw: ");
            int withdraw;
            scanf("%d", &withdraw);

            if((amount-withdraw) > 1000 ){
                amount -= withdraw;
                printf(">>>You have successfully withdrawn %d Rs.\n");
                checkBalance();
            }
            else if((amount-withdraw) <= 1000){
                printf(">>>Your account need to have atleast 1000 Rs. to keep it active!\nAre you sure you want to withdraw all the funds!\n");

                int rechoice  = 1;
                do{
                    rechoice = 0; //reset the rechoice
                    printf("Press '1' to close your account!\n");
                    int choice;
                    scanf("%d", &choice);

                    switch(choice){
                        case 1:
                            closeAccount();
                            break;
                        default: 
                            printf("Invalid choice!\n");
                            rechoice = 1;
                    }
                }while(rechoice == 1);
            }
            else if(withdraw < amount){
                printf("Insufficient account balance!\n");
                checkBalance();
            }
            else if(withdraw < 1){
                printf("Invalid amount entered!\n");
                rewithdraw = 1;
            }
        }while(rewithdraw == 1);
            
    }
    return 0;
}


    
int main(){

    printf("\nWelcome to the Alok's ABC bank\n");

    int exit = 0;
    do{
        printf("\n===========================================\n");
        printf("\nPlease choose from the following options:\n");
        printf("1. Open an account\n");
        printf("2. Check balance\n");
        printf("3. Deposit amount\n");
        printf("4. Withdraw amount\n");
        printf("5. Exit\n");
        printf("\n===========================================\n");

        printf("\nEnter your choice here -> ");
        int choice;
        scanf("%d", &choice);

        switch(choice){
            case 1:
                openAccount();
                break;
            case 2: 
                checkBalance();
                break;
            case 3:
                depositAmount();
                break;
            case 4: 
                withdrawAmount();
                break;
            case 5:
                exit = 1;
                break;
            default:
                printf("\nInvalid choice! Please Choose a valid Option!");
        }
    }while(exit == 0);

    return 0;
}