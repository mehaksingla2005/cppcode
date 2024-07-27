 private:
   int count(string str,int l,int h){
       if(l>h)return 0;
       if(l==h)return 0;
       if(l==h-1) return str[l]==str[h]?0:1;
       if(str[l]==str[h])return count(str,l+1,h-1);
       return min(count(str,l+1,h),count(str,l,h-1))+1;
   }
  public:
    int countMin(string str){
    //complete the function here
    return count(str,0,str.size()-1);
    
    }
