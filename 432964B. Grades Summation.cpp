#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin>>n;
        int arr1[n],arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n;++i)
        {
            cin>>arr2[i];
        }
        for(int i=0;i<n;++i){
          cout<<arr1[i]+arr2[i]<<" ";
        }
    
    return 0;
}
