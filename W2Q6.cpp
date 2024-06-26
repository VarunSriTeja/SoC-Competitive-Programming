class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>arr1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            int count=1;
            while(i+1<arr.size() && arr[i]==arr[i+1]){
                count++;  
                i++;          
            }
            arr1.push_back(count);
        }
        sort(arr1.begin(),arr1.end());
        for(int x=1;x<arr1.size();x++){
            if(arr1[x]==arr1[x-1]){
                return false;
            }
        }
        return true;


    }
    
};
