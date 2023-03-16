#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,max=1,k=1;
    char c,p;
    char s[1000001];

    scanf("%s",s);

    n=strlen(s);

    c=s[0];

    for(i=1;i<n;i++){
        p=s[i];

        if(c==p){
            k++;
        }
        else{
            k=1;
        }

        if(k>max){
            max=k;
        }

        c=p;
    }


    printf("%d\n",max);

    return 0;
}