#include<bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];

public:
    Restaurant()
    {
        this->total_tax = 0;
    }
    void AddTax(int tax)
    {
        this->total_tax += tax;
    }

protected:
    int total_tax;

};

class Order
{
public:
    int code;
    int quantity;
};

void ReceiveOrder(Restaurant restaurant, Order order[],int items, int n)
{
    for(int i = 1; i <= items; i++)
    {
flag:
        cout<<"Enter Item "<<i<<" Code : ";
        cin>>order[i].code;
        int f = 0;

        for (int j = 0; j < n; j++)
        {
            if(restaurant.food_item_codes[j]==order[i].code)
            {
                f=1;
            }
        }

        if(f==0)
        {
            cout<<"This code is not valid,please enter a valid code."<<endl;
            goto flag;
        }
        cout<<"Enter Item "<<i<<" Quantity : ";
        cin>>order[i].quantity;

    }
}

void Bill(Restaurant restaurant, int n)
{
    cout<<"\n"<<endl;
    cout<<"\t\t\t\t\t\tMAKE BILL"<<endl;
    cout<<"\t\t\t\t\t___________________________"<<endl;
    cout<<"\n"<<endl;
    cout<<"Item Code"<<"\t\t\t\t\tItem Name"<<"\t\t\t\t\tItem Price"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<restaurant.food_item_codes[i];
        cout<<"\t\t\t\t\t\t"<<restaurant.food_item_names[i];
        cout<<"\t\t\t\t"<<restaurant.food_item_prices[i]<<endl;
    }

}

void Summary(Restaurant restaurant, Order order[],int table_no,int items,int n)
{
    cout<<"\n\n"<<endl;
    cout<<"\t\t\t\t\t\tBILL SUMMARY"<<endl;
    cout<<"\t\t\t\t\t_______________________________"<<endl;
    cout<<"Table No. : "<<table_no<<endl;
    cout<<"Item code\tItem Name\t\t\tItem Price\tItem Quantity\tTotal Price"<<endl;
    double total_price=0;

    for(int i=1; i<=items; i++)
    {
        for(int j=0; j<n; j++)
        {

            if(restaurant.food_item_codes[j]==order[i].code)
            {
                cout<<restaurant.food_item_codes[j];
                cout<<"\t\t"<<restaurant.food_item_names[j];
                cout<<"\t\t"<<restaurant.food_item_prices[j];
                cout<<"\t\t"<<order[i].quantity;
                double total=restaurant.food_item_prices[j]*order[i].quantity;
                cout<<"\t\t"<<total<<endl;
                total_price+=total;

            }
        }
    }

    double tax = 5*total_price/100;
    total_price += tax;

    cout<<"TAX\t\t\t\t\t\t\t\t\t\t"<<tax<<endl;
    cout<<"_____________________________________________________________________________________________"<<endl;
    cout<<"NET TOTAL:\t\t\t\t\t\t\t\t\t"<<total_price<<" Taka"<<endl;

    restaurant.AddTax(tax);
}

int main()
{
    Restaurant restaurant;
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>restaurant.food_item_codes[i];
        cin.ignore();
        getline(cin,restaurant.food_item_names[i]);
        cin>>restaurant.food_item_prices[i];
    }

    while(true)
    {
        Bill(restaurant, n);

        int table_no,items;
        cout<<"Enter Table No: ";
        cin>>table_no;
        cout<<"Enter Number of Items: ";
        cin>>items;

        Order order[items];
        ReceiveOrder(restaurant,order,items,n);

        Summary(restaurant,order,table_no,items,n);
    }
    return 0;
}
