#include <iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
int x[n];
    // Complete the function
    for(int i=0;i<n-1;i++){
        x[i]=arr[i]|arr[i+1];
        //coutn<<x[i]<<endl;
    }
    
    x[n-1]=arr[n-1];
    for(int i=0;i<n;i++)
    cout<<x[i]<<" ";
  
    return 0;
}
