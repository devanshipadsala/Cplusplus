// Assignment 5 part 3 for CS 1337.013
// Programmer: Devanshi Padsala
// Description: Assignment #5 part 3. This program outputs if the word/phrase/sentence given by a user is a palindrome or not

#include <iostream>
#include <string>
#include <locale>
using namespace std;
// function prototypes
string stripString(const string &inputString);
bool is_palindrome(const string &testString);
int main ()
{
    string inputLine, testString;
    // read in strings of text and check to see if they are palindromes
    do
    {
        cout << "Enter text. Just hit enter to stop processing\n";
        getline(cin, inputLine);
        testString = stripString(inputLine);
        if (testString != "")
        {
            cout << "New string is \"" << testString << "\"\n";
            cout << "The string is "
            << (is_palindrome(testString) ? "" : "not ")
            << "a palindrome\n";
        }
    } while (testString != "");
    cout << "\nThe program has ended.\n";
    return 0;
}
// Take a string and remove any characters that are
// not alphabetic or numeric. Covert any upper case
// letters to lower case.
string stripString(const string &inputString)
{
    // string to be returned
    string newString;
    // keep alpha-numeric characters only and
    // convert them to lower case.
    for (auto currentCharacter : inputString)
    {
        // if the character is alphabetic or numeric we want to keep it
        if (isalnum(currentCharacter))
        {
            // make sure it is lower case and add it to the new string
            newString += tolower(currentCharacter);
        }
    }
    // return back the new string that has only alpha-numeric
    return newString;
}
bool is_palindrome(const string &testString)
{
    //recursive way to find if the user input is palindrome
    if (testString.length() < 2) {
        return true;
    }
    else if (testString.at(0) != testString.at(testString.length() - 1)) {
        return false;
    }
    else {
        return is_palindrome(testString.substr(1, testString.length() - 2));
    }
}
