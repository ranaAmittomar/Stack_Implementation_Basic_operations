// Stack_Implementation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr auto n = 100;


class stack {

    int* arr;
    int top;
public:
    stack() {
        arr = new int[n];
        top = -1;
    }

    void push(int x) {


        if (top == n - 1) {
            cout << "Stack Overflow." << endl;
            return;
        }
        else {
            top++;
            arr[top] = x;
        }
        cout << arr[top] << " ";
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty..";
            return;
        }
        else {
            top--;
        }
    }

    void top_ele() {
        if (top == -1) {
            cout << "Stack is empty..";
            return ;
        }
        else {
            cout<<" The Top Ele." << arr[top]<<endl;
        }

    }

    bool empty() {
        return top == -1;
    }

};

int main()
{
    stack st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(10);
    st.top_ele();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.top_ele();
    st.empty();

    return 0;
}


