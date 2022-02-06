//
//  main.cpp
//  ww
//
//  Created by Shohzod on 25/12/21.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    double num1, num2, result;
    
    cout << "1-sonni kiriting: ";   cin >> num1;
    cout << "2-sonni kiriting: ";   cin >> num2;
    
    cout << "Amalni kiriting;--->   ";
    
    cout << "(  +  -   *   /  )\n";
    
    char amal;
    
    cin >> amal;
    
    switch(amal)
        
    {
        case '+':
            
            result = num1 + num2;
            break;
            
        case '-':
            result = num1 - num2;
            break;
        
        case '*':
            result = num1 * num2;
            break;
            
        case '/':
            result = num1 /num2;
            break;
            
        default:
            cout << "Bunday amal kalkulyatorda yoq!!";
            
            
    }
    cout << num1 << " "<< amal << " "<< num2 << " = " << result << " ga teng" << endl;
   

    return 0;
}
