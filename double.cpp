#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
using namespace std;

bool is_double(string &input) {
    size_t len = input.size();
    if( len % 2 == 1 )
        return false;
    int i;
    int mid = len/2;
    for( i = 0; i < mid; i++ ) {
        if( input[i] != input[i+mid] )
            return false;
    }
    return true;
}

bool is_sub_seq(string &longer, string &shorter) {
    int i, j;
    bool mismatch = false;
    for( i = 0, j = 0; i < longer.size() && j < shorter.size(); ) {
        if( longer[i] != shorter[j] ) {
            if( mismatch ) {
                return false;
            }
            else {
                mismatch = true;
                i++; 
            }
        }
        else
        {
            i++;
            j++;
        }
    }
    return true;
}

bool can_be_double(string &input) {
    size_t len = input.size();
    if( len < 2 )
        return false;
    if( len % 2 == 0 )
        return is_double(input);
    else
    {
        string longer = input.substr(0, len/2+1);
        string shorter = input.substr(len/2+1, len/2);
        if( is_sub_seq(longer, shorter) )
            return true;
        shorter = input.substr(0, len/2);
        longer = input.substr(len/2, len/2+1);
        return is_sub_seq(longer,shorter);
    }
}

int main() {
	cin.sync_with_stdio(false);
	int test;
	cin >> test;
	while(test--) {
	    string input;
	    cin >> input;
	    if( can_be_double(input) ) 
	        cout << "YES IT IS DOUBLE STRING" << endl;
	    else
	        cout << "NO IT IS NOT A DOUBLE STRING" << endl;
	}
	return 0;
}
