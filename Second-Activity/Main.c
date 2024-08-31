#include <stdio.h>
#include "Second Activity.c"

int main(){

    int choice, result, num;
    char ch;

    do{
        printf("=====MENU=====\n");
        printf("1.Check if a number is greater than 13.\n");
        printf("2. Check if a number is divisible by 3 but not divisible by 7\n");
        printf("3. Check if a number belongs to the pattern (1,5,9,13,17,25,29,33,...)\n");
        printf("4. Check if a character is a hexadecimal character.\n");
        printf("5. Check if a character is vowel, consonant, or number.\n");
        printf("6. Exit\n\n");
        printf("Enter your choice: \n\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                result = checkGreater(num);
                if(result == 1){
                    printf("%d is greater than 13.\n", num);
                }else{
                    printf("%d is ")
                }
                break;
            case 2:
                break;
            case 3:
                break;
            case 4: 
                break;
            case 5:
                break;
        }

    }while(choice!=6);


    return 0;
}