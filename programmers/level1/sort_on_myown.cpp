#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<char> letter;
    int k=0;
    
    for(int i=0;i<strings.size();i++)
    {
        letter.push_back(strings[i][n]);
    }
    
    sort(letter.begin(), letter.end());
    sort(strings.begin(), strings.end());
    
    for(int i=0;i<strings.size();i++)
    {
        if(letter[k]==strings[i][n]){
            answer.push_back(strings[i]);
            strings.erase(strings.begin()+i);
            k++;
            i=-1;
        }
    }
    
    return answer;
}