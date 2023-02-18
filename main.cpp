#include <iostream>
#include <cmath>

using namespace std;

// You can comment using this.

int main()
{

    // Creating variables is same as C
    // Types of Data Types:
    // Character: char
    char gender = 'F';
    // String: string
    string name = "Allam";
    // Integer: int
    int age = 20;
    // Floating number: float
    double prob = 0.5;
    // Boolean Value: bool
    bool isMale = false;

    // Printing is actually different. We use cout and endl instead of printf in C.
    cout << "The name of the character is "<< name <<" and it has "<<name.length()<<" characters" << endl;
    cout << "The age of my character is: " << age << endl;
    cout << "The probability that my character comes to the prom is " << prob << endl;
    cout << "The gender of the character is: " << gender << endl;
    // Printing an empty line / New line can be done by this.
    cout << endl;


    // Lets now start working with strings.
    // Strings are basically plain text. They can be created by using open and closed inverted commas: "".
    // We can also remove the endl at the end of the cout statements and instead of it we could ust "\n" to create a new line.

    string description = "This is a trial without the endl statement";
    cout << description <<"\n";
    cout << "And it works fine!" << endl;
    cout << "We can also count the number of values in the string using description.length().\n It will output: "<< description.length() << endl;

    // String slicing and Indexing will be same as C and Python. It starts from 0 and ends at string.length() - 1.
    cout << name[0]<<endl;

    // ONE THING INTERESTIN GIN CPP IS THAT STRINGS ARE NOT IMMUTABLE IN CPP. THEY ARE MUTABLE. SO THIS WORKS:
    name[0] = 'B';
    name[1] = 'e';
    cout << name << endl;
    cout << endl;
    // As in python we would use an if statement to check if a character is present in a string or not, we can use a function called string.find(K) to find a character K.
    cout << name.find("am") << endl;

    // Instead of string slicing as in python, we have to use a fuinction called string.substr(a, n). this will give n characters from the index position a.
    cout << name.substr(2, 3);

    // fmax function is used to find the maximum number between 2 numbers.
    cout << fmax(2, 4);

    return 0;
}
