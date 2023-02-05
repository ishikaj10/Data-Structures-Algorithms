class Solution{
  public:
    int middle(int A, int B, int C){
        
        vector<int> temp;
        temp.push_back(A);
        temp.push_back(B);
        temp.push_back(C);
        sort(temp.begin(), temp.end());

        return temp[1];
    }
};