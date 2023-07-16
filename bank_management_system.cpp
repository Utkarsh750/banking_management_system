#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;

class bank{
    private:
           char name[100];
           char address[100];
           char y;
           int balance;
       public:
        void open_account();
        void deposite_money();
        void withdraw_money();
        void display_account();
};

void bank :: open_account()
{
    cout << "Enter your full name : ";
    cin.ignore();
    cin.getline(name , 100);

    cout << "\n Enter your address :";
    cin.ignore();
    cin.getline(address , 100);

    cout << "\n What type of account you want to open saving (s) or current (c) :";
    cin >> y;

    cout << "Enter amount for deposit : ";
    cin >> balance;

    cout << "\n Your account has been created \n";
}

void bank :: deposite_money()
{
    int a;
    cout << "Enter amount to be deposit : \n";
    cin >> a;
    balance += a;
    cout << "\n Total amount to be deposited : \t" << balance << endl;

}

void bank :: display_account()
{
    cout << "Your full name : \t" << name;
    cout << "\n Your address : \t" << address;
    cout << "\n type of account : you opened \t" << y;
    cout << "\n amount you deposited : \t" << balance;
}

void bank :: withdraw_money()
{
    float amount;
    cout << "\n withdraw : ";
    cout << "\n enter amount to withdraw : ";
    cin >> amount ;
    balance -= amount;
    cout << "remaining balance : " << balance ;
}
int main()
{
    int ch,x;
    bank obj;
    do {
    cout << "1) Open Account \n";
    cout << "2) Deposit Money \n";
    cout << "3) Withdraw Money \n";
    cout << "4) Display Account \n";
    cout << "5) Exit \n";

    cout << "Select option from above \n";
    cin >> ch;
    system("cls");

    switch(ch)
    {
        case 1 :
            cout << "1) open account \n";
            obj.open_account();
            break;

        case 2:
            cout << "2) deposit money \n";
            obj.deposite_money();
            break;

        case 3:
            cout << "3) withdraw money - \n";
            obj.withdraw_money();
            break;

        case 4 :
            cout << "4) Display account - \n";
            obj.display_account();
            break;

        case 5 :
            if(ch == 5)
            {
                exit(1);
            }

        default :
            cout << "this is not exit , try again \n";
    }
    cout << " \n want to select next option then press - y \n";
    cout << "want to exit ?  press - N ";

    x = getch();
    if(x == 'n' || x == 'N')
        exit(0);
    } while(x == 'y' || x == 'Y');

    getch();

    return 0;
}
