#include<bits/stdc++.h>
using namespace std;



void sorting_clockwise(int x[], int y[], int n){
    double angle[n];
    int i,j;
    for(i=0;i<n;i++){
        angle[i]=atan2(y[i],x[i]);
    }

    

    return ;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t,i,j;
    double Area;
    scanf("%d",&t);

    while(t--){
        cin>>n;

        int x[n],y[n];

        for(i=0;i<n;i++){
            cin>>x[i]>>y[i];
        }

        sorting_clockwise(x,y,n);

        double a=0,b=0;

        for(i=0;i<n-1;i++){
            a += x[i]*y[i+1];
            b += x[i+1]*y[i];
        }

        a += x[n-1]*y[0];
        b += x[0]*y[n-1];

        Area = fabs(a-b);
        Area = Area/2 ;

        cout<<

    }
        
    return 0; 
}