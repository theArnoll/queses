#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int wordCount;
    cin >> wordCount;
    string sentence[wordCount];
    short alphabet[26] = {0};

    for (int i = 0; i < wordCount; i++) {
        cin >> sentence[i];
    }
    
    for(unsigned re = 0; re < wordCount; re++) {
        for(int i = 0; i < sentence[re].length(); i++) {
            alphabet[sentence[re][i] - 'a']++;
        }
    }
    
    for(int i = 0; i < 26; i++) {
        cout << char(i + 'a') << " " << alphabet[i] << "\t";
        if(i != 0 && i % 5 == 4) cout << endl;
    }
    return 0;
}
