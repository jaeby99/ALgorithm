#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    
    for(int i=0;i<s.size();i++)
    {
        if(i==0 || s[i-1]==' ')
        {
            if(s[i]>96 && s[i]<123)
                s[i]-=32;
        }
        else if(s[i]>64 && s[i]<91)
        {
            s[i]+=32;
        }
    }
    
    return s;
}