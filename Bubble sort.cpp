#include<iostream>
using namespace std;
int main(){

    int i,j,n,ar[5],temp;
    cout<<"Enter the value"<<endl;
    for(i=0; i<5; i++){
        cin>>ar[i];
    }
    for (i=0; i<5; i++)
        cout<<"\nindex number :" <<i <<" = "<<ar[i];

    cout<<endl;
    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            if(ar[j+1] > ar[j]){
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    cout<<"the ascending value"<<endl;
    for(i=0; i<5; i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
return 0;
}
