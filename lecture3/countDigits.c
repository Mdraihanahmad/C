#include<stdio.h>
int main(){
int n;
printf("Enter a number : ");
scanf("%d",&n);
int count = 0;
while(n!=0){
    n = n/10;
    count++;
}
printf("The no of digits are %d",count); // count used for no of digits
    return 0;
}