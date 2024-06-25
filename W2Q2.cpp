class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3;
        int a=word1.length();
        int b=word2.length();
        int c= min(a,b);
        for(int i=0;i<c;i++){
            word3+=word1[i];
            word3+=word2[i];
        }
        if(a==c){
            for(int i=c;i<b;i++){
            word3+=word2[i];
            }
        }
        else{
            for(int i=c;i<a;i++){
            word3+=word1[i];
            }
        }
        return word3;
    }
};
