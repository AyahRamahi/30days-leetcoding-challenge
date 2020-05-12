class Solution {
public:
    void fill(vector<vector<int>>& image, int x, int y, int oldColor, int newColor){
        if(x<0 || y<0 || x>=image.size() || y>=image[0].size() || image[x][y] != oldColor)
            return;
        image[x][y] = newColor;
        fill(image, x+1, y, oldColor, newColor);
        fill(image, x-1, y, oldColor, newColor);
        fill(image, x, y+1, oldColor, newColor);
        fill(image, x, y-1, oldColor, newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc] != newColor)
            fill(image, sr, sc, image[sr][sc], newColor);
        return image;
    }
};
