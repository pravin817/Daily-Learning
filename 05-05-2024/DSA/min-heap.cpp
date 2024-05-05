#include<iostream>
#include<queue>
using namespace std;

int main(){


    // declare the min heap
    priority_queue<int,vector<int>,greater<int>>pq;

    pq.push(10);  // 10
    pq.push(20);  // 10 20
    pq.push(30);  // 10 20 30
    pq.push(40);  // 10 20 30 40
    pq.push(50);  // 10 20 30 40 50
    pq.push(5);   // 5 10 20 30 40 50

    cout<<"The size of the priority queue is : "<<pq.size()<<endl;

    while(!pq.empty()){
        int val = pq.top();
        cout<<val<<" ";
        pq.pop();
    }
    return 0;
}