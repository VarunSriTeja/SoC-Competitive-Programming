class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    int temp=    gcd(str1.size(), str2.size());
    string str="";
    if (str1 + str2 == str2 + str1) {
        
        str=str1.substr(0, temp);
    }
    return str;
    }
};
