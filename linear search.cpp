#include <iostream>
using namespace std;
int main(){

    int array[100], search, c, n;

    cout<<"Enter a number of elements in array"<<endl;
    cin>>n;
    cout<<"press your "<<n<<" value"<<endl;
    for (c = 0; c < n; c++){
    cin>>array[c];
    }
    cout<<"Enter a number for search\n"<<endl;
    cin>>search;

    for (c = 0; c < n; c++){
        if (array[c] == search)
    {
      cout<<search<<" is present at location "<<c+1<<endl;
      break;
    }
        }
    if (c == n)
    cout<<search<<"isn't present in the array."<<endl;

  return 0;
}
