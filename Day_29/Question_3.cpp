#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> name;
    vector<int> qty;
    vector<float> price;

    int choice,n,q;
    float p;
    string item;

    while(true)
    {
        cout<<endl;
        cout<<"===== INVENTORY MANAGEMENT SYSTEM ====="<<endl;
        cout<<"1. Add Item"<<endl;
        cout<<"2. Display Items"<<endl;
        cout<<"3. Search Item"<<endl;
        cout<<"4. Delete Item"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter item name: ";
                cin>>item;
                cout<<"Enter quantity: ";
                cin>>q;
                cout<<"Enter price: ";
                cin>>p;

                name.push_back(item);
                qty.push_back(q);
                price.push_back(p);

                cout<<"Item added successfully."<<endl;
                break;

            case 2:
                if(name.size()==0)
                {
                    cout<<"Inventory is empty."<<endl;
                }
                else
                {
                    cout<<"Items in Inventory:"<<endl;
                    for(int i=0;i<name.size();i++)
                    {
                        cout<<"Name: "<<name[i]
                            <<" | Quantity: "<<qty[i]
                            <<" | Price: "<<price[i]<<endl;
                    }
                }
                break;

            case 3:
            {
                cout<<"Enter item name to search: ";
                cin>>item;

                int found=0;

                for(int i=0;i<name.size();i++)
                {
                    if(name[i]==item)
                    {
                        cout<<"Item found!"<<endl;
                        cout<<"Name: "<<name[i]
                            <<" | Quantity: "<<qty[i]
                            <<" | Price: "<<price[i]<<endl;
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    cout<<"Item not found."<<endl;

                break;
            }

            case 4:
            {
                cout<<"Enter item name to delete: ";
                cin>>item;

                int found=0;

                for(int i=0;i<name.size();i++)
                {
                    if(name[i]==item)
                    {
                        name.erase(name.begin()+i);
                        qty.erase(qty.begin()+i);
                        price.erase(price.begin()+i);

                        cout<<"Item deleted successfully."<<endl;
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    cout<<"Item not found."<<endl;

                break;
            }

            case 5:
                cout<<"Exiting..."<<endl;
                return 0;

            default:
                cout<<"Invalid choice!"<<endl;
        }
    }

    return 0;
}