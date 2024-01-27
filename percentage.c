#include<stdio.h>
int main(){
    float m1 = 40; // maths marks
    float m2 = 30; // physics marks
    float m3 = 20; // chemistry marks
    float m4 = 10; // english marks
    float p = (m1 + m2 + m3 + m4 )*100/160;
    printf("Percentage of 4 subjects is : %f",p);
    return 0;
}