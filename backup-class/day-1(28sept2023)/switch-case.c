//WAP to practice switch-case statement
// character is denoted with single inverted commas( 'c' );
// case condition


#include <stdio.h>

int main(){
    char choice;

    printf("Enter an alphabet: \n");
    scanf("%c", &choice);

    switch(choice){
        case 'A':
            printf("%c for Bada Apple\n", choice);
            break;
        case 'a':
            printf("%c for Apple\n", choice);
            break;
        case 'b':
            printf("%c for Ball\n", choice);
            break;
        case 'c':
            printf("%c for Cat\n", choice);
            break;
        case 'd':
            printf("%c for Dog\n", choice);
            break;
        case 'e':
            printf("%c for Elephant\n", choice);
            break;
        case 'f':
            printf("%c for Fan\n", choice);
            break;
        case 'g':
            printf("%c for Gorilla\n", choice);
            break;
        case 'h':
            printf("%c for Hat\n", choice);
            break;
        case 'i':
            printf("%c for Icecream\n", choice);
            break;
        case 'j':
            printf("%c for Jackal\n", choice);
            break;
        case 'k':
            printf("%c for Kite\n", choice);
            break;
        case 'l':
            printf("%c for Lemon\n", choice);
            break;
        case 'm':
            printf("%c for Mango\n", choice);
            break;
        case 'n':
            printf("%c for Nine\n", choice);
            break;
        case 'o':
            printf("%c for Orange\n", choice);
            break;
        case 'p':
            printf("%c for Parrot\n", choice);
            break;
        case 'q':
            printf("%c for Queen\n", choice);
            break;
        case 'r':
            printf("%c for Rabbit\n", choice);
            break;
        case 's':
            printf("%c for Sea\n", choice);
            break;
        case 't':
            printf("%c for Table\n", choice);
            break;
        case 'u':
            printf("%c for Umbrella\n", choice);
            break;
        case 'v':
            printf("%c for Van\n", choice);
            break;
        case 'w':
            printf("%c for Water\n", choice);
            break;
        case 'x':
            printf("%c for Xamarine\n", choice);
            break;
        case 'Y':
            printf("%c for Yatch\n", choice);
            break;
        case 'z':
            printf("%c for Zebra\n", choice);
            break;
        //if the input character doesn't match with the mentioned cases
        default:
            printf("%c is andInvalid character\n", choice);
    }
}