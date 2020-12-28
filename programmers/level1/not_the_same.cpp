#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int n=0;
    answer.push_back(arr[n]);
    
    while(n!=arr.size()-1){
        if(arr[n]!=arr[n+1]){
            answer.push_back(arr[n+1]);
        }
        n++;
    }
   

    return answer;
}