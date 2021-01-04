#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int mul=1;
    
    for(int i=s.size()-1;i>-1;i--){
        if(s[i]=='-'){
            answer*=-1;
            break;
        }
        else if(s[i]=='+')
            break;
        answer=answer+(s[i]-48)*mul;
        mul*=10;
    }
    
    
    return answer;
}