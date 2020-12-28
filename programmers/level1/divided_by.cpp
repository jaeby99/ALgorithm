#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    vector<int> result;
    int num=0;
    int n=0;
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]%divisor==0)
            result.push_back(arr[i]);
    }
    
    if(result.empty()){
        answer.push_back(-1);
    }
    
    while(!result.empty()){
        if(n==result.size()-1){
            answer.push_back(result[num]);
            result.erase(result.begin()+num);
            n=0;
            num=0;
            continue;
        }
        
        if(result[num]>=result[n+1])
            num=n+1;
        
        n++;
    }
    
    return answer;
}