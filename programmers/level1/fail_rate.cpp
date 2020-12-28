#include <string>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<double> per;
    vector<int> seq;
    int play;
    int fail;
    int n;
    
    seq.assign(N,0);
    
    for(int i=0;i<N;i++){
        play=0;
        fail=0;
        for(int j=0;j<stages.size();j++){
            if(stages[j]>i+1)
                play++;
            else if(stages[j]==i+1){
                play++;
                fail++;
            }
        }
        if(play==0){
            per.push_back((double)play);
        }
        else
            per.push_back((double)fail/(double)play);
    }
    
    for(int i=0;i<N;i++){
        n=0;
        for(int j=0;j<N;j++){
            if(per[i]<per[j])
                n++;
            else if(per[i]==per[j] && i>j)
                n++;
        }
        seq[n]=i+1;
    }
    
    for(int i=0;i<N;i++){
        answer.push_back(seq[i]);
    }
    
    return answer;
}