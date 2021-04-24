#include<iostream>
#include<fstream>
#include<windows.h>
#include<dos.h>
#include<stdio.h>
#include<cstdlib>
#include<string>
#include<conio.h>
using namespace std;

COORD coord={0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord); // Out put Alignment
}
int snackspr,maggipr,sdpr;
int snacksqty,maggiqty,sdqty;


class Admin;
class order;
class Accounts;

class Accounts
{
     public:
        string name;
        int cost1,cost2,cost3,qty,totalcost;

        int amt;
        char dec;
        void bill();
        Accounts()
        {
            cost1=0;
            cost2=0;
            cost3=0;
        }
        void bill1(int qty)
        {
            cost1=0;
            cost1=snackspr*qty;
        }
        void bill2(int qty)
        {
            cost2=0;
            cost2=maggipr*qty;
        }
        void bill3(int qty)
        {
            cost3=0;
            cost3=sdpr*qty;
        }

};
void Accounts::bill()
{
   // order ad;
    int ch;
    system("CLS");
            gotoxy(40,1);
            cout<<"WELLCOME RB CANTEEN";
            gotoxy(40,2);
            cout<<"-----------------"<<endl<<endl;
            totalcost=cost1+cost2+cost3;
            cout<<"     ENTER NAME OF CUSTOMER"<<endl;
            cout<<"     ";
            cin>>name;cout<<endl;

            system("CLS");
            gotoxy(40,1);
            cout<<"WELLCOME RB CANTEEN";
            gotoxy(40,2);
            cout<<"-----------------"<<endl<<endl;
            cout<<"     BILL : PAY FOLLOWING AMOUNT "<<endl;
            cout<<"     CUSTOMER NAME : "<<name<<endl;
            cout<<"     TOTAL COST IS : "<<"$"<<totalcost<<endl;;
            cout<<"     THANK YOU...!!!!"<<endl;

            cout<<"     Exit press 1 !!!!"<<endl;

            cin>>ch;
            if(ch==1)
            {
                 exit(0);
            }


}
class order
{
    public:
        int tqty;
        string titem;

        int invtqty;
        string invtitem;
        char dec;
        int ch;
        int qty;
        void orderitem1();
        void orderitem2();
        void orderitem3();
        void orderpageswitch();
        void OrderView();
        void orderpage();

};
void order::OrderView()
{
    Accounts ac;
    system("CLS");
    gotoxy(40,1);
    cout<<"WELLCOME RB CANTEEN";
    gotoxy(40,2);
    cout<<"-----------------"<<endl<<endl;
    cout<<"     PLEASE SELECT VIEW TYPE"<<endl;
    cout<<"     ITEMS IN MANAGE INVENTORY BEFORE PROCEEDING"<<endl<<endl;
    cout<<"     1. VIEW ACCOUNTS"<<endl;
    cout<<"     2. VIEW ORDERS"<<endl;
    cout<<"     ENTER CHOICE"<<endl;
    cout<<"     ";
    cin>>ch;
    while(ch!=1||ch!=2||ch!=3)
    {
        switch(ch)
        {
            case 1:
               ac.bill();
                break;
            case 2:
                orderpage();
                break;
            case 3:
              OrderView();
                break;
            default:
                cout<<endl<<"     INVALID CHOICE"<<endl<<endl;
                cout<<"     ENTER CHOICE"<<endl<<endl;
                cout<<"     ";cin>>ch;
        }
    }
}
void order::orderpage()
        {
            system("CLS");
            gotoxy(40,1);
            cout<<"WELLCOME RB CANTEEN";
            gotoxy(40,2);
            cout<<"-----------------"<<endl<<endl;
            cout<<"     1. SNACKS"<<endl;
            cout<<"     2. MAGGI"<<endl;
            cout<<"     3. SOFT DRINK"<<endl;
            cout<<"     4. EXIT"<<endl<<endl;
            cout<<"     ENTER ITEM TO ORDER"<<endl;
            cout<<"     ";

            cin>>ch;

            if(ch==4)
            {
                OrderView();
            }
           // return 0;
        }
class Admin
{
  public:
      string pass="";
      int ch;
      char c;
      void Adminpageswitch();
      void homepageswitch();
      void employeeAdmin();
      void ownerAdmin();
      void emp();
      void own();
      void homepage()
      {
          system("CLS");
          gotoxy(40,1);
          cout<<"WELCOME TO WELLCOME RB CANTEEN";
          gotoxy(40,2);
          cout<<"----------------------------"<<endl<<endl;
          cout<<"     1. LOGIN"<<endl;
          cout<<"     2. EXIT"<<endl<<endl;
          cout<<"     ENTER CHOICE"<<endl;
          cout<<"     ";cin>>ch;
          homepageswitch();
      }
      void Adminpage()
      {
          system("CLS");
          gotoxy(40,1);
          cout<<"WELLCOME RB CANTEEN";
          gotoxy(40,2);
          cout<<"-----------------"<<endl<<endl;
          cout<<"     1. OWNER LOGIN"<<endl;
          cout<<"     2. EMPLOYEE LOGIN"<<endl;
          cout<<"     3. EXIT"<<endl<<endl;
          cout<<"     ENTER CHOICE"<<endl;
          cout<<"     ";cin>>ch;
          Adminpageswitch();
      }
};
void Admin::homepageswitch()
{
    while(ch!=1||ch!=2)
    {
        switch(ch)
        {
        case 1:
            Adminpage();
            break;
        case 2:
            exit(0);
            break;
        default:
            cout<<endl<<"     INVALID CHOICE"<<endl;
            cout<<"     ENTER CHOICE"<<endl;
            cout<<"     ";cin>>ch;
        }
    }
}
void Admin::Adminpageswitch()
{
    while(ch!=1||ch!=2||ch!=3)
    {
        switch(ch)
        {
            case 1:
                ownerAdmin();
                break;
            case 2:
                employeeAdmin();
                break;
            case 3:
                exit(0);
                break;
            default:
                cout<<endl<<"     INVALID CHOICE"<<endl;
                cout<<"     ENTER CHOICE"<<endl;
                cout<<"     ";cin>>ch;
        }
    }
}
void Admin::ownerAdmin()
{
    //while(pass!="MADJ@21")
   // {
        pass="";
        cout<<endl<<"     ENTER OWNER PASSWORD"<<endl;
        cout<<"     ";
        c=_getch();
        //cin>>c;
        while(c!=13)
        {
            pass.push_back(c);
            cout<<"*";
            c=getch();
        }
        if(pass=="admin")
         {
             cout<<endl<<"     OWNER ACCESS GRANTED"<<endl;
             cout<<endl<<"     PRESS ANY KEY TO CONTINUE"<<endl;
             cout<<"     ";
             getch();
             own();
         }
        else
        {
            cout<<endl<<"     INVALID PASSWORD"<<endl;
        }
    //}
}
void Admin::employeeAdmin()
{
   // while(pass!="employee")
   // {
      //  pass="";
        cout<<"     ENTER EMPLOYEE PASSWORD"<<endl;
       cout<<"     ";
       c=_getch();
        while(c!=13)
        {
            pass.push_back(c);
           cout<<"*";
           c=getch();
       }
        if(pass=="employee")
        {
            cout<<endl<<"     EMPLOYEE ACCESS GRANTED"<<endl;
            cout<<endl<<"     PRESS ANY KEY TO CONTINUE"<<endl;
            cout<<"     ";
            getch();
            emp();
        }
        else
        {
            cout<<endl<<"     INVALID PASSSWORD"<<endl;
        }
   // }
}
void Admin::emp()
{
   order e;
    e.OrderView();
}
void Admin::own()
{
    order e;
    e.OrderView();
}

int main()
{
    system("title Welcome CANTEEN MANAGEMENT SYSYTEM");
    system("color 85");
    Admin l;
    l.homepage();
    return 0;
}
