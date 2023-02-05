// Largest sum contiguous subarray
class Solution{
public:

long long maxSubarraySum(int arr[], int n){

        

        int best=INT_MIN,sum=0;

        for(int i=0;i<n;i++)

        {

                sum=max(arr[i],sum+arr[i]);

                best=max(best,sum);           

        }

        

        return best;

    }
    };