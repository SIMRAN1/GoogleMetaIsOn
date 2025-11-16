int Solution::maxSubArray(const vector<int> &A) {
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<A.size();i++) {
        if(sum<0) {
            sum=0;
        }
         sum+=A[i];
         maxi=max(maxi, sum);
    }
    
    return maxi;
}
