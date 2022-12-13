#include<iostream>
#include<string>
#include<fstream>
#include<map>
#include<vector>
using namespace std;

class Account
{
    private:
    string first_name;
    string last_name;
    float amount;
    int account_number;
    static int count_acc_no;

    public:
    Account();
    Account(string fn, string ln, float amt);
    int getAccountNo(){return account_number;}
    string getFirstname(){return first_name;}
    string getLastName(){return last_name;}
    float getBalance(){return amount;}

    void Deposit(float amt);
    void Withdraw(float amt);
    static void setLastAccountNo(int acc_no);
    static int getLastAccountNo();
    friend ofstream & operator<<(ofstream &ofs, Account &acc);
    friend ifstream & operator>>(ifstream &ifs, Account &acc);
    friend ostream & operator<<(ostream &ofs, Account &acc);
    
};
int Account::count_acc_no = 0;

class Bank
{
    private:
    map<int,Account> accounts;

    public:
    Bank();
    Account OpenAccount(string fname,string lname,float balance);
    Account BalanceEnquiry(int accountNumber);
    Account Deposit(int accountNumber,float amount);
    Account Withdraw(int accountNumber,float amount);
    void CloseAccount(int accountNumber);
    void ShowAllAccounts();
    ~Bank();
};


int main()
{
    Account acc;
    Bank banq;
    int choice;
    string fname, lname;
    int accountNo;
    float amount;
    float balance;

    do
    {
        cout<<"Welcome to Banking Banq Online :"<<endl;
        cout<<"\n\tSelect one option below ";
        cout<<"\n\t1 Open an Account";
        cout<<"\n\t2 Balance Enquiry";
        cout<<"\n\t3 Deposit";
        cout<<"\n\t4 Withdrawal";
        cout<<"\n\t5 Close an Account";
        cout<<"\n\t6 Show All Accounts";
        cout<<"\n\t7 Quit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch (choice)
        {
            case 1:
            cout<<"First Name : ";
            cin>>fname;
            cout<<"Last Name : ";
            cin>>lname;
            cout<<"Intial Amount : ";
            cin>>amount;
            acc = banq.OpenAccount(fname,lname,amount);
            cout<<endl<<"Congragulation Account is created"<<endl;
            cout<<acc;
            break;

            case 2:
            cout<<"Enter Account Number : ";
            cin>>accountNo;
            acc = banq.BalanceEnquiry(accountNo);
            cout<<endl<<"Your Account details "<<endl;
            cout<<acc;
            break;

            case 3:
            cout<<"Enter Account Number : ";
            cin>>accountNo;
            cout<<"Enter Amount to Deposit : ";
            cin>>amount;
            acc = banq.Deposit(accountNo,amount);
            cout<<endl<<"Amount is deposited "<<endl;
            cout<<acc;
            break;

            case 4:
            cout<<"Enter Account Number : ";
            cin>>accountNo;
            cout<<"Enter Amount to Withdraw : ";
            cin>>amount;
            acc = banq.Withdraw(accountNo,amount);
            cout<<endl<<"Amount withdrawn "<<endl;
            cout<<acc;
            break;

            case 5:
            cout<<"Enter Account Number : ";
            cin>>accountNo;
            banq.CloseAccount(accountNo);
            cout<<endl<<"Account is closed "<<endl;
            cout<<acc;
            break;

            case 6:
            banq.ShowAllAccounts();
            break;

            case 7:
            cout<<"Thankyou! for visting Banq Online";
            break;

            default:
            cout<<"Enter your choice";
            exit(0);
        }
    } while(choice != 7);
    
    return 0;
}

Account::Account(string fname, string lname, float amt)
{
    count_acc_no++;
    account_number = count_acc_no;
    first_name = fname;
    last_name = lname;
    amount = amt;
}

void Account::Deposit(float amt)
{
    amount+=amt;
}

void Account::Withdraw(float amt)
{
    amount-=amt;
}

void Account::setLastAccountNo(int acc_no)
{
    count_acc_no = acc_no;
}

int Account::getLastAccountNo()
{
    return count_acc_no;
}

ofstream & operator<<(ofstream &ofs, Account &acc)
{
    ofs<<acc.account_number<<endl;
    ofs<<acc.first_name<<endl;
    ofs<<acc.last_name<<endl;
    ofs<<acc.amount<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs, Account &acc)
{
    ifs>>acc.account_number;
    ifs>>acc.first_name;
    ifs>>acc.last_name;
    ifs>>acc.amount;
    return ifs;
}

ostream & operator<<(ostream &os, Account &acc)
{
    os<<"First Name : "<<acc.getFirstname()<<endl;
    os<<"Last Name  : "<<acc.getLastName()<<endl;
    os<<"Account Number : "<<acc.getAccountNo()<<endl;
    os<<"Balance : "<<acc.getBalance()<<endl;
    return os;
}

Bank::Bank()
{
    Account account;
    ifstream infile;
    infile.open("Bank.data");
    if(!infile)
    {
        cout<<"file Not Found ! "<<endl;
    }
    // Check end of file
    do
    {
        infile>>account;
        accounts.insert(pair<int,Account>(account.getAccountNo(),account));
    }while(infile.eof());
    
    Account::setLastAccountNo(account.getAccountNo());

    infile.close();

}

Account Bank::OpenAccount(string fname, string lname, float amt)
{
    ofstream outfile;
    Account account(fname,lname,amt);
    accounts.insert(pair<int,Account>(account.getAccountNo(),account));

    outfile.open("Bank.data");

    map<int,Account>::iterator itr;
    for(itr=accounts.begin();itr!=accounts.end();itr++)
    {
        outfile<<itr->second;
    }
    outfile.close();
    return account;
}

Account Bank::BalanceEnquiry(int acc_no)
{
    map<int,Account>::iterator itr = accounts.find(acc_no);
    return itr->second;
}

Account Bank::Deposit(int acc_no, float amt)
{
    map<int,Account>::iterator itr = accounts.find(acc_no);
    itr->second.Deposit(amt);
    return itr->second;
}

Account Bank::Withdraw(int acc_no, float amt)
{
    map<int,Account>::iterator itr = accounts.find(acc_no);
    itr->second.Withdraw(amt);
    return itr->second;
}

void Bank::CloseAccount(int acc_no)
{
    map<int,Account>::iterator itr = accounts.find(acc_no);
    cout<<"Account is closed !"<<itr->second;
    accounts.erase(acc_no);
}

void Bank::ShowAllAccounts()
{
    map<int,Account>::iterator itr;
    for(itr=accounts.begin();itr!=accounts.end();itr++)
    {
        cout<<"Account "<<itr->first<<endl<<itr->second<<endl;
    }
}
Bank::~Bank()
{
    ofstream outfile;
    outfile.open("Bank.data");

    map<int,Account>::iterator itr;
    for(itr=accounts.begin();itr!=accounts.end();itr++)
    {
        outfile<<itr->second;
    }
    outfile.close();
}