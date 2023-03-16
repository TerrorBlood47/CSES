#include<bits/stdc++.h>
using namespace std;


int main(){
    int i,n,j,x,y,b;
    //bool a;

    scanf("%d",&n);
    //x = 1<<(t);
    //b = ceil(log(n))+1;
    int a[n];

    for(i=0;i<pow(2,n);i++){
        b=i;
        for(j=0;j<n;j++){
            a[j]=b%2;
            b = b/2;
        }

        for(j=n-1;j>-1;j--){
            printf("%d",a[j]);
        }

        printf("\n");

    }

    //printf("\n");

    

    //printf("%d",x);

    return 0;
}