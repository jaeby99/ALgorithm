#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i=0;i<s.size();i++){
        if(s[i]==' ')
            continue;
        else if(s[i]<91 && s[i]+n>90)
            s[i]=s[i]+n-26;
        else if(s[i]>96 && s[i]+n>122)
            s[i]=s[i]+n-26;
        else
            s[i]+=n;
    }
    answer=s;
    
    return answer;
}