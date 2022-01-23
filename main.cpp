#include <iostream>
using namespace::std;

int main(){

    int num1, num2;
    char operand;

    cout << "Enter a number:";
    cin >> num1;
    
    cout << "Enter an operator:" << std::endl;
    cin >> operand;

    cout << "Enter next operand:" << std::endl;
    cin >> num2;

    switch(operand){
        case '+':
            cout << "Result: " << num1 + num2;
            break;
        
        case '-':
            cout << "Result: " << num1 - num2;
            break;
        
        case '*':
            cout << "Result: " << num1 * num2;
            break;
        
        case '/':
            cout << "Result: " << num1 / num2;
            break;
    }
    
    return 0;   
}