#include<stdio.h>
int main(){
  double x1,x2,x3,y1,y2,y3;
  printf("Enter x1 : ");
  scanf("%f",&x1);
  printf("Enter x2 : ");
  scanf("%f",&x2);
  printf("Enter x3 : ");
  scanf("%f",&x3);
  printf("Enter y1 : ");
  scanf("%f",&y1);
  printf("Enter y2 : ");
  scanf("%f",&y2);
  printf("Enter y3 : ");
  scanf("%f",&y3);
  double m1 = (y2-y1)/(x2-x1);
  double m2 = (y3-y2)/(x3-x2);
   if(m1=m2){
    printf("The given line is a straight line ");
   }
   if(m1>m2 || m2>m1 ){
    printf("The given line is not a straight line");
   }
    return 0;
}