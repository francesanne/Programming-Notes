#include <stdio.h>
int getFactorial(int x);
int getSummation (int x);

int main(){

    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);
    result = getFactorial(num);
    printf("Result = %d\n", result);

    printf("Enter a number: ");
    scanf("%d", &num);
    result = getSummation(num);
    printf("Result = %d", result);

    return 0;
}

int getFactorial(int x){
        if(x>=1){
            return x * getFactorial(x-1);
        }else{
            return 1;
        }
    return 0;
}

int getSummation(int x){
    if(x>0){
        return x + getSummation(x-1);
    }else{
        return 0;
    }
}