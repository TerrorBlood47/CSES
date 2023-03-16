#include<bits/stdc++.h>
using namespace std;

int print_seq_hanoi(int n, int src , int help , int dest){
    
    if(n>0){
        print_seq_hanoi(n-1,src,dest,help);

        printf("%d %d\n",src,dest);

        print_seq_hanoi(n-1,help,src,dest);
    }
    
    return 0;
}

int main(){
    int i,j,n,min;

    scanf("%d",&n);

    min = pow(2,n) - 1;

    printf("%d\n",min);

    print_seq_hanoi(n,1,2,3);

    return 0;
}