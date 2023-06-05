class Solution {
public:
    vector<int> generateR(int row){
        long long ans=1;
        vector<int> ansR;
         ansR.push_back(1);
        for (int i=1 ; i<row; i++){
            ans=ans*(row-i);
            ans=ans/i;
            ansR.push_back(ans);    
         }
            return ansR;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ansV;
        for(int i=1 ; i<=numRows ; i++){
             ansV.push_back(generateR(i));
        }
        return ansV;
    }
};
