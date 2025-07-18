class Solution{
  public:
    int maxScore(vector<int>& c , int k){
        int l,r=c.size()-1,sum=0,msum=0;
        for(l=0;l<k;l++)
        {sum+=c[l];}
        msum=sum;
        l=k-1;
    while(k--)
    {
      sum+=c[r--];
      sum-=c[l--];
    //   r--;
    //   l--;
      msum=max(msum,sum);
    }

  return msum;
    }
};