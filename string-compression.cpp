#include<iostream>
#include<string>
using namespace std;

int compress(vector<char> &chars){
    int idx = 0;
    int n = chars.size();
    for(int i = 0; i < n ; i++){
        int count = 0;
        char ch = chars[i];
        while(i<n && chars[i]==ch){
            count++;
            i++;
        }
        i--;
            chars[idx++] = ch;
        
        if(count>1){
            string str = to_string(count);
            for(char dig : str){
                chars[idx++] = dig;
            }
        }
    
    }
    chars.resize(idx);
    return idx;

}
int main() {
    vector<char> chars = {'a','a','b','b','c','c','c'};

    int newLength = compress(chars);

   
    cout << "Compressed string: ";

    for (char c : chars) {
        cout << c << " ";
    }

    return 0;
}