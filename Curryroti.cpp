 #include <vector> 
#include <iostream>
#include <string>

using namespace std;

int main() {
        vector<char> v; 
        vector<int> v1 ={10, 14, 32, 64, 16};

        v.push_back('p');
        v1.pop_back();

        v.push_back('i');
        v1.pop_back();

        for (int i = 0; i <4; i++)
                 v1.push_back(0);

        for (int i = 0; i < v1.size(); i++)
                 cout << v1[i] << " ";

        string str1 = "hello";
        string str2 = str1 + "world";

        // printing
        cout << "str1 = " << str1[3] << endl;
        cout << "the 4th character is " << str1[3] << endl;

        //comparison operators
        if (str1 == "hello")
                cout << "hi there" << endl;

        if (str2 != "world")
                cout << "out of this world" << endl;

         // appending to a string
         str2 += "ly one"; // or str2 = str2 + "ly one!!"

         for (char ch: str1) // For each character in the string str1
                 cout << ch;

         return 0;}
