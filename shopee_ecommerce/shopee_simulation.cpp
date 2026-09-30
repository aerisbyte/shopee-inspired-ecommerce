#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    cout << fixed << setprecision(2);

    while (true) {
        int service;

        cout << "\nSHOPEE MALAYSIA\n";
        cout << "1. Shopee Marketplace\n";
        cout << "2. ShopeeFood\n";
        cout << "3. Shopee Supermarket\n";
        cout << "0. Exit\n";
        cout << "Choose a service: ";
        cin >> service;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a number.\n";
            continue;
        }

        if (service == 0) {
            cout << "Goodbye!\n";
            break;
        }

        if (service < 1 || service > 3) {
            cout << "Please choose your service (eg. 1,2 or 3)\n";
            continue;
        }






        string serviceName;
        string product;
        string restaurant;
        string destination;
        double price = 0;
        double deliveryFee = 0;
        int choice;
        int quantity;




        //Shopee Marketplace

        if (service == 1) {
            serviceName = "Shopee Marketplace";

            cout << "\nSHOPEE MARKETPLACE\n";
            cout << "1. Samsung Galaxy Z Flip8 - RM5,199.00\n";
            cout << "2. Logitech Wireless Mouse - RM45.00\n";
            cout << "3. CERAVE Moisturizing Cream 454g - RM117.00\n";
            cout << "0. Back\n";
            cout << "Choose an item: ";
            cin >> choice;

            if (cin.fail() || choice < 0 || choice > 3) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid item choice.\n";
                continue;
            }
            if (choice == 0) {
                continue;
            }

            switch (choice) {
                case 1:
                    product = "Samsung Galaxy Z Flip8";
                    price = 5199.00;
                    break;
                case 2:
                    product = "Logitech Wireless Mouse";
                    price = 45.00;
                    break;
                case 3:
                    product = "CERAVE Moisturizing Cream 454g";
                    price = 117.00;
                    break;
            }

            cout << "\n1. Peninsular Malaysia - RM8.00\n";
            cout << "2. East Malaysia - RM15.00\n";
            cout << "Choose a shipping region: ";
            int region;
            cin >> region;

            //error checking for regional option
            if (cin.fail() || region < 1 || region > 2) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid shipping region.\n";
                continue;
            }

            if (region == 1) {
                deliveryFee = 8.00;
                destination = "Peninsular Malaysia";
            } else {
                deliveryFee = 15.00;
                destination = "East Malaysia";
            }





        //shopeefood

        } else if (service == 2) {
            serviceName = "ShopeeFood";

            int restaurantChoice;

            cout << "\nSHOPEEFOOD RESTAURANTS\n";
            cout << "1. Aeris Bakery\n";
            cout << "2. Leah's Masakan Kampung\n";
            cout << "0. Back\n";
            cout << "Choose a restaurant: ";
            cin >> restaurantChoice;

            if (cin.fail() || restaurantChoice < 0 || restaurantChoice > 2) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid restaurant choice.\n";
                continue;
            }

            if (restaurantChoice == 0) {
                continue;
            }

            if (restaurantChoice == 1) {
                restaurant = "Aeris Bakery";

                cout << "\nAERIS BAKERY MENU\n";
                cout << "1. Rebecca's Signature Waffle - RM23.00\n";
                cout << "2. Orange Americano - RM10.00\n";
                cout << "3. Mocha Frappe - RM15.90\n";
            } else {
                restaurant = "Leah's Masakan Kampung";

                cout << "\nMenu Masakan Kampung\n";
                cout << "1. Daging Masak Kurma Kenduri - RM14.00\n";
                cout << "2. Nasi Goreng Cili Kering - RM12.00\n";
                cout << "3. Rendang Pucuk Ubi Mak Long - RM9.00\n";
            }

            cout << "0. Back\n";
            cout << "Choose a food item: ";
            cin >> choice;

            if (cin.fail() || choice < 0 || choice > 3) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid food choice.\n";
                continue;
            }

            if (choice == 0) {
                continue;
            }

            if (restaurantChoice == 1) {
                switch (choice) {
                    case 1:
                        product = "Rebecca's Signature Waffle";
                        price = 23.00;
                        break;
                    case 2:
                        product = "Orange Americano";
                        price = 10.00;
                        break;
                    case 3:
                        product = "Mocha Frappe";
                        price = 15.90;
                        break;
                }
            } else {
                switch (choice) {
                    case 1:
                        product = "Daging Masak Kurma Kenduri";
                        price = 14.00;
                        break;
                    case 2:
                        product = "Nasi Goreng Cili Kering";
                        price = 12.00;
                        break;
                    case 3:
                        product = "Rendang Pucuk Ubi Mak Long";
                        price = 9.00;
                        break;
                }
            }

            deliveryFee = 5.00;
            destination = "Local rider delivery";
            } 
                
            else {

                
                    serviceName = "Shopee Supermarket";

                    cout << "\nSHOPEE SUPERMARKET\n";
                    cout << "1. Rice (5 kg) - RM32.00\n";
                    cout << "2. UHT Milk (1 litre) - RM7.50\n";
                    cout << "3. Biscuits - RM5.50\n";
                    cout << "0. Back\n";
                    cout << "Choose a grocery item: ";
                    cin >> choice;


                    //error checking for groceries choices
                    if (cin.fail() || choice < 0 || choice > 3) {
                        cin.clear();
                        cin.ignore(1000, '\n');
                        cout << "Invalid grocery choice.\n";
                        continue;
                    }
                    if (choice == 0) {
                        continue;
                    }

                    switch (choice) {
                        case 1:
                            product = "Rice (5 kg)";
                            price = 32.00;
                            break;
                        case 2:
                            product = "UHT Milk (1 litre)";
                            price = 7.50;
                            break;
                        case 3:
                            product = "Biscuits";
                            price = 5.50;
                            break;
                    }

                    cout << "\n1. Peninsular Malaysia - RM8.00\n";
                    cout << "2. East Malaysia - RM15.00\n";
                    cout << "Choose a shipping region: ";
                    int region;
                    cin >> region;

                    if (cin.fail() || region < 1 || region > 2) {
                        cin.clear();
                        cin.ignore(1000, '\n');
                        cout << "Invalid shipping region.\n";
                        continue;
                    }

                    if (region == 1) {
                        deliveryFee = 8.00;
                        destination = "Peninsular Malaysia";
                    } else {
                        deliveryFee = 15.00;
                        destination = "East Malaysia";
                    }
                }

                cout << "Enter quantity (1-99): ";
                cin >> quantity;


                //error checking for quantity limit
                if (cin.fail() || quantity < 1 || quantity > 99) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid quantity.\n";
                    continue;
                }

                double subtotal = price * quantity;
                double total = subtotal + deliveryFee;

                int payment;
                cout << "\nPAYMENT METHOD\n";
                cout << "1. Shopee PayLater\n";
                cout << "2. Online Banking\n";
                cout << "3. Credit / Debit Card\n";
                cout << "Choose a payment method: ";
                cin >> payment;

                if (cin.fail() || payment < 1 || payment > 3) {
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << "Invalid payment method.\n";
                    continue;
                }

                string paymentName;
                string paymentPlan;
                double monthlyPayment = 0;

                if (payment == 1) {
                    int plan;

                    cout << "\nSHOPEE PAYLATER PLAN\n";
                    cout << "1. Pay next month\n";
                    cout << "2. Pay in 3 months\n";
                    cout << "3. Pay in 6 months\n";
                    cout << "Choose a plan: ";
                    cin >> plan;


                    //error checking for pay later plan
                    if (cin.fail() || plan < 1 || plan > 3) {
                        cin.clear();
                        cin.ignore(1000, '\n');
                        cout << "Invalid PayLater plan.\n";
                        continue;
                    }

                    paymentName = "Shopee PayLater";

                    if (plan == 1) {
                        paymentPlan = "Pay next month";
                        monthlyPayment = total;
                    } else if (plan == 2) {
                        paymentPlan = "3-month installment";
                        monthlyPayment = total / 3;
                    } else {
                        paymentPlan = "6-month installment";
                        monthlyPayment = total / 6;
                    }
                } else if (payment == 2) {
                    paymentName = "Online Banking";
                } else {
                    paymentName = "Credit / Debit Card";
                }

                cout << "\nORDER SUMMARY\n";
                cout << "Service: " << serviceName << '\n';
                if (service == 2) {
                    cout << "Restaurant: " << restaurant << '\n';
                }
                cout << "Product: " << product << '\n';
                cout << "Quantity: " << quantity << '\n';
                cout << "Subtotal: RM" << subtotal << '\n';
                cout << "Delivery: " << destination << '\n';
                cout << "Delivery fee: RM" << deliveryFee << '\n';
                cout << "Total: RM" << total << '\n';
                cout << "Payment method: " << paymentName << '\n';

                if (payment == 1) {
                    cout << "Plan: " << paymentPlan << '\n';
                    cout << "Monthly payment: RM" << monthlyPayment << '\n';
                }

                cout << "Order complete.\n";
    }

    return 0;
}
