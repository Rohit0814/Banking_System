#include <iostream>
#include <conio.h>
#include<fstream>
#include<iomanip>
#include<string.h>
using namespace std;

char acno[30],user[30];

class account
{
   char accno[30];
   char acc_hol_name[30],ch,input;
   char acc_type;
   char hol_phn_no[20];
   char address[40];
   char occup[30];
   int i=0,j=0;
   int amount=0;
   public:
       void getdata();
       void display_data();
       void accname();
       void acc();
       int dep();
       int draw();
       int total_amt();
};

void account::getdata()
{
    cout<<"account holder name:  ";
    gets(acc_hol_name);
    cout<<"\naccount type(s->saving | c->current):  ";
    cin.get(acc_type);
    cin.get(ch);
    cout<<"\naccount number:  ";
    //accno=getch();
    i=0;
    while(1)
    {
        input=getch();
        if(input==13)
        {
            accno[i]='\0';
            break;
        }
        else if(input==8)
        {
            printf("\b \b");
            i--;
        }
        else
        {
            accno[i]=input;
            printf("%c",accno[i]);
            i++;
        }
    }
    cout<<"\n";
    cout<<"\naddress of account holder:  ";
    j=0;
    while(1)
    {
        input=getch();
        if(input==13)
        {
            address[j]='\0';
            break;
        }
        else if(input==8)
        {
            printf("\b \b");
            j--;
        }
        else
        {
            address[j]=input;
            printf("%c",address[j]);
            j++;
        }
    }
    printf("\n");
    cout<<"\nphone no:  ";
    i=0;
    while(1)
    {
        input=getch();
        if(input==13)
        {
            hol_phn_no[i]='\0';
            break;
        }
        else if(input==8)
        {
            printf("\b \b");
            i--;
        }
        else
        {
            hol_phn_no[i]=input;
            printf("%c",hol_phn_no[i]);
            i++;
        }
    }
    printf("\n");
    cout<<"\nOccupation: ";
    i=0;
    while(1)
    {
        input=getch();
        if(input==13)
        {
            occup[i]='\0';
            break;
        }
        else if(input==8)
        {
            printf("\b \b");
            i--;
        }
        else
        {
            occup[i]=input;
            printf("%c",occup[i]);
            i++;
        }
    }
    printf("\n");
    for(i=0;i<88;i++)
        printf("%c",205);
    printf("\n");
}

void account::display_data()
{
    printf("\n");
    for(i=0;i<88;i++)
        printf("%c",205);
    printf("\n");
    cout<<"account holder name: "<<acc_hol_name;
    cout<<"\n\n\naccount type: ";
    if(acc_type=='s')
        cout<<"saving account";
    else if(acc_type=='c')
        cout<<"current account";
    else
        cout<<"invalid account type";
    cout<<"\n\n\naccount number: ";
    for(i=0;accno[i]!='\0';i++)
        printf("%c",accno[i]);
    cout<<"\n\n\naddress: ";
    for(j=0;address[j]!=0;j++)
    {
        printf("%c",address[j]);
    }
    cout<<"\n\n\nphone number: ";
    for(i=0;hol_phn_no[i]!='\0';i++)
        printf("%c",hol_phn_no[i]);
    cout<<"\n\n\noccupation: ";
    for(i=0;occup[i]!='\0';i++)
        printf("%c",occup[i]);
    cout<<"\n\n\naccount balance: "<<total_amt()<<" Rs";
}

void account::acc()
{
    j=0;
    for(i=0;accno[i]!=0;i++)
    {
        acno[j]=accno[i];
        j++;
    }
    acno[j]='\0';
}

void account::accname()
{
     j=0;
    for(i=0;acc_hol_name[i]!=0;i++)
    {
        user[j]=acc_hol_name[i];
        j++;
    }
    user[j]='\0';
}

int account::dep()
{
    int amt;
    cout<<"enter amount to depost: ";
    cin>>amt;
    amount=amount+amt;
    return(amount);
}

int account::draw()
{
    int amt;
    cout<<"enter amount to withdraw: ";
    cin>>amt;
    if(amt<=amount)
    {
        amount=amount-amt;
        return(amount);
        printf("\n\tamount withdraw successfull\n\n");
    }
    else
    {
        printf("\n\tyou have not suffecient amount.....\n\n");
        return amount;
    }
}
int account::total_amt()
{
    return amount;
}

void write_acc();
void get_acc();
void search_sp_acc();
void withdraw_deposit(int);
void modify_acc();
void delete_acc();
void intro();

