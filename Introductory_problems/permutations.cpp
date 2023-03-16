#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j,a,b;

    scanf("%d",&n);
    if(n==1){
        printf("1");
    }
    else if(n<=3){
        printf("NO SOLUTION\n");
    }
    else{
        a=n-1;
        b=n;
        while(a>0){
            printf("%d ",a);
            a -= 2;
        }

        printf("%d",b);
        b--;
        b--;

        while(b>0){
            printf(" %d",b);
            b -= 2;
        }

    }


    return 0;
}