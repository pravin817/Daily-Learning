#include <iostream>
#include <queue>
using namespace std;

int main()
{

    // MAX Heap
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    cout << "The size of the priority queue is : " << pq.size() << endl;

    while (!pq.empty())
    {
        int val = pq.top();
        cout << val << " ";
        pq.pop();
    }

    return 0;
}