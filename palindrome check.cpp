#include<bits/stdc++.h>
using namespace std;
int rev(int n, int temp){
    if(n==0)
        return 0;
    temp=(temp*10) + (n%10);
    return rev(n/10 ,temp);
}
int main(){
    int n=121;
    int temp=rev(n,0);
    if(temp==0)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    return 0;
}