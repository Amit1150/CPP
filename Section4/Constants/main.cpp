#include <iostream>
using namespace std;

int main() {
    const double price_per_room {30.0};
    const double sales_tax {0.06};
    const int estimate_expiry {30};
    
    int numer_of_rooms {3};
    
    cout << "Total estimate: $"<<(price_per_room * numer_of_rooms)  + (price_per_room * numer_of_rooms *sales_tax) << endl;
    return 0;
}