#include<stdio.h>
int main(){
int i,j,sum=0,n=6;

for(i=0; i<n; i++){
    for(j=0; j<i; j++){
        sum+=1;
    }
}
printf("sum = %d",sum);
return 0;
}