int main()
{
    int i;
    // account ac;
     int choice;
     char acn[30],ch;
     intro();
     while(1)
     {
         printf("\n");
    for(i=0;i<88;i++)
        printf("%c",205);
    printf("\n");
         cout<<"\n1: create account\n\n2: display all account\n\n3: display special account\n\n4: deposit amount\n\n5: withdraw amount\n\n6: balance enquire\n\n7: modify account details\n\n8: delete your account\n\n9: exit\n";
         cin>>choice;
         system("cls");
         intro();
         switch(choice)
         {
             case 1:write_acc();
                    printf("\n\n\nenter any key to continue...");
                    getch();
                    system("cls");
                    intro();
                    break;
             case 2: get_acc();
                    printf("\n\n\nenter any key to continue...");
                    getch();
                    system("cls");
                    intro();
                    break;
            case 3: search_sp_acc();
                    printf("\n\n\nenter any key to continue...");
                    getch();
                    system("cls");
                    intro();
                    break;
            case 4: withdraw_deposit(choice);
                    printf("\n\n\nenter any key to continue...");
                    getch();
                    system("cls");
                    intro();
                    break;
            case 5: withdraw_deposit(choice);
                    printf("\n\n\nenter any key to continue...");
                    getch();
                    system("cls");
                    intro();
                    break;
            case 6: withdraw_deposit(choice);
                    printf("\n\n\nenter any key to continue...");
                    getch();
                    system("cls");
                    intro();
                    break;
            case 7: modify_acc();
                    printf("\n\n\nenter any key to continue...");
                    getch();
                    system("cls");
                    intro();
                    break;
            case 8: delete_acc();
                    printf("\n\n\nenter any key to continue...");
                    getch();
                    system("cls");
                    intro();
                    break;
            case 9: system("cls");
                    intro();
                    printf("\n\n\t\t\tthank you\n\n\t\tdevloped by:ROHIT KUMAR SINGH\n\n");
                    exit(1);
            default:cout<<"wrong input";
                    printf("\n\n\nenter any key to continue...");
                    getch();
                    system("cls");
                    intro();
         }
     }
}

void intro()
{
    char out;
    for(int i=0;i<88;i++)
        printf("%c",205);
    printf("\t\tBRANCH: NAMKUM");
    printf("\n%c",218);
    for(int i=0;i<86;i++)
    {
        printf("%c",196);
    }
    printf("%c",191);
    cout<<"\n\t\t\t\t    WELCOME\n";
    printf("%c",192);
    for(int i=0;i<86;i++)
    {
        printf("%c",196);
    }
    printf("%c",217);
    cout<<"\n\t\t\t\tBANK OF INDIA\n";
    for(int i=0;i<88;i++)
        printf("%c",205);
    printf("\n\t\t\tWARNING...\n");
    printf("Beware of fictitious offers, messages/SMS about lottery\nwinning,cheap fund offers, employment offers, scholarship\noffers, offer of emigration visas, offer of admission to reputed\nuniversities abroad and similar such offers from fraudsters\neither within the country or from abroad.\n");
    for(int i=0;i<88;i++)
        printf("%c",205);
    printf("\n\n");
}

void write_acc()
{
    ofstream fout;
    char ch;
    fout.open("account.bin",ios::binary|ios::app);
    account acc;
    cin.get(ch);
    acc.getdata();
    fout.write((char*)&acc,sizeof(acc));
    fout.close();
}
void get_acc()
{
    ifstream fin;
    fin.open("account.bin",ios::binary);
    account acc;
    while(fin.read((char *)&acc,sizeof(acc)))
    {
        acc.display_data();
    }
    fin.close();
}

void search_sp_acc()
{
    ifstream fin;
    int flag1=0,i=0;
    char u[30],a[30],ch,input;
    fin.open("account.bin",ios::binary);
    account acc1;
    printf("\n\t\tenter your account details to access your account\n\n");
    printf("enter account holder name: ");
    while(1)
    {
        input=getch();
        if(input==13)
        {
            u[i]='\0';
            break;
        }
        else if(input==8)
        {
            printf("\b \b");
            i--;
        }
        else
        {
            u[i]=input;
            printf("%c",u[i]);
            i++;
        }
    }
    printf("\n\nenter account number: ");
    cin.get(ch);
    gets(a);
    fin.read((char *)&acc1,sizeof(acc1));
    acc1.acc();
    acc1.accname();
    while(!fin.eof())
    {
        if(!strcmp(acno,a)&&!strcmp(user,u))
        {
           printf("\n\nYour account exist in my database.........");
           acc1.display_data();
           flag1=1;
        }
        fin.read((char *)&acc1,sizeof(acc1));
        acc1.acc();
        acc1.accname();
    }
    if(flag1==0)
    {
        printf("\n\nYour account doesn't exit in my database............");
    }
    fin.close();
}

