#include<stdio.h>
int main(){
    int arr[10];
    int big;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;++i){
        big = arr[i]>arr[i+1]?arr[i]:arr[i+1];
    }
    printf("%d",big);
    return 0;
}