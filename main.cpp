/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

class CustomerAccount
{
    public:
        int GetAccountBalance()
        {
            return AccountBalance;
        }
        
    protected:
        int AccountBalance = 50;
};

class OfficerAccount : public CustomerAccount
{
    public:
        float SetAccountCredit()
        {
            return AccountBalance * 0.01;
        }
};


using namespace std;

int main()
{
    cout<<"Hello World"<<"\n";
    
    CustomerAccount Account1;
    OfficerAccount OfficerAccount1;
    
    cout<<"Account1 balance: "<< Account1.GetAccountBalance() << "\n";
    cout<<"OfficerAccount1 balance: " << OfficerAccount1.GetAccountBalance() << "\n";
    cout<<"OfficerAccount1 credit: " << OfficerAccount1.SetAccountCredit() << "\n";

    return 0;
}




