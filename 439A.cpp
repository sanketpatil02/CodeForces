#include<bits/stdc++.h>

using namespace std;

int main(){
    int n ,d ;
    cin >> n >>d ;

    int result = (n-1)*10;
    int temp;

    int count = n ;
    int singTime = 0;
    while (count--){
        cin>>temp;
        singTime += temp;
        result += temp ;
    }
    if(result<=d){
        cout<<((d-singTime)/5)<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}