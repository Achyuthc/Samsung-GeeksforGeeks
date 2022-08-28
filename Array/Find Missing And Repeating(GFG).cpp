/*Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.*/

class Solution{
public:
    int *findTwoElement(int *arr, long long n) {
        // code here
        long long sum=0,square=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            square+=(long long)arr[i]*(long long)arr[i];
        }
        long long diff=(n*(n+1))/2-sum,add=((n*(n+1)*(2*n+1))/6-square)/diff;
        int x=(diff+add)/2,y=add-x;
        
        int *ans;
        ans[0]=y;
        ans[1]=x;
        return ans;
    }
};
