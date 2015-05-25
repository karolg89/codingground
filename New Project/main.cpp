#define PRINT(a) cout<< a 

#include <iostream>
#include <stack>

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
    
    
};

int main()
{
    
    stack_test();
   
   return 0;
}

