class Solution {
    public double largestTriangleArea(int[][] points) {
        int n = points.length;
        double ans = 0.0;
        for(int i = 0; i < n; ++i)
            for(int j = i + 1; j < n; ++j)
                for(int k = j + 1; k < n; ++k) {
                    ans = Math.max(ans, area2(points, i, j, k));
                }
        return 0.5 * ans;
    }
    
    public double area2(int[][] points, int i, int j, int k) {
            int x1 = points[i][0], y1 = points[i][1], x2 = points[j][0], y2 = points[j][1], x3 = points[k][0], y3 = points[k][1];
            int x12 = x2 - x1, y12 = y2 - y1, x13 = x3 - x1, y13 = y3 - y1;
            return Math.abs(x13 * y12 - x12 * y13);
    }
}
