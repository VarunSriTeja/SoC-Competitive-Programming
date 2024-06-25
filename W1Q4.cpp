class Solution {
public:
    bool isPowerOfTwo(int n) {
    int x;
    if(n>0){
        while(n>1){
        
        x=n%2;
        n=n/2;
        if(x!=0){
            return false;
            break;
        }
        else{
            continue;
        }
        }
        return true;
        }
        
    else{
        return false;
        }
    }
};
