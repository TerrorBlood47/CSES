#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,temp;

    scanf("%d",&t);

    while(t--){
        scanf("%d%d",&a,&b);
        if((a==0 && b!=0) ||(a!=0 && b==0)){
            printf("NO\n");
        }
        else{

            if(a<b){
                temp=a;
                a=b;
                b=temp;
            }

            if((a+b)%3==0 && a<=2*b){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }

        }
    }
    return 0;
}