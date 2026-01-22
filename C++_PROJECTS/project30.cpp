#include <iostream>
#include <iomanip>

void showbalance(double balance);
double deposit();
double withdraw (double balance);

int main(){

    double balance = 0;
    int choice = 0;
    
    do{
        std::cout << "******************************\n";
        std::cout << "Enter your choice: \n"; 
        std::cout << "******************************\n";
        std::cout << "1. show balance\n";
        std::cout << "2. deposit money\n";
        std::cout << "3. withdraw money\n";
        std::cout << "4. exit\n";
        std::cin >> choice;
    
        std::cin.clear();
        fflush(stdin);


        switch(choice){
            case 1: showbalance(balance);
                break;
            case 2: balance += deposit();
                    showbalance(balance);
                break; 
            case 3: balance -= withdraw(balance);
                    showbalance(balance);
                break;
            case 4: std::cout << "Thanks for visiting!\n";
                break;
            default: std::cout << "Invalid choice\n";
                break;
        }
    
    }while (choice != 4);


    std::cout << "******************************\n";

    return 0;
}
void showbalance(double balance){
    std::cout << "Your balance is $ " << std::setprecision(2) << std::fixed << balance << '\n';
    std::cin >> balance;
}
double deposit(){

    double amount;

    std::cout << "Enter the amount to be deposited: \n";
    std::cin >> amount;

        if(amount > 0){
            return amount;   
        }else{
            std::cout << "Thats not a valid value.\n";
            return 0;
        }

}
double withdraw(double balance){

    double amount;

    std::cout << "Please put the value you wanna withdraw: \n";
    std::cin >> amount;


    if(amount > balance){
        std::cout << "isufficient founds.\n";
        return 0;
    }
    else {
        std::cout << "Thats not a valid value.\n";
        return 0;
    }


}
