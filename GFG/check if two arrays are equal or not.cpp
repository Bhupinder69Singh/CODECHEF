class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        bool ans=0;
        //re-arranging both the arrays
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<N;i++){
            if(A[i]==B[i]){
                ans=1;
            }
            else{
                return 0;//return as soon as you get different value 
            }
        }
        return ans;
    }
};
