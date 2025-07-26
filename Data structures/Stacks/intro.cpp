#include <iostream>     
using namespace std;

struct Stack {

    int size;
    int top;
    int *s;
};

void push(Stack *st, int x) {
st->top++;
st->s[st->top] = x;
}

void display(struct Stack st) {
if(st.top == -1) {
    cout << "stack is empty" << endl;
}
else {

    for(int i = st.top; i >=0 ; i--) {
        cout << st.s[i];
    }
}
}

int pop(Stack *st) {
    int x = -1;
if(st->top == -1) {
    cout << "stack empty" << endl;
}
else {

   x = st->s[st->top];
   st->top--;
   cout << "Element popped out" << endl;
}
return x;
}

int peak(Stack st, int pos) {
    int x = -1;
    if(st.top - pos + 1 < 0) {
        cout << "Invalid POS" << endl;
    }
    else {
        x = st.s[st.top - pos + 1];
    }
    return x;
}

int stacktop(Stack st) {
    if(st.top == -1) {
        return -1;
    }
    else {
        return st.s[st.top];
    }
} 

int isEmpty(Stack st) {
    if(st.top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

void display(struct Stack st) {
    if(st.top == -1) {
        cout << "stack is empty" << endl;
    }
    else {
        for(int i = st.top; i >=0; i--) {
            cout << st.s[i] << endl;
        }
    }
}



int main() {
    
struct Stack dt;
dt.size = 5;
dt.s = new int[dt.size];
dt.top = -1;
push(&dt, 9);
push(&dt, 8);
push(&dt, 7);
push(&dt, 6);

display(dt);
cout << endl;
cout << peak(dt, 4);


    return 0;
}
