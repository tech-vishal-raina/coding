class Solution {
public:

   vector<int> generateRow(int row){
    long long ans = 1;
    vector<int> list;
    list.push_back(1);
    for(int col =1; col<row;col++){
      ans = ans *(row-col)/col;
      
      list.push_back(ans);
    } 
    return list;
   }
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> finalans;
        for(int i =1; i<=numRows; i++){
           
            finalans.push_back(generateRow(i));

        }
        return finalans;
        
        
    }
};