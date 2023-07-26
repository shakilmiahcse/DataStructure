//linear search
#include<iostream>
using namespace std;
int main(){
    int array[100], search, i, n;
    cout<<"Enter an number of elements in array"<<endl;
    cin>>n;
    cout<<"press your "<<n<<"value"<<endl;
    for (i=0; i<n; i++){
        cin>>array[i];
    }
    cout<<"Enter a number for search\n"<<endl;
    cin>>search;
     for (i=0; i<n; i++){
        if (array[i] == search)
        {
            cout<<search<<" is present at location "<<i+1<<endl;
            break;
        }
     }
    if (i == n)
        cout<<search<<"isn't present in the array."<<endl;
return 0;
}
