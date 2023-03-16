#include<bits/stdc++.h>
using namespace std;

long long int m = 1e9 + 7;

long long int big_mod( long long int a ,int n){

    if(n==0){
        return 1;
    }
    long long int res = big_mod(2,n/2);
    if(n%2==0){
        return (res*res)%m;
    }
    else{
        return (res*res*a)%m;
    }
}

int main(){
    
    int n;
    long long int x;

    scanf("%d",&n);

    x = big_mod(2,n);

    printf("%lld\n",x);
    
    return 0;
}