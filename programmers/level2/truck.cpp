#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int total=0;
    queue<int> list;
    
    for(int i=0;i<truck_weights.size();i++){
        list.push(truck_weights[i]);
        total+=list.back();
        if(list.size()==1)
            answer+=bridge_length+1;
        else if(total>weight){
            while(total>weight){
                int t=list.front();
                list.pop();
                total-=t;
            }
            answer+=bridge_length-(list.size()-1);
        }
        else if(list.size()>bridge_length){
            total-=list.front();
            list.pop();
            answer+=1;
        }
        else {
            answer+=1;
        }
        
    }
        
    return answer;
}