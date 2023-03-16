#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,x,y,t;

    scanf("%d",&t);

    while(t--){
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        //int A,B,C;
        //double n;
        //double m1,m2;
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&x,&y);
        /*
        A = b-d;
        B = c-a;
        C = (a*d) - (b*c);

        if(A<0){
            A = (-1)*A;
            B = (-1)*B;
            C = (-1)*C;
        }
        

            n = (-((B*y)+C))/A;

            //m1 = (d-b)/(c-a);

           // m2 = (y-d)/(x-c);

            if(n==x){
                printf("TOUCH\n");
            }
            else if(x<n){
                printf("LEFT\n");
            }
            else{
                printf("RIGHT\n");
            }

        */

        long long int m=(long long)((d-b)*(x-c)) - (long long)((y-d)*(c-a));

        if(m<0){
            printf("LEFT\n");
        }
        else if(m>0){
            printf("RIGHT\n");
        }
        else{
            printf("TOUCH\n");
        }


    }
        

    

    return 0;
}