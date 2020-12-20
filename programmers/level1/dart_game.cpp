#include <string>
#include <string.h>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    char ch[dartResult.size()];
    int score[3]={0,0,0};
    int n=-1;
    
    strcpy(ch,dartResult.c_str());
    
    for(int i=0;i<dartResult.size();i++){
        if(ch[i]=='0' && ch[i-1]=='1'){
            score[n]=10;
            continue;
        }
        else if(ch[i]>='0' && ch[i]<='9'){
            n++;
            score[n]=ch[i]-48;
            continue;
        }
        switch(ch[i]){
            case 'S':
                break;
            case 'D':
                score[n]=pow(score[n],2);
                break;
            case 'T':
                score[n]=pow(score[n],3);
                break;
                 case '*':
                if(n==0){
                    score[n]*=2;
                    break;
                }
                else{
                    score[n]*=2;
                    score[n-1]*=2;
                    break;
                }
            case '#':
                score[n]*=-1;
                break;
        }
    }
    
    answer=score[0]+score[1]+score[2];
    return answer;
}