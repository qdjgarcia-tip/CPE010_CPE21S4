#include <iostream>
#include <vector>

int pathmemo(int m, int n, int cost, const std::vector<std::vector<int>>& mat, std::vector<std::vector<std::vector<int>>>& memo){

    if(cost < 0){
        return 0;
    }


    if(m == 0 && n == 0){
        return (mat[0][0] == cost) ? 1 : 0;
    }


    if(memo[m][n][cost] != -1){
        return memo[m][n][cost];
    }

    int paths = 0;
    int remaining_cost = cost - mat[m][n];


    if (m == 0){
        paths = pathmemo(0, n - 1, remaining_cost, mat, memo);
    }else if (n == 0){
        paths = pathmemo(m - 1, 0, remaining_cost, mat, memo);
    }else{
        paths = pathmemo(m - 1, n, remaining_cost, mat, memo) + 
                pathmemo(m, n - 1, remaining_cost, mat, memo);
    }

    return memo[m][n][cost] = paths;
}

int main() {
    
    std::vector<std::vector<int>> mat = {
        {2, 4},
        {6, 8}
    };

    std::cout << "[1, 2]"<< std::endl;
    std::cout << "[3, 4]"<< std::endl;
    std::cout << std::endl;

    int M = mat.size();
    int N = mat[0].size();
    int target_cost = 14;

    std::vector<std::vector<std::vector<int>>> memo(
        M, std::vector<std::vector<int>>(
            N, std::vector<int>(target_cost + 1, -1)
        )
    );

    int result = pathmemo(M - 1, N - 1, target_cost, mat, memo);
    std::cout << "Total paths with cost " << target_cost << " are: " << result << std::endl;

    return 0;
}