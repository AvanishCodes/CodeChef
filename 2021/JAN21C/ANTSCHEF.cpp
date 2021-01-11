#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int positives = 0, negatives = 0;
        while(n--){
            int m;
            cin>>m;
            while(m--){
                int x;
                cin>>x;
                if(x>0)
                    positives += 1;
                else
                {
                    negatives += 1;
                }
            }
        }
        cout<<positives*negatives<<'\n';
    }
    
}