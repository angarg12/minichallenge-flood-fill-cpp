#ifndef MINICHALLENGE_FLOOD_FILL
#define MINICHALLENGE_FLOOD_FILL

#include <vector>

class Solution {
private:
    void recursion(std::vector<std::vector<int>>& image, int row, int col, int newColor, int oldColor);
public:
    std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int newColor);
};

#endif

