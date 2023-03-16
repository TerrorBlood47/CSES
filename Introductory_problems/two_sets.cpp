#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p,k=0,s=0,eq_sum,i,x,y;

    scanf("%d",&n);

    p=(n*(n+1))/2;

    vector<int>a;
    vector<int>b;

    if(p%2==0){
        cout<<"YES"<<endl;

        eq_sum = 0;

        for(i=n;i>=1;i--){

            if(eq_sum>=0){
                a.push_back(i);
                k++;
                eq_sum -= i;
            }
            else{
                b.push_back(i);
                s++;
                eq_sum += i;
            }
        }

        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());

        cout<<k<<endl;
        for(i=0;i<k;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

        cout<<s<<endl;
        for(i=0;i<s;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;

    }
    else{

        cout<<"NO"<<endl;
    }

    return 0;
}