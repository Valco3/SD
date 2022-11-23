#include <iostream>
#include <string>
#include <stack>

void textEditor(std::string input){
    std::string result = input;
    std::stack<int> operations;
    std::stack<std::string> text;
    while(true){
        std::string buffer;
        std::getline(std::cin, buffer);
        if(buffer[0] == '5'){
            break;
        }
        if(buffer[0] == '1'){
            std::string textToAppend = buffer.substr(2);
            // std::cout << textToAppend;
            // std::cout << "append" << std::endl;
            result.append(textToAppend);
            operations.push(1);
            text.push(textToAppend);
            std::cout << result << std::endl;
            continue;
        }
        if(buffer[0] == '2'){
            // std::cout << "delete" << std::endl;
            std::string elementsToDelete = buffer.substr(2);
            operations.push(2);
            text.push(result);
            std::string afterDeletion = result.substr(0, result.length() - std::stoi(elementsToDelete));
            result = afterDeletion;
            std::cout << result << std::endl;
            continue;
        }
        if(buffer[0] == '3'){
            // std::cout << "print" << std::endl;
            std::cout << result[std::atoi(&buffer[2]) - 1] << std::endl;
            continue;            
        }
        if(buffer[0] == '4'){
            // std::cout << "undo" << std::endl;
            if(operations.top() == 1){
                std::string elementsToDelete = text.top();
                text.pop();
                operations.pop();
                std::string afterDeletion = result.substr(0, result.length() - elementsToDelete.length());
                result = afterDeletion;
                std::cout << result << std::endl;
                continue;
            }
            if(operations.top() == 2){
                std::string newResult = text.top();
                text.pop();
                operations.pop();
                result = newResult;
                std::cout << result << std::endl;
                continue;
            }
            
        }
    }
}

int main(){
    textEditor("");
}