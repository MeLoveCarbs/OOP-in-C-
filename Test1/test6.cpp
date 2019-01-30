// Do not use cin<< and getline(cin, X) together, read the comment below for explanation. If there's no way around, flush the stream buffer before using getline() with fflush(stdin);
#include <iostream>
#include <string>

using namespace std;

int main(void) {
   string s1 {};
    s1 = "The secret word is Boo";
    string word {};
    
    getline(cin, word); // cin stops taking in input after whitespace or \n. If getline is used right after, it will skip getline input immediately since the stream buffer has the \n and is taken in by getline(), flush to reset the stream.
    
    size_t position {s1.find(word)};
    
    if (position != string::npos) 
        cout << "Found at " << word << endl;
    else 
        cout << "Not found" << endl;

    return 0;
}