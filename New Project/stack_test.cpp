#define PRINT(a) cout<< a 

#include "stack_test.h" 

#include <stack>
#include <iostream>

using namespace std;
void stack_test(void){
    
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    int top = s.top();
    PRINT("TOP: ");
    PRINT(top);
    PRINT("\n");
    
    s.top() = 10;
    top = s.top();
    
    PRINT("TOP: ");
    PRINT(top);
    PRINT("\n");
    
    
    PRINT("IS EMPTY: ");
    PRINT(s.empty());
    PRINT("\n");
    
    
    PRINT("SIZE: ");
    PRINT(s.size());
    PRINT("\n");
    
    
    s.pop();

    PRINT("LAST ELEM: ");
    PRINT(s.top());
    PRINT("\n");
    
    while(!s.empty()){
        s.pop();
    }
    
    PRINT("IS EMPTY: ");
    PRINT(s.empty());
    PRINT("\n");
    
    
};
