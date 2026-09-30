#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double subtotal = 100.00;
    double discount = 0.00;
    double shippingFee = 5.00;
    double finalTotal;
    char voucher;
    int voucherOption;

    cout << "------ CHECKOUT ------" << endl;

    cout << fixed << setprecision(2);
    cout << "Cart Subtotal: RM" << subtotal << endl;

    cout << "\nDo you want to use a voucher? (Y/N): ";
    cin >> voucher;

    if (voucher == 'Y' || voucher == 'y')
    {
        cout << "\n------ AVAILABLE VOUCHERS ------" << endl;
        cout << "1. SAVE10 - 10% OFF (Min. spend RM50)" << endl;
        cout << "2. SAVE30 - 30% OFF (Min. spend RM150)" << endl;
        cout << "3. FREESHIP - Free Shipping (Min. spend RM30)" << endl;

        cout << "\nSelect voucher" << endl;
        cin >> voucherOption;

        if (voucherOption == 1) {
           if (subtotal >= 50)
            {
                discount = subtotal * 0.10;
                cout << "SAVE10 applied successfully!" << endl;
            }
            else
            {
                cout << "This voucher cannot be applied" << endl;
                cout << "Minimum spending is RM50" << endl;
            } 
        }
        else if ( voucherOption == 2)
        {
            if (subtotal >= 150) {
                discount = subtotal * 0.20;
                cout << "SAVE30 applied succefully!" << endl;
            }
            else {
                cout << "This voucher cannot be applied" << endl;
                cout << "Minimum spending is RM150" << endl;
            }
        }
        else if (voucherOption == 3)
        {
            if (subtotal >= 30)
            {
                shippingFee = 0.00;
                cout << "FREESHIP applied succefully!" << endl;
            }
            else
            {
                cout << "This voucher cannot be applied" << endl;
                cout << "Minimum spending is RM30" << endl;
            }
        }
        else {
            cout << "Invalid voucher selection" << endl;
        } 
    }
        else {
            cout << "No voucher applied" << endl;
        }
  

    finalTotal = subtotal - discount + shippingFee;
    cout << "\n======= CHECKOUT SUMMARY ======" << endl;
    cout << "Subtotal       : RM" << subtotal << endl;
    cout << "Discount       : RM" << discount << endl;
    cout << "Shipping Fee   : RM" << shippingFee << endl;
    cout << "Final Total    : RM" << finalTotal << endl;
    cout << "===============================" << endl;

    return 0;
}