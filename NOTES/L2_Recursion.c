#include <stdio.h>
//Recursion - when a function calls itself
void display(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    display(n);
    return 0;
}

void display(int n){
    if(n<1){
        return;
    }else{
        printf("%d\n", n);
        display(n-1); 
        printf("%d\n",n); //this will only execute once all the recursive functions are called
    }                     

}