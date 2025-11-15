void subsetsHelper(int pos, vector<int> &A, vector<int> temp, vector<vector<int>> &res) {
   // cout<<pos;
    res.push_back(temp);
    
    for(int i=pos;i<A.size();i++) {
        temp.push_back(A[i]);
        subsetsHelper(i+1, A, temp, res);
        temp.pop_back();
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int>> res;
    vector<int> temp;
    sort(A.begin(), A.end());
    subsetsHelper(0, A, temp, res);
    return res;
}
