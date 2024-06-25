#include<iostream>
#include <algorithm> 
#include <vector>
#include<cmath>
using namespace std;
long long ternConvo(long long a){
    long long A=0;
    long long x,y;
    x=a;
    long long place=1;
    while(x>0){
        y=x%3;
        A=y*place+A;
        x=x/3;
        place*=10;
    }
    return A;
}
long long reverseConvo(vector<int> A){
    long long  m=A.size()-1;
    long long x=0;
    for(int i=0;i<=m;++i){
        x=(A[i]*pow(3,m-i))+x; 
    }
    return x;
}
vector<int> intToVector(long long  num) {
    vector<int> digits;
    while (num > 0) {
        long long digit = num % 10; 
        digits.push_back(digit); 
        num = num / 10; 
    }
    if(num==0){
        digits.push_back(0);
    }
    return digits;
}
vector<int> special_sub(vector<int> Cc,vector<int>Aa){
    int i=max(Aa.size(),Cc.size());
    Aa.resize(i, 0);
    Cc.resize(i, 0);
    vector<int> Bb;
    int j=0,x;
    for(int j=0;j<i;j++){
        if(Cc[j]<Aa[j]){
            Cc[j]=Cc[j]+3;
            
        }
        x=Cc[j]-Aa[j];
        Bb.push_back(x);
    }
    reverse(Bb.begin(),Bb.end());
    return Bb;
}
int main(){
    long long  a,b,c,A,C,B,x;
    cin>>a>>c;
    A=ternConvo(a);
    C=ternConvo(c);
    vector<int> Aa = intToVector(A);
    vector<int> Cc = intToVector(C);
    vector<int> Bb;
    Bb=special_sub(Cc,Aa);
    b=reverseConvo(Bb); 
    cout<<b;
}
