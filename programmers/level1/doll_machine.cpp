#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> container;
    
    for(int i=0;i<moves.size();i++)
    {
        int move=moves[i]-1;
        for(int j=0;j<board.size();j++)
        {
            if(board[j][move]!=0)
            {
                container.push_back(board[j][move]);
                board[j].insert(board[j].begin()+move, 0);
                move++;
                board[j].erase(board[j].begin()+move);
                break;
            }
        }
        if(container.size()>1 && container[container.size()-1]==container[container.size()-2])
        {
            container.pop_back();
            container.pop_back();
            answer+=2;
        }
    }
    
    return answer;
}