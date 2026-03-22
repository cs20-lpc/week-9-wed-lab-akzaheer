#include "ArrayQueue.hpp"

int main() {
    ArrayQueue<int> q(5); // queue of size 5

    q.enqueue(67);
    q.enqueue(6767);        // add numbers
    q.enqueue(676767);

    cout << "f: " << q.front() << endl;
    cout << "b: "  << q.back()  << endl;            // show vals for front, bnack, and length
    cout << "l: " << q.getLength() << endl;     

    q.dequeue();            // delete and print
    cout << "front after dequeue: " << q.front() << endl;

    ArrayQueue<int> q2 = q;
    cout << "q2 front: " << q2.front() << endl;     // test copy function and print

    // test clear
    q.clear();
    cout << "q empty: " << q.isEmpty() << endl; // 1

    try{
            q.front();
    } catch (string& e){                   // test exceptions
        cout << e << endl;
    }
    return 0;
}