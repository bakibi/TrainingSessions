#include<iostream>
using namespace std;

//le plus grand divieur commun recusive
int gcd(int a,int b){
    if(a == 0)
        return b;
    return gcd(b%a,a);
}


//le plus petit pultiple commun
int lcm(int a,int b){
    return a*b/gcd(a,b);
}

int main(){

    int a,b;
    cin>>a>>b;
    //le plus grand divieur commun iterative
    while(a !=0){
        a = b%a;
        b = a;
    }
    cout<<b;


    return 0;
}