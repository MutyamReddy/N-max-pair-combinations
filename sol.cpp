vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    priority_queue<int,vector<int>,greater<int>>minh;
    sort(A.begin(),A.end(),greater<int>());
    sort(B.begin(),B.end(),greater<int>());
    int sum=0;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<B.size();j++){
            sum=A[i]+B[j];
            if(i==0){
            minh.push(sum);
        }else if(minh.top()<sum){
            minh.pop();
            minh.push(sum);
        }else{
            break;
        }
      }
    }
    vector<int>ans;
    while(minh.size()!=0){
        ans.push_back(minh.top());
        minh.pop();
    }
    sort(ans.begin(),ans.end(),greater<int>());
    return ans;
}
   
