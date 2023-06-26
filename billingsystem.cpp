#include<iostream>
using namespace std;

int main()
{
    int returnTotalBill(void);
    int totalBill=returnTotalBill();
    cout<<"Your total bill amount is: "<<totalBill;
    return 0;
}
int returnTotalBill()
{

    char c,item,vegitem,selectagain,nonvegitem;
    int billamount=0;

    start:
    cout<<"------------Welcome to Online-Food Order--------------"<<endl;
    cout<<"-------------Please follow below instructions-----------"<<endl;
    cout<<"Step 1 : Please press s to start your choice"<<endl;
    cout<<"Step 2 : You can order both veg ang non-veg item"<<endl;
    cout<<"Step 3 : Please press a to select veg items"<<endl;
    cout<<"Step 4 : Please press b to select non-veg items"<<endl;
    cout<<"Step 5 : You will get your final bill after your order"<<endl;
    cin>>c;

    if(c=='s' || c=='S')
    {
        items:
        cout<<"Which type of food-item you want to order"<<endl;
        cout<<"(a) Veg Items                         (b) Non-vg Items"<<endl;
        cin>>item;

        if(item=='a' || item=='A')
        {
            vegitemlist:
            cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
            cout<<"(1) Paneer : Price : Rs-250"<<endl;
            cout<<"(2) Burger : Price : Rs-100"<<endl;
            cout<<"(3) Pizza : Price : Rs-150"<<endl;
            cout<<"(4) Veg roll : Price : Rs-150"<<endl;
            cout<<"(5) Sandwitch : Price : Rs-100"<<endl;
            cin>>vegitem;

            if(vegitem=='1') 
            {
                billamount=billamount+250;
            }
            else if(vegitem=='2')
            {
                billamount=billamount+100;
            }
            else if(vegitem=='3')
            {
                billamount=billamount+150;
            }
            else if(vegitem=='4')
            {
                billamount=billamount+150;
            }
            else if(vegitem=='5')
            {
                billamount=billamount+150;
            }
            else{
                cout<<"You have entered wrong choice"<<endl;
                goto vegitemlist;
            }
            cout<<"Do you want to add more items? y or n"<<endl;
            cin>>selectagain;

            if(selectagain=='y' || selectagain=='Y')
            {
                goto items;
            }
            else{
                return billamount;
            }
        }



        else if(item=='b' || item=='B') 
        {
            nonvegitemlist:
            cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
            cout<<"(1) Chicken : Price : Rs-350"<<endl;
            cout<<"(2) Biriyani : Price : Rs-100"<<endl;
            cout<<"(3) Butter chicken : Price : Rs-150"<<endl;
            cout<<"(4) tanduri chicken : Price : Rs-200"<<endl;
            cout<<"(5) Mutton curry : Price : Rs-200"<<endl;
            cin>>nonvegitem;

            if(nonvegitem=='1') 
            {
                billamount=billamount+350;
            }
            else if(nonvegitem=='2')
            {
                billamount=billamount+100;
            }
            else if(nonvegitem=='3')
            {
                billamount=billamount+150;
            }
            else if(nonvegitem=='4')
            {
                billamount=billamount+200;
            }
            else if(nonvegitem=='5')
            {
                billamount=billamount+200;
            }
            else{
                cout<<"You have entered wrong choice"<<endl;
                goto nonvegitemlist;
            }
            cout<<"Do you want to add more items? y or n"<<endl;
            cin>>selectagain;

            if(selectagain=='y' || selectagain=='Y')
            {
                goto items;
            }
            else{
                return billamount;
            }
        }
        else
        {
            cout<<"You have entered wrong value,please try again"<<endl;
            goto items;
        }
    }
    else{
        cout<<"You have entered wrong character,please press s..!!"<<endl; 
        goto start;
    }

    return billamount;    
}