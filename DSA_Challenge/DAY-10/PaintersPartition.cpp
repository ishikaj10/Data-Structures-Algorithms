bool isPossible(vector<int> &boards,int n , int k ,int mid){
         int PainterCount=1;
         int blockCount =0;
         for(int i=0;i<n;++i){
             if(blockCount+boards[i]<=mid){
                 blockCount+=boards[i];
             }else{
                 PainterCount++;
                 if(PainterCount>k||boards[i]>mid){
                     return false;
                 }
                 blockCount=boards[i];
             }
         }
         return true;
 }

int findLargestMinDistance(vector<int> &boards, int k)
{
    int n =boards.size();
       int s =0;
       int sum =0;
       for(int i=0;i<n;++i){
           sum+=boards[i];
       }
       int e = sum;
       int ans =-1;
       int mid =s+(e-s)/2;
       while(s<=e){
           if(isPossible(boards,n,k,mid)){
               ans =mid;
               
               //Left wale bhaag jaenge

               e =mid-1;
           }else{
               s=mid+1;
           }
           mid =s+(e-s)/2;
       }
       return ans;
}