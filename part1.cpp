#include<bits/stdc++.h>
using namespace std;
int cmp1(int a,int b){
    if(a>b)
        return a<b;
}
int main()
{
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<a[i]<<" is go"<<endl;
    }
    sort(a,a+n,cmp1);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}
//password:3311982585@qq.com
//Ch070630    
