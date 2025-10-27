#include <iostream>

using namespace std;

int add(int a, int b);

void say(string s);

int main()
{
    cout << "Greetings...\n";
    cout << "Hello World!\n";   
    
    say("Hi");
    
    return 0;
}

void say(string s)
{
    cout << s << endl;
}

int add(int a, int b)
{
    return a + b;
}