class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        int n = arr.size(), i=0, n1=(n/4);
        //if(n<4){ return arr[0];}

        for(i; i<n; i++){
            if(arr[i]==arr[i+n1]){
                return arr[i];
            }
        }
        return arr[i];
    }
};