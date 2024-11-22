#include <bits/stdc++.h>
using namespace std;



int main()
{
    while (!cin.eof()){
        string line, output;
        getline(cin, line);

        for (char c : line) {
            if (c != ' ') {
                output += c;
            }
        }

        sort(output.begin(), output.end());
        
        cout << output << endl;
    }

    return 0;
}
