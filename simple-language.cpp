#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

/*
 * Complete the maximumProgramValue function below.
 */
long maximumProgramValue(int n) {
    /*
     * Write your code here.
     */
    string t;
    long int y;
    long int x = 0;
    for (int i = 0; i < n; i++){
        cin >> t >> y;
        if (t == "add"){
            if (y >= 0){
                x += y;
            }
        }
        else if (t == "set"){
            if (y >= x){
                x = y;
            }
        }
    }
    return x;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = maximumProgramValue(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
