#include<stdio.h>
int main(){
    int p,n;
    float r,si;
    for(int i=1;i<=3;i++){
    printf("Enter values of  p,n and r: ");
    scanf("%d%d%f",&p,&n,&r);
    si = p*n*r/100;
    printf("Simple interest = Rs. %f \n",si);
    }
    

    return 0;
}