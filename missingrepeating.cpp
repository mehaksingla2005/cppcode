 vector<int> findTwoElement(vector<int> arr, int N) {
        // code here
        long long n = static_cast<long long>(N);;
       long long sn=(n*(n+1))/2;
       long long s2n=(n*(n+1)*(2*n+1))/6;
       long long s1=0;
       long long s2=0;
       for(int i=0;i<n;i++){
           s1+=arr[i];
           s2+=((long long)arr[i]*(long long)arr[i]);
       }
       long long val1=s1-sn;
       long long val2=s2-s2n;
       val2=val2/val1;
       long long x=(val1+val2)/2;
       long long y=(-val1+val2)/2;
       return {(int)x,(int)y};
    }
