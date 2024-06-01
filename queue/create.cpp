#include <iostream>
#include <queue>
using namespace std;

int main (){
    queue <int> q ;

    q.push(25);
    q.push(30);
    q.push(35);
    q.push(40);
    q.push(45);

    cout << "size of queue is " << q.size() << endl;

    q.pop();
    cout << endl;

    while(!q.empty()){
		cout<<" "<<q.front();
		q.pop();
	}
    
    cout << "printing the queue " << q.front() << endl;
    cout << "size of queue is " << q.size() << endl;

}