#include<bits/stdc++.h>
using namespace std;
int main()
{
    int min=110,max=0,index,index1;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n;++i){
        if(max<a[i]){
            max=a[i];
            index=i;
        }
    }
    for(int j=0;j<n;++j){
        if(min>=a[j]){
            min=a[j];
            index1=j;
        }
    }
    if(a[0]==max&&a[n-1]==min){
        cout<<"0";
    }
    else if(index>index1){
        cout<<index-1+(n-1-index1);
    }
    else{
        cout<<index+(n-1-index1);
    }
 return 0;
}

