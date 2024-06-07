#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
    if(cnt>=M)
    {
        for(auto it:vec) cout<<it<<" ";
        cout<<endl;
        return;
    }
    for(int i=1;i<=N;i++)
    {
        if(vec.empty()||vec.back()<i)
        {
            vec.push_back(i);
            func(cnt+1);
            vec.erase(vec.end()-1);
        }
    }
}

int main() {
   cin >> N >> M;
   func(0);
}
