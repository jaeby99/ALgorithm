#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int solution(vector<int> arr) {
    int answer = 0;
    
    sort(arr.begin(), arr.end());
    
    answer=arr[0]*arr[1]/gcd(arr[1],arr[0]);
    
    for(int i=2;i<arr.size();i++)
    {
        if(answer>arr[i])
        {
            answer=answer*arr[i]/gcd(answer, arr[i]);
        }
        else if(answer<arr[i])
        {
            answer=answer*arr[i]/gcd(arr[i],answer);
        }
    }
    
    return answer;
}