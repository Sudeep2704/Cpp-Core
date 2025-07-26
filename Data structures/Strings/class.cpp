#include <iostream>     
using namespace std;

//count of elements in the string
int count(char a[]) {
    int rep = 0;
    for(int i = 0; a[i] != '\0'; i++){
        rep++;
    }
    return rep;
 }

//Lowercase and uppercase
void Lowercase(char a[]) {
        for(int i = 0; a[i] != '\0'; i++) {
            a[i] = a[i] + 32;
    }
    cout << a << endl;
}

void Uppercase(char a[]) {
    for(int i = 0; a[i] != '\0'; i++) {
            a[i] = a[i] - 32;
    }
        cout << a << endl;
}

//compare of the strings
void CompareStrings(char a[], char b[]) {
    for(int i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
        if(a[i] != b[i]) {
            cout << "Strings are Not Equal" << endl;
            return;
        }

    }
    cout << "Strings are Equal" << endl;
}

//palindrome of the string 
void Palindrome(char a[]) {
int j = 0;
char s[count(a)];
for(int i = count(a) - 1; i>=0; i--, j++) {
    s[j] = a[i];
}
for(int i = 0; a[i] != '\0' && s[i] != '\0'; i++) {
        if(a[i] != s[i]) {
            cout << "Not Palindrome" << endl;
            return;
        }

    }
    cout << "It is palindrome" << endl;
}


//display of the the string
void display(char a[]) {
    for(int i = 0; a[i] != '\0'; i++) {
        cout << a[i];
    }
}


int main() {

    
    char s[] = "hello";
    
    
    return 0;
}
