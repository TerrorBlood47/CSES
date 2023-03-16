#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,p=5,x=0,i;

    scanf("%d",&n);

    for(i=1;i>-1;i++){
        p = n/pow(5,i);
        x = x + p;

        if(p==0){
            break;
        }
    }

    printf("%d\n",x);

    return 0;
}