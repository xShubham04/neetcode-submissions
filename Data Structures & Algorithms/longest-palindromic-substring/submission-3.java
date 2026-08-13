class Solution {
    String solve(int left,int right,String s){
        while(left>=0 && right<s.length() && s.charAt(left)==s.charAt(right)){
            left--;
            right++;
        }
        return s.substring(left+1,right);
    }
    public String longestPalindrome(String s) {
        int n=s.length();
        String ans="";
        for(int i=0;i<n;i++){
            String even=solve(i,i,s);
            String odd=solve(i,i+1,s);
            if(even.length()>ans.length()) ans=even;
            if(odd.length()>ans.length()) ans=odd;
        }
        return ans;
    }
}
