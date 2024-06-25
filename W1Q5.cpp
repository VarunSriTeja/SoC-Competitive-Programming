#include<iostream>
using namespace std;
long long choco_length(long long x){
      long long i= x*x+2*x+2;
      return i;
}
int main(){
      int n;
      cin>>n;
      while(n--){
            long long x,y;
            cin>>x;
            y=choco_length(x);
            cout<<y<<endl;
      }
}
