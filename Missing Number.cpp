/*
You are given all numbers between 1,2,…,n except one.
Your task is to find the missing number.
*/

#include<bits/stdc++.h>
using namespace std;

int func(long long int n, vector<long long int> &v){
    long long int sum = 0;
    for(int i = 0; i < n - 1; i++){
        sum += v[i];
    }
    return (n * (n + 1)) / 2 - sum;
}

int main(){
    long long int n;
    cin>>n;
    vector<long long int> v(n - 1);
    for(int i = 0; i < n - 1; i++) cin>>v[i];
    cout<<func(n, v)<<"\n";
    return 0;
}
