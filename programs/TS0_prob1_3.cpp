#include<iostream>
using namespace std;


int main(){

    int n,ans;
    cin>>n;
    ans = n/7 + n/5 + n/11 - n/7*5 - n/5*11 - n/7*11 - n/5*7*11;
    cout<<ans;


    return 0;
}