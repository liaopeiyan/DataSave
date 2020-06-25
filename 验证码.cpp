#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main()
{
    string ResultNWord(int);
    int n;
    string checkWord;
    cin >> n;
    checkWord = ResultNWord(n);
    cout << checkWord << endl;
    return 0;
}

string ResultNWord(int n) 
{
    string line = "123456789abcdefghijklmnopqrstuvwxyzkABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    string result;
    int i = 0, str_len;
    srand(time(0));
    str_len = line.length();
    while(i < n) {
       result = result + line[rand()%str_len];
       i++;
    }
    result += "\0";
    return result;
}