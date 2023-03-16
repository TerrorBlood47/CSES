#include<bits/stdc++.h>
using namespace std;

int flag[26];

int main(){
    int i,j,x=0,a,n,k,m,y;
    char s[1000001],c;

    scanf("%s",s);
    n=strlen(s);
    //int flag[26];

    char t[n];

    for(i=0;i<strlen(s);i++){
        flag[s[i]-'A']++;
    }

    for(i=0;i<26;i++){
        if(flag[i]%2!=0){
            x++;
        }
    }

    if(n%2==0 && x!=0){
        printf("NO SOLUTION\n");
    }
    else if(n%2!=0 && x==1){
        m=0;

        for(i=0;i<26;i++){
            
            if(flag[i]!=0 && flag[i]%2==0){
                k=flag[i]/2;

                for(j=m;j<m+k;j++){
                    t[j]=i+'A';
                    t[n-1-j]=i+'A';
                }
                m += k;
            }
            else if(flag[i]!=0 && flag[i]%2!=0){
                
                for(j=0;j<(flag[i]+1)/2;j++){
                    t[((n+1)/2)-1-j]=i+'A';
                    t[((n+1)/2)-1+j]=i+'A';
                }

            }
            
        }

    }
    else if(n%2==0 && x==0){
        m=0;

        for(i=0;i<26;i++){
            
            if(flag[i]!=0 && flag[i]%2==0){
                k=flag[i]/2;

                for(j=m;j<m+k;j++){
                    t[j]=i+'A';
                    t[n-1-j]=i+'A';
                }
                m += k;
            }
            
        }

    }

    for(i=0;i<n;i++){
        printf("%c",t[i]);
    }

    if(x>1){
        printf("NO SOLUTION\n");
    }

    //printf("\n");

    return 0;
}