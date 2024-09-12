#include <iostream>
#include <string>
using namespace std;

class Product {

    float buying_price;
public:
    string product_name;
    float selling_price;

public:
    Product(string name, float sell_price, float buy_price) {
        product_name = name;
        selling_price = sell_price;
        buying_price = buy_price;
    }
    friend float calculateProfit(Product product, int quantity);
};

float calculateProfit(Product product, int quantity) {
    float T_selling_price = product.selling_price * quantity;
    float T_buying_price = product.buying_price * quantity;
    return  T_selling_price - T_buying_price;
}

int main() {
  
    Product product1("Watch", 100.00, 50.00);

    int quantity;
    cout << "Enter the quantit Of Watch you have purchased: ";
    cin >> quantity;

    float profit = calculateProfit(product1, quantity);
    cout << "Profit: " << profit <<" taka" <<endl;

    return 0;
}