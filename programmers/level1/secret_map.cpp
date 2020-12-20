#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<int> map1;
    vector<int> map2;
    
    for(int i=0;i<n;i++){
        int num=0;
        string ch="";
        
        while(num!=n){
            map1.push_back(arr1[i]%2);
            arr1[i]/=2;
            map2.push_back(arr2[i]%2);
            arr2[i]/=2;
            num++;
        }
        
        for(int j=n-1;j>=0;j--){
            if(map1[j]==1 || map2[j]==1)
                ch.append("#");
            else if(map1[j]==0 && map2[j]==0)
                ch.append(" ");
        }
        
        answer.push_back(ch);
        map1.clear();
        map2.clear();
    }
    
    
    return answer;
}