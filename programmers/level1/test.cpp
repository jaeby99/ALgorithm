#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    vector<int> v(200);
    int sum;
    int temp;
    int pivot=0;
    
    for(int i=0;i<numbers.size()-1;i++){
        for(int j=i+1;j<numbers.size();j++){
            sum=numbers[i]+numbers[j];
            if(v[sum]==0){
                v[sum]=1;
            }
        }
    }
    
    for(int i=0;i<200;i++){
        if(v[i]==1)
            answer.push_back(i);
    }
 
    return answer;
}