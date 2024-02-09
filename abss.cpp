#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10,b=20;
    vector<int> vec1={1,2,3,4,5,8,10,9,2,4};
    int mini=INT_MAX;
    int maxi=INT_MIN;
    sort(vec1.begin(),vec1.end());
    reverse(vec1.begin(),vec1.end());
    for(int i=0;i<vec1.size();i++){
        mini=min(mini,vec1[i]);
        maxi=max(maxi,vec1[i]);
        cout<<vec1[i]<<" ";
    }
    cout<<mini<<" "<<maxi<<endl;
    return 0;
}