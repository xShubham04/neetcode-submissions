class Solution {
    public int[][] merge(int[][] intervals) {
        List<int[]> res=new ArrayList<>();
        Arrays.sort(intervals,(a,b)->Integer.compare(a[0],b[0]));
        for(int[] p:intervals){
            if(res.isEmpty() || res.get(res.size()-1)[1]<p[0]) res.add(p);
            else{
                int[] last=res.get(res.size()-1);
                last[1]=Math.max(last[1],p[1]);
            }
        }
        return res.toArray(new int[res.size()][]);
    }
}
