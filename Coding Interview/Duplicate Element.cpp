#include<bits/stdc++.h>
using namespace std;
int  main()
{

   int n, large;
   cin>>n;
   int a[n];
   int mx=0;
   for(int i=0; i<n; i++){
    cin>>a[i];
   }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                cout<<a[i]<<" ";
            }
        }
    }


}
