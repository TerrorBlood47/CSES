#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    long long int d=0,k;
    scanf("%d",&n);
    long long int a[n];
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }

    for(i=0;i<n-1;i++){

        if(a[i]>a[i+1]){
            k = a[i] - a[i+1];
            d = d + k;
            a[i+1]= a[i+1] + k;
        }
    }

    printf("%lld\n",d);
    return 0;
}