class Solution {
    int solve(int left,int right,String s){
        int count=0;
        while(left>=0 && right<s.length() && s.charAt(left)==s.charAt(right)){
            left--;
            right++;
            count++;
        }
        return count;
    }
    public int countSubstrings(String s) {
        int res=0;
        for(int i=0;i<s.length();i++){
            res+=solve(i,i,s);
            res+=solve(i,i+1,s);
        }
        return res;
    }
}
