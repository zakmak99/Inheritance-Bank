

#include <iostream>
#include <fstream>
#include "Helper.h"
#include "BaseAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "CreditAccount.h"

int main()
{
    std::ifstream fin;
    fin.open("balances.txt");
    CheckingAccount* c = new CheckingAccount;
    SavingsAccount* s = new SavingsAccount;
    CreditAccount* cr = new CreditAccount;
    if (fin.is_open())
    {
        float checking;
        float saving;
        float credit;
        fin >> checking;
        fin >> saving;
        fin >> credit;
        fin.close();
        c->Deposit(checking);
        s->Deposit(saving);
        cr->Deposit(credit);
    }
    else
    {
        c->Deposit(1576.89);
        s->Deposit(2500.00);
        cr->Deposit(10000.00);
    }

    bool menuLoop = true;
    while (menuLoop)
    {
        system("cls");
        int choice;
        std::cout << "Select transaction type: \n1.) Withdraw \n2.) Deposit \n3.) Exit" << std::endl;
        choice = IntCheck();
        switch (choice)
        {
        case 1:
        {
            system("cls");
            int wihtdrawChoice;
            std::cout << "Select an accout to withdraw from: \n1.) Checkings $" << c->GetBalance() << std::endl;
            std::cout << "2.) Savings $" << s->GetBalance() << std::endl; 
            std::cout << "3.) Credit $" << cr->GetBalance() << std::endl;
            wihtdrawChoice = IntCheck();
            switch (wihtdrawChoice)
            {
            case 1:
            {
                float withdaw;
                float oldBalance = c->GetBalance();
                std::cout << "How much to withdraw: ";
                withdaw = FloatCheck();
                c->Withdraw(withdaw);
                float newBalance = c->GetBalance();
                float balanceDif = oldBalance - newBalance;
                std::cout << '$' << balanceDif << " withdrawn from checkings account!" << std::endl;
                system("\pause");
                break;
            }
            case 2:
            {
                float withdaw;
                float oldBalance = s->GetBalance();
                std::cout << "How much to withdraw: ";
                withdaw = FloatCheck();
                s->Withdraw(withdaw);
                float newBalance = s->GetBalance();
                float balanceDif = oldBalance - newBalance;
                std::cout << '$' << balanceDif << " withdrawn from savings account!" << std::endl;
                system("\pause");
                break;
            }
            case 3:
            {
                float withdaw;
                float oldBalance = cr->GetBalance();
                std::cout << "How much to withdraw: ";
                withdaw = FloatCheck();
                cr->Withdraw(withdaw);
                float newBalance = cr->GetBalance();
                float balanceDif = oldBalance - newBalance;
                std::cout << '$' << balanceDif << " withdrawn from credit account!" << std::endl;
                system("\pause");
                break;
            }
            }
            break;
        }
        case 2:
        {
            system("cls");
            int depositChoice;
            std::cout << "Select an accout to deposit into: \n1.) Checkings " << c->GetBalance() << std::endl; 
            std::cout << "2.) Savings $" << s->GetBalance() << std::endl;
            std::cout << "3.) Credit $" << cr->GetBalance() << std::endl;
            depositChoice = IntCheck();
            switch (depositChoice)
            {
            case 1:
            {
                float deposit;
                std::cout << "How much to deposit: ";
                deposit = FloatCheck();
                c->Deposit(deposit);
                std::cout << '$' << deposit << " deposited into checking account!" << std::endl;
                system("\pause");
                break;
            }
            case 2:
            {
                float deposit;
                std::cout << "How much to deposit: ";
                deposit = FloatCheck();
                s->Deposit(deposit);
                std::cout << '$' << deposit << " deposited into savings account!" << std::endl;
                system("\pause");
                break;
            }
            case 3:
            {
                float deposit;
                std::cout << "How much to deposit: ";
                deposit = FloatCheck();
                cr->Deposit(deposit);
                std::cout << '$' << deposit << " deposited into credit account!" << std::endl;
                system("\pause");
                break;
            }
            }
            break;
        }
        case 3:
        {
            menuLoop = false;
            break;
        }
        }
        
    }
    std::ofstream fout;
    fout.open("balances.txt");
    if (fout.is_open())
    {
        fout.clear();
        fout << c->GetBalance() << '\n';
        fout << s->GetBalance() << '\n';
        fout << cr->GetBalance() << '\n';
        fout.close();
    }
    delete c;
    delete s;
    delete cr;
  
}

