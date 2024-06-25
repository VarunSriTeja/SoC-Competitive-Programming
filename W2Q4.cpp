class Solution {
public:
    int compress(vector<char>& chars) {
        int n= chars.size();
        vector<char>tchars;
        int i=0;
        int x=0;
        while(i<n){
            char currentChar = chars[i];
            int j=i;
            int count=0;
            tchars.push_back(currentChar);
            x++;
            while(i<n && chars[i]==currentChar ){
                count++;
                i++;
            }
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    tchars.push_back(c);
                    x++;
                }
            }
            
        }
        chars.swap(tchars);
        return x ;

    }
};
