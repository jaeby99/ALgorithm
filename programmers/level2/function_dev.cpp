#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int workdone=0;
    
    while(!progresses.empty()){
        for(int i=0;i<speeds.size();i++){
            progresses[i]+=speeds[i];
        }
        for(int i=0;i<progresses.size();i++){
            if(progresses[i]<100)
                break;
            else{
                workdone++;
                progresses.erase(progresses.begin()+i);
                speeds.erase(speeds.begin()+i);
                i--;
            }
        }
        if(workdone!=0){
            answer.push_back(workdone);
            workdone=0;
        }
    }
    
    return answer;
}