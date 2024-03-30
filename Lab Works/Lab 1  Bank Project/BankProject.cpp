#include <iostream>
using namespace std;

class bank
{
private:
    string name,nm;
    int accountno,age;
    int wamount,damount;
    double bal=0;
public:
    void open_account(int ACNO)
    {
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter your age:";
        cin>>age;
        accountno=ACNO;
        cout<<"Congratulations! You have opened an account. Your Account No: "<<accountno<<" and balance :"<<bal<<endl;
    }

    int delete_account(int an,int flag)
    {
        if(accountno==an)
        {
            flag=1;
            cout<<"Enter your name:";
            cin>>nm;
            if(name==nm)
            {
                if(bal != 0) cout<<"Your current balance :"<<bal<<". You can delete your account when balance is 0.\n";
                else
                {
                    cout<<"Dear "<<name<<", you have successfully deleted your account (Account no:"<<accountno<<").\n";
                    accountno=-1;
                }
            }
        }
        return flag;
    }

    int deposite(int an,int flag)
    {
        if(accountno==an)
        {
            flag=1;
            cout<<"Enter your name:";
            cin>>nm;
            if(name==nm)
            {
                cout<<"Enter amount:";
                cin>>damount;
                bal+=damount;
                cout<<"Dear "<<nm<<", you have successfully deposited TK "<<damount<<", account no:"<<accountno<<" and balance :"<<bal<<endl;
            }
            else cout<<"Sorry. Name does not match with account no.\n";
        }

        return flag;
    }

    int withdraw(int an,int flag)
    {
        if(accountno==an)
        {
            flag=1;
            cout<<"Enter your name:";
            cin>>nm;
            if(name==nm)
            {
                cout<<"Enter amount:";
                cin>>wamount;
                if(wamount>bal) cout<<"Sorry. You do not have sufficient balance.\n";
                else
                {
                    bal-=wamount;
                    cout<<"Dear "<<name<<", you have successfully withdrawed TK "<<wamount<<", account no:"<<accountno<<" and balance :"<<bal<<endl;
                }
            }
            else cout<<"Sorry. Name does not match with account no.\n";
        }

        return flag;
    }

    int ckbalance(int an,int flag)
    {
        if(accountno==an)
        {
            flag=1;
            cout<<"Enter name:";
            cin>>nm;
            if(name==nm)
            {
                cout<<"Dear "<<name<<", your balance :"<<bal<<endl;
            }
            else cout<<"Sorry. Name does not match with account no.\n";
        }

        return flag;
    }

};

int main()
{
    int i,t=0,ac_no,ACNO=2003060;
    int flag,trace;
    int adminpass=1234,password;
    class bank holder[5];

    //menu
    cout<<"**********Main Menu**********\n";
    cout<<"\t1. Open New Account\n";
    cout<<"\t2. Close Old Account\n";
    cout<<"\t3. Deposit Money\n";
    cout<<"\t4. Withdraw Money\n";
    cout<<"\t5. Check Balance\n";
    cout<<"\t6. Exit\n";

    while(t != 6)
    {
        cout<<"Enter Your Option(1-6):";
        cin>>t;

        if(t==1) //open an account
        {
            cout<<"Enter Admin password:";
            cin>>password;
            if(adminpass==password)
            {
                for(i=0; i<5; i++)
                {
                    ACNO++;
                    holder[i].open_account(ACNO);
                }
            }
            else cout<<"Wrong Admin password.\n";
        }

        else if(t==2) //delete an account
        {
            cout<<"Enter Admin password:";
            cin>>password;
            if(adminpass==password)
            {
                flag=trace=0;
                cout<<"Enter account number:";
                cin>>ac_no;
                for(i=0; i<5; i++)
                {
                    trace+=holder[i].delete_account(ac_no,flag);
                }
                if(trace==0) cout<<"Sorry, cannot find the account.\n";
            }
            else cout<<"Wrong Admin password.\n";
        }

        else if(t==3) //deposite
        {
            flag=trace=0;
            cout<<"Enter your account number:";
            cin>>ac_no;
            for(i=0; i<5; i++)
            {
                trace+=holder[i].deposite(ac_no,flag);
            }
            if(trace==0) cout<<"Sorry, cannot find the account.\n";
        }

        else if(t==4) //withdraw
        {
            flag=trace=0;
            cout<<"Enter your account number:";
            cin>>ac_no;
            for(i=0; i<5; i++)
            {
                trace+=holder[i].withdraw(ac_no,flag);
            }
            if(trace==0) cout<<"Sorry, cannot find the account.\n";
        }

        else if(t==5) //check balance
        {
            flag=trace=0;
            cout<<"Enter your account number:";
            cin>>ac_no;
            for(i=0; i<5; i++)
            {
                trace+=holder[i].ckbalance(ac_no,flag);
            }
            if(trace==0) cout<<"Sorry, cannot find the account.\n";
        }
    }


    return 0;
}


