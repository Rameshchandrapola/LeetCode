class NumArray {
public:
    int n;
    int seg[120005];
    
    void build(int index, int low,int high,vector<int>&nums){
        if(low==high){
            seg[index]=nums[low];
            return ;
        }
        int mid=low +(high-low)/2;
        build(2*index+1,low,mid,nums);
        build(2*index+2,mid+1,high,nums);
        seg[index]=seg[2*index+1]+seg[2*index+2];

    }
    
    int rangeSum(int index,int low,int high,int left, int right){
        if(left<=low&&right>=high){
            return seg[index];
        }
        if(left>high||right<low){
            return 0;
        }
        int mid= low+(high-low)/2;
        return rangeSum(2*index+1,low,mid,left,right)+rangeSum(2*index+2,mid+1,high,left,right);
    }
    
    void treeupdate(int index,int low,int high, int ind,int val){
        if(low==high){
            seg[index]=val;
            return;
        }
        int mid=low+(high-low)/2;
        if(ind<=mid){
            treeupdate(2*index+1,low,mid,ind,val);
        }else{
            treeupdate(2*index+2,mid+1,high,ind,val);
        }
        seg[index]=seg[2*index+1]+seg[2*index+2];
        return;
    }
    
    NumArray(vector<int>& nums) {
        n=nums.size();
        build(0,0,n-1,nums);
    }
    
    void update(int index, int val) {
        treeupdate(0,0,n-1,index,val);
    }
    
    int sumRange(int left, int right) {
        return rangeSum(0,0,n-1,left,right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */