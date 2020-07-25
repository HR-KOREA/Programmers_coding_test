#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> basket(1);

    for (int i = 0; i < moves.capacity(); i++)
    {
        for (int j = 0; j < board.capacity(); j++)
        {
            if (board[j][moves[i] - 1] != 0)
            {
                if (board[j][moves[i] - 1] == basket.back())
                {
                    answer++;
                    basket.pop_back();
                }
                else
                {
                    basket.push_back(board[j][moves[i] - 1]);
                }
                board[j][moves[i] - 1] = 0;
                break;
            }
        }
    }
    return answer * 2;
}