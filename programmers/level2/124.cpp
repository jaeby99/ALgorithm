#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n) {
    string answer = "";
    int i=1;
    
    while(n>0)
    {
        int num=n%(i*3)/i;
        if(num==0)
        {
            answer.push_back('4');
            n=n-i*3;
        }
        else if(num==1)
        {
            answer.push_back('1');
            n=n-num*i;
        }
        else
        {
            answer.push_back('2');
            n=n-num*i;
        }
        i*=3;
    }
    reverse(answer.begin(), answer.end());
    
    return answer;
}