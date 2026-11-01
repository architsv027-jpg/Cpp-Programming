#include<iostream>
using namespace std;


// Stack implementation using array

class Stack {
    int *arr;
    int top;
    int size;

public:

// behavior of stack
Stack(int size){
    this->size=size;
    arr=new int[size];
    top=-1;
}

// push operation

void push(int element){
    if(top < size - 1){
        top++;
        arr[top] = element;
    }
    else{
        cout<<"Stack overflow"<<endl;
    }
}


//delete the element

void pop(){
    if(top==-1){
        cout<<"Stack underflow"<<endl;
    }
    else{
        top--;
    }

}
   //shoe the top element
void peek(){
    if(top>0 && top<size){
        cout<<"Top element is: "<<arr[top]<<endl;
    }
    else{
        cout<<"Stack is empty"<<endl;
    }
  
}

 bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }

 }

};

int main(){



    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);

    st.pop();

    st.peek();
    

    return 0;
}

    
