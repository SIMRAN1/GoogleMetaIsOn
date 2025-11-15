void specialStringsHelper(vector<string> &A, int pos, string temp, vector<string> &res) {
    if(temp.size() == A.size()) {
        res.push_back(temp);
        return;
    }
    
    for(char ch : A[pos]) {
        temp.push_back(ch);
        specialStringsHelper(A,pos+1,temp, res);
        temp.pop_back();
    }
}

vector<string> Solution::specialStrings(vector<string> &A) {
    vector<string> res;
    string temp="";
    specialStringsHelper(A,0,temp, res);
    return res;
}