void withdraw_deposit(int option)
{
    fstream fin;
    int flag1=0,i=0;
    char u[30],a[30],ch,input;
    fin.open("account.bin",ios::binary|ios::in|ios::out|ios::ate);
    account acc1;
    printf("\n\t\tenter your account details to access your account\n\n");
    printf("enter account holder name: ");
    while(1)
    {
        input=getch();
        if(input==13)
        {
            u[i]='\0';
            break;
        }
        else if(input==8)
        {
            printf("\b \b");
            i--;
        }
        else
        {
            u[i]=input;
            printf("%c",u[i]);
            i++;
        }
    }
    printf("\n\nenter account number: ");
    cin.get(ch);
    gets(a);
    fin.seekp(0);
    fin.read((char *)&acc1,sizeof(acc1));
    acc1.acc();
    acc1.accname();
    while(!fin.eof())
    {
        if(!strcmp(acno,a)&&!strcmp(user,u))
        {
           printf("\n\nYour account exist in my database.........\n\n");
          if(option==4)
          {
            printf("\t\t\tdeposit amount\n\n");
            acc1.dep();
            printf("\n\tamount deposit successfull\n\n");
          }
           else if(option==5)
           {
              printf("\t\t\twithdraw amount\n\n");
              acc1.draw();
           }
           else if(option==6)
           {
               printf("\t\t\tbalance enquire");
              cout<<"\n\nyour total balance is: "<<acc1.total_amt()<<"\n\n";
           }
           fin.seekp(fin.tellp()-sizeof(acc1));
           fin.write((char *)&acc1,sizeof(acc1));
           flag1=1;
        }
        fin.read((char *)&acc1,sizeof(acc1));
        acc1.acc();
        acc1.accname();
    }
    if(flag1==0)
    {
        printf("\n\nYour account doesn't exit in my database............\n");
    }
    fin.close();
}

void modify_acc()
{
    fstream fin;
    int flag1=0,i=0;
    char u[30],a[30],ch,input;
    fin.open("account.bin",ios::binary|ios::in|ios::out|ios::ate);
    account acc1;
    printf("\n\t\tenter your account details to access your account\n\n");
    printf("enter account holder name: ");
    while(1)
    {
        input=getch();
        if(input==13)
        {
            u[i]='\0';
            break;
        }
        else if(input==8)
        {
            printf("\b \b");
            i--;
        }
        else
        {
            u[i]=input;
            printf("%c",u[i]);
            i++;
        }
    }
    printf("\n\nenter account number: ");
    cin.get(ch);
    gets(a);
    fin.seekp(0);
    fin.read((char *)&acc1,sizeof(acc1));
    acc1.acc();
    acc1.accname();
    while(!fin.eof())
    {
        if(!strcmp(acno,a)&&!strcmp(user,u))
        {
           printf("\n\nYour account exist in my database.........");
           cout<<"\n\n\t\tmodification is going to work \n";
           acc1.getdata();
           fin.seekp(fin.tellp()-sizeof(acc1));
           fin.write((char *)&acc1,sizeof(acc1));
           flag1=1;
        }
        fin.read((char *)&acc1,sizeof(acc1));
        acc1.acc();
        acc1.accname();
    }
    if(flag1==0)
    {
        printf("\n\nYour account doesn't exit in my database............");
    }
    fin.close();
}

void delete_acc()
{
    ifstream fin;
    ofstream fout;
    int flag1=0,i=0;
    char u[30],a[30],ch,input;
    fin.open("account.bin",ios::binary);
    fout.open("temp.bin",ios::binary|ios::app);
    account acc1;
    printf("\n\t\tenter your account details to access your account\n\n");
    printf("enter account holder name: ");
    while(1)
    {
        input=getch();
        if(input==13)
        {
            u[i]='\0';
            break;
        }
        else if(input==8)
        {
            printf("\b \b");
            i--;
        }
        else
        {
            u[i]=input;
            printf("%c",u[i]);
            i++;
        }
    }
    printf("\n\nenter account number: ");
    cin.get(ch);
    gets(a);
    fin.read((char *)&acc1,sizeof(acc1));
    acc1.acc();
    acc1.accname();
    while(!fin.eof())
    {
        if(!(!strcmp(acno,a)&&!strcmp(user,u)))
        {
           fout.write((char *)&acc1,sizeof(acc1));
        }
        else
        {
            printf("your account details...");
            acc1.display_data();
            printf("\n\n\t\taccount deleted successfull....\n");
            flag1=1;
        }
        fin.read((char *)&acc1,sizeof(acc1));
        acc1.acc();
        acc1.accname();
    }
    if(flag1==0)
    {
        printf("\n\nYour account doesn't exit in my database............");
    }
    fin.close();
    fout.close();
    remove("account.bin");
    rename("temp.bin","account.bin");
}
