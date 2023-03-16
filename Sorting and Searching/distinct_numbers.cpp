#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,j;

    cin>>n;

    int x[n];

    for(i=0;i<n;i++)cin>>x[i];

    sort(x,x+n);

    int cnt=1;

    for(i=1;i<=n-1;i++){

        if(x[i]!=x[i-1]){
            cnt++;
        }
    }

    cout<<cnt<<endl;
    
    return 0; 
}