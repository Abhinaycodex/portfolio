#include <iostream>
#include <stack>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    //constructor

    Stack(int size){
        this -> size =size;
        arr = new int[size];
        top=-1;
        
    }

    void push(int element ){
        if (size-top>1){
            top++;
            arr[top]=element;
        }

        else{
            cout << "stack of overflow" <<endl;

        }
    }

    void pop (){
        if (top>=0){
            top--;
        }

        else{
            cout << "stack is underflow" << endl;
        }
    }

    int peek(){
        if(top >=0)
            return arr[top];
        else {
            cout << "stack is empty "<< endl;
            return -1 ;
        }
    }

    bool isempty (){
        if (top==-1)
        return true;
        
        else{
        return false;
        }
    }

};

int main (){

    // smjho yha 

    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << st.peek() << endl;
    st.pop();

    cout << st.peek() << endl;
    st.pop();

    cout << st.peek() << endl;
    st.pop();

    cout << st.peek() << endl;
    st.pop();

    cout << st.peek() << endl;
    st.pop();

    if(st.isempty()){
        cout << "stack is empty" << endl;
    }
    else {
        cout << "stack is not empty" <<endl;
    }
}