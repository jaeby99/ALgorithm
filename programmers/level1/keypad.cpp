#include <string>
#include <vector>
#include <cmath>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int l_state=10;
    int r_state=12;
    
    for(int i=0;i<numbers.size();i++)
    {
        int num=numbers[i];
        if(num==1 || num==4 || num==7)
        {
            l_state=num;
            answer+="L";
        }
        else if(num==3 || num==6 || num==9)
        {
            r_state=num;
            answer+="R";
        }
        else 
        {
            if(num==0)
                num=11;
            int distance_l=abs(l_state-num)/3+abs(l_state-num)%3;
            int distance_r=abs(r_state-num)/3+abs(r_state-num)%3;
            
            if(distance_l>distance_r)
            {
                r_state=num;
                answer+="R";
            }
            else if(distance_l<distance_r)
            {
                l_state=num;
                answer+="L";
            }
            else if(hand=="left")
            {
                l_state=num;
                answer+="L";
            }
            else
            {
                r_state=num;
                answer+="R";
            }
        }
    }
    
    return answer;
}