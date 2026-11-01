#include <iostream>
using namespace std;

class TwoStacks {
    int* arr;
    int size;
    int top1;
    int top2;

public:
    // Constructor: Array initialize karne ke liye
    TwoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;         // Stack 1 left se start hoga
        top2 = size;       // Stack 2 right se start hoga
    }

    // --- STACK 1 METHODS ---
    
    // Stack 1 mein element push karna
    void push1(int num) {
        // Check karenge ki dono ke beech mein space hai ya nahi
        if (top2 - top1 > 1) {
            top1++;
            arr[top1] = num;
        } else {
            cout << "Stack OverFlow" << endl;
        }
    }

    // Stack 1 se element pop karna
    int pop1() {
        if (top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        } else {
            cout << "Stack Underflow" << endl;
            return -1;
        }
    }

    // --- STACK 2 METHODS ---

    // Stack 2 mein element push karna (Aapki image wala logic)
    void push2(int num) {
        // Check karenge ki dono ke beech mein space hai ya nahi
        if (top2 - top1 > 1) {
            top2--;
            arr[top2] = num;
        } else {
            cout << "Stack OverFlow" << endl;
        }
    }

    // Stack 2 se element pop karna
    int pop2() {
        if (top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        } else {
            cout << "Stack Underflow" << endl;
            return -1;
        }
    }
};

int main() {
    // 5 size ka array banaya jisme 2 stacks chalenge
    TwoStacks st(5);

    // Stack 1 mein push kiya
    st.push1(10);
    st.push1(20);

    // Stack 2 mein push kiya
    st.push2(100);
    st.push2(90);
    st.push2(80);

    // Pura array bhar chuka hai, ab Overflow dikhayega
    st.push1(30); 

    // Elements nikal kar check karte hain
    cout << "Popped from Stack 1: " << st.pop1() << endl; // 20
    cout << "Popped from Stack 2: " << st.pop2() << endl; // 80

    return 0;
}