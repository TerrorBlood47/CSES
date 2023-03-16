#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int n;//this is the way to use user-given global variables

vector<ll>apples;

ll minimal(int index, ll crate_A, ll crate_B){

    if(index==n){
        return abs(crate_A - crate_B);
    }

    return min(minimal(index+1, crate_A + apples[index], crate_B),
                minimal(index+1, crate_A , crate_B + apples[index]));

}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i;
    cin>>n;
    //vector<ll>apples;

    for(i=0;i<n;i++){
        ll w;
        cin>>w;
        apples.push_back(w);
    }

    ll min = minimal(0 , 0 , 0 );

    cout<<min<<endl;

    return 0;
}