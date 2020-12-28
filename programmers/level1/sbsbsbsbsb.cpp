#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int div=n/2;
    int dis=n%2;
    
    for(int i=0;i<div;i++){
        answer+="수박";
    }
    if(dis==1)
        answer+="수";
    
    return answer;
}