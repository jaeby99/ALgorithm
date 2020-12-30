#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> v;
    vector<int> result;
    int t=10;
    int max=0;
    int i=0;
    
    while(n!=0){
        int num=n%t;
        v.push_back(num);
        n=(n-num)/10;
    }
    
    
    while(!v.empty()){
        if(v[max]<v[i]){
            max=i;
        }
        i++;
        if(i==v.size()){
            answer+=v[max]*pow(10,v.size());
            v.erase(v.begin()+max);
            max=0;
            i=0;
        }
    }
    answer/=10;
    
    return answer;
}