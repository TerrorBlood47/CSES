#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,e,f,g,h,t;

    scanf("%d",&t);

    while(t--){
        int m;
        //double m1,m2;
        scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);

        m=((d-b)*(g-e)) - ((c-a)*(h-f));
        
        if(m==0)printf("NO\n");
        else printf("YES\n");
        }
        
    return 0; 
}