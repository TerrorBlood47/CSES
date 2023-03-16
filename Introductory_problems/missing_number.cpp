#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    long long int sum=0;
    scanf("%d",&n);

    //sum=(n*(n+1)/2);
    int a[n-1];

    for(i=0;i<n-1;i++){
        scanf("%d",&a[i]);
        //sum = i + 1 - a[i];
    }

    for(i=0;i<n;i++){
        if(i<n-1){
            sum = sum - a[i];
        }

        sum = sum + i + 1;

    }
    //sum = sum + n;

    // for(i=0;i<n-2;i++){
    //     for(j=i+1;j<n-1;j++){

    //         if(a[i]>a[j]){
    //             int temp=a[i];
    //             a[i]=a[j];
    //             a[j]=temp;
    //         }
    //     }
    // }

    // for(i=1;i<n-1;i++){

    //     if(a[i-1]!=i){
    //         f=-1;
    //         printf("%d\n",i);
    //         break;
    //     }
    // }

    /*for(i=0;i<n-1;i++){
        printf("%d",a[i]);
    }*/
    //if(f==0){
        printf("%lld\n",sum);
   // }
        
    return 0;
}