#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> student;
    
    student.assign(n,1);
    int n1=0;
    int n2=0;
    int count=0;
    
    for(int i=0;i<lost.size();i++){
       student[lost[i]-1]--;
    }
    for(int i=0;i<reserve.size();i++){
        student[reserve[i]-1]++;
    }
    
    for(int i=0;i<n;i++){
        if(i==n-1 && student[i]!=0)
            break;
        else if(i==n-1 && student[i]==0){
            count++;
            break;
        }
        
        if(student[i]==0 && student[i+1]==2){
            student[i]++;
            student[i+1]--;
        }
        else if(student[i]==0 && student[i+1]!=2)
            count++;
        else if(student[i]==2 && student[i+1]==0){
            student[i]--;
            student[i+1]++;
        }
    }
    answer=n-count;
    
    return answer;
}