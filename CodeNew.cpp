#include<iostream>

using namespace std;
void InsertItem(string shop[],int Index);
void DisplayAllItem(string shop[],int Index);

void DisplayOneItem(string shop[],int Index)
{
    int input;
    string ItemsId;
    cout<<"Enter specific itemID\n\n";
    cout<<"Input ItemID : ";
    cin>>ItemsId;
    for(int i = 0; i <= 50; ++i)
    {
         size_t found = shop[i].find(ItemsId);
         if (found != string::npos)
         {
                cout<<"**Display all items information\n\n"<<endl;
                string Items="itemID  | itemPrice | itemQuantity";
                cout<<Items+"\n";
                cout<<"------------------------------------\n";
                cout<<shop[i]<<endl;
                break;
       }

    }
    cout<<"\n------------------------------------\n"<<endl;
        cout<<"1.Insert item"<<endl;
        cout<<"2.Display all itms"<<endl;
        cout<<"3.Display specific item"<<endl;
        cout<<"4.Exit\n\n"<<endl;
        cout<<"Select Type : ";
        cin>>input;
        if(input==1)
        {
            system("CLS");
            Index++;
            InsertItem(shop,Index);
        }
        else if(input==2){

            system("CLS");
            DisplayAllItem(shop,Index);
        }
        else if(input==3){
          system("CLS");
          DisplayOneItem(shop,Index);
        }
        else if(input==4){
            exit(0);
        }
}
void DisplayAllItem(string shop[],int Index)
{
    int input;
    cout<<"**Display all items information\n\n"<<endl;
    string Items="itemID  | itemPrice | itemQuantity";
    cout<<Items+"\n";
    cout<<"------------------------------------\n";
    for(int i = 0; i <=Index+1; ++i)
    {
       cout<<shop[i]<<endl;
    }

        cout<<"\n------------------------------------\n"<<endl;
        cout<<"1.Insert item"<<endl;
        cout<<"2.Display all itms"<<endl;
        cout<<"3.Display specific item"<<endl;
        cout<<"4.Exit\n\n"<<endl;
        cout<<"Select Type : ";
        cin>>input;
        if(input==1)
        {
            system("CLS");
            Index++;
            InsertItem(shop,Index);
        }
        else if(input==2){

            system("CLS");
            DisplayAllItem(shop,Index);
        }
        else if(input==3){
          system("CLS");
          DisplayOneItem(shop,Index);
        }
        else if(input==4){
            exit(0);
        }
}

void InsertItem(string shop[],int Index)
{
        int input;
        string itemID; string itemPrice;  string itemQuantity;
        cout<<"***** Input Item's Details ******\n\n ";
        cout<<"Input Item Id : ";
        cin>>itemID;
        cout<<"Input Item Price : ";
        cin>>itemPrice;
        cout<<"Input item Quantity : ";
        cin>>itemQuantity;
        string Items=itemID+"      |    "+itemPrice+"     |    "+itemQuantity;
        shop[Index]=Items;

        system("CLS");
        cout<<"\nItems Insert Successfully..!!\n\n"<<endl;

        cout<<"1.Continue"<<endl;
        cout<<"2.Display all items"<<endl;
        cout<<"3.Display specific item"<<endl;
        cout<<"4.Exit\n\n"<<endl;
        cout<<"Select Type : ";
        cin>>input;
        if(input==1)
        {
            system("CLS");
            Index++;
            if(Index<50)
            {
                InsertItem(shop,Index);
            }
        }
        else if(input==2){

            system("CLS");
            DisplayAllItem(shop,Index);
        }
        else if(input==3){
          system("CLS");
          DisplayOneItem(shop,Index);
        }
        else if(input==4){
            exit(0);
        }
}


int main()
{

    int Index=0;
    string shop[50];
    int input;

            cout<<"*****************  WELLCOME GROCERY SHOP ****************\n";
            cout<<"----------------------------------------------------------\n\n"<<endl<<endl;
            cout<<"1.Insert Items"<<endl;
            cout<<"2.Display all items"<<endl;
            cout<<"3.Display specific item"<<endl;
            cout<<"4.Exit\n\n"<<endl;
            cout<<"Select Type : ";
            cin>>input;
            if(input==1)
            {
                system("CLS");
                InsertItem(shop,Index);
            }
            else if(input==2){
                    system("CLS");
                DisplayAllItem(shop,Index);
            }
            else if(input==3){
                DisplayOneItem(shop,Index);
            }
            else if(input==4){
                exit(0);
            }

    return 0;
}
