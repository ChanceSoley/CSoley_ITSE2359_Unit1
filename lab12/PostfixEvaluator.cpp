#include <iostream>
#include <stack>
#include <sstream>
#include <stdexcept>
using namespace std;

// Function to evaluate a postfix expression
int evaluatePostfix(const string& expression) {
    stack<int> s;
    stringstream ss(expression);
    string token;

    // Loop to read each token from the expression
    while (ss >> token) {
        if (isdigit(token[0])) {
            // Convert the token to an integer and push onto the stack
            s.push(token[0] - '0'); // Converts char to int
        } else {
            // Check if there are at least two operands on the stack
            if (s.size() < 2) {
                throw runtime_error("Invalid expression: insufficient operands.");
            }

            // Pop the top two values from the stack
            int operand2 = s.top(); s.pop();
            int operand1 = s.top(); s.pop();
            int result;

            // Perform the operation based on the token (operator)
            switch (token[0]) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    if (operand2 == 0) {
                        throw runtime_error("Division by zero.");
                    }
                    result = operand1 / operand2;
                    break;
                default:
                    throw runtime_error("Invalid character: unsupported operator.");
            }

            // Push the result back onto the stack
            s.push(result);
        }
    }

    // After processing the expression, the stack should have exactly one element
    if (s.size() != 1) {
        throw runtime_error("Invalid expression: too many operators.");
    }

    // Return the result
    return s.top();
}

int main() {
    string expression;

    cout << "Enter a postfix expression: ";
    getline(cin, expression);

    try {
        int result = evaluatePostfix(expression);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
