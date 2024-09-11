/*
 ###########################################################################################

                        USER INPUT
                        ---------
    
    -> We will use cin to get user input.

    -> cin is a predefined variable that reads data from the keyboard with the extraction
       orperator (>>).

    -> Example given below:- 
                            1.string name;
                              cout << "Enter you name: ";
                              cin >> name;
   
*/

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter two Numbers a and b : ";
    cin >> a >> b;

    cout << "Value of a is: " << a << "\nValue of b is: " << b;
    return 0;
}

