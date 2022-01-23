#include <iostream>
#include <string>
#include <sstream>

using namespace::std;

int main(){

    string value;
    int num1, num2;
    char operand;
    stringstream ss;

    cout << "Enter Equation:";

    while(true){

        cin >> value;
        
        if(value == "quit"){
            return 0;
        }

        ss << value;
        ss >> num1;

        cin >> operand >> num2;
        
        switch(operand){
            case '+':
                cout << "Result: " << num1 + num2 << std::endl;
                break;
            
            case '-':
                cout << "Result: " << num1 - num2 << std::endl;
                break;
            
            case '*':
                cout << "Result: " << num1 * num2 << std::endl;
                break;
            
            case '/':
                cout << "Result: " << num1 / num2 << std::endl;
                break;
        }
    }
    return 0;   
}