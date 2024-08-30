#include <stdio.h>

void checkGreater(int num);
void checkDivisible(int num);
void checkPattern(int num);
void checkHexadecimal(char ch);
void checkCharacter(char ch);

int main(){
    int choice, num;
    char ch;
    
    do{

        printf("======MENU======\n");
        printf("1.Check if a number is greater than 13.\n");
        printf("2. Check if a number is divisible by 3 but not divisible by 7\n");
        printf("3. Check if a number belongs to the pattern (1,5,9,13,17,25,29,33,...)\n");
        printf("4. Check if a character is a hexadecimal character.\n");
        printf("5. Check if a character is vowel, consonant, or number.\n");
        printf("6. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                checkGreater(num);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                checkDivisible(num);
                break;
            case 3:
                checkPattern(num);
                break;
            case 4:
                checkHexadecimal(ch);
                break;
            case 5:
                checkCharacter(ch);
                break;
            default:
                printf("Invalid choice. Please try again.\n\n");
        }
    }while(choice!=6);

    return 0;
}

void checkGreater(int num){
    if(num<13){
        printf("%d is not greater than 13.\n\n", num);
    }else if(num==13){
        printf("%d is equal to 13.\n\n", num);
    }else{
        printf("%d is greater than 13\n\n", num);
    }
}

void checkDivisible(int num){ 
    if(num%3==0 && num%7!=0){
        printf("%d is divisible by 3 but not divisible by 7", num);
    }
}

void checkPattern(int num){

}

void checkHexadecimal(char ch){

}

void checkCharacter(char ch){

}