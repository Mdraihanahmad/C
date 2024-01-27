#include<stdio.h>
int main(){
int l;
printf("Enter length : ");
scanf("%d",&l);
int b;
printf("Enter Breadth : ");
scanf("%d",&b);
int a = l*b;
int p = 2 * (l + b);
if(a>p){
    printf("Area is greater");
}
else{
    printf("Perimeter is greater");
}

    return 0;
}