#include <iostream>
#include <string>
using namespace std;

//        A
//       AMA
//      AMIMA
//     AMITIMA
//    AMITKTIMA
//   AMITKUKTIMA
//  AMITKUMUKTIMA
// AMITKUMAMUKTIMA
//AMITKUMARAMUKTIMA

int main() {
    string input;
    cout << "Enter your input"<< endl;
    getline(cin, input);
    size_t len {input.size()};
    
    for(int i{0}; i < len; i++){
        for(int j {len-i-1}; j>0; j--){
            cout << " ";
        }
        
        for(int k {0}; k <= i; k++){
            cout << input[k];
        }
        
        for(int l {i-1}; l>=0; l--){
            cout<< input[l];
        }
        cout << endl;
    }
    
    return 0;
}