#include<iostream>

using namespace std;
int main(){
    int N;
    cin>>N;
    
    while(N--){
        char a[6];
        char temp;
        for(int i=0;i<6;i++){
          cin>>a[i];
          
        }
        temp=a[0];
        a[0]=a[3];
        a[3]=temp;
        for(int i=0;i<3;i++){
          cout<<a[i];
        }
        cout<<" ";
        for(int i=3;i<6;i++){
          cout<<a[i];
        }
        cout<<endl;
 
    }
}
