class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int r = image.size();
        int c = image[0].size();
        int scolor = image[sr][sc];

        if (scolor == color) return image;
        dfs(sr, sc, color,scolor, image, r, c);
        return image;
    }
private:
    void dfs(int sr, int sc, int color,int scolor, vector<vector<int>>& image, int r, int c){
        if(sr < 0 || sr > r - 1 || sc < 0 || sc > c - 1 || image[sr][sc]!=scolor) return;
        cout<<sr<<' '<<sc<<endl;
        image[sr][sc] = color;
        dfs(sr+1, sc, color, scolor, image, r, c);
        dfs(sr-1, sc, color, scolor, image, r, c);
        dfs(sr, sc+1, color, scolor, image, r, c);
        dfs(sr, sc-1, color, scolor, image, r, c);
    }
};