//#include<stdio.h>
//int main(){
  //  int n;
    //printf("Enter a number : ");
    //scanf("%d",n);
//for(int i=n;i<=n*10;i = i + n){  
  //      printf("%d ",n);
//}
  //  return 0;
//}
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",n);
for(int n=1;n<=n*10;n=n+n){
    if(n%n==0){
        printf("%d ",n);
    }
}
    return 0;
}