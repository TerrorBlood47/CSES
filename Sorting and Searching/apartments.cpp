#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,m,k,i,j;

    cin>>n>>m>>k;

    long long int a[n],b[m];

    for(i=0;i<n;i++)cin>>a[i];
    
    for(i=0;i<m;i++)cin>>b[i];a

    i=0;j=0;

    sort(a,a+n);
    sort(b,b+m);

    long long int cnt=0;

    while(i<n && j<m){

        if(abs(a[i]-b[j])<=k){
            cnt++;
            j++;
        }
        else{
            //int flag;
            while((a[i]+k)>=b[j]){
                //flag=0;
                if(abs(a[i]-b[j])<k){
                    cnt++;
                    j++;
                    //flag=1;
                    break;
                }
                else{
                    j++;
                }
            
            }
    
        }

        i++;
    }

    cout<<cnt<<endl;

    return 0; 
}