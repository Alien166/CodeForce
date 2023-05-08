#include <iostream>
#include <string>

using namespace std;
bool is_plindrome( const string &s)
{
    int n=s.size();
    for(int i=0;i<n/2;++i)
    {
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }
    return true;
}
int longest_non_palindrome_subseq( const string &s)
{
    int n=s.size();
    for(int len=n-1;len>=1;--len)
    {
        for(int i=0;i+len-1<n;++i)
        {
            string seq=s.substr(i,len);
            if(!is_plindrome(seq)){
                return len;
            }

        }
    }
    return  -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << longest_non_palindrome_subseq(s) << endl;
    }
    return 0;
}
