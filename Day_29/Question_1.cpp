#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int n,choice,pos,value,found;

    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter "<<n<<" elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        arr.push_back(value);
    }

    while(true)
    {
        cout<<endl;
        cout<<"===== MENU DRIVEN ARRAY OPERATIONS ====="<<endl;
        cout<<"1. Display Array"<<endl;
        cout<<"2. Insert Element"<<endl;
        cout<<"3. Delete Element"<<endl;
        cout<<"4. Search Element"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Array: ";
                for(int i=0;i<arr.size();i++)
                    cout<<arr[i]<<" ";
                cout<<endl;
                break;

            case 2:
                cout<<"Enter position: ";
                cin>>pos;
                cout<<"Enter value: ";
                cin>>value;

                if(pos>=1&&pos<=arr.size()+1)
                {
                    arr.insert(arr.begin()+pos-1,value);
                    cout<<"Element inserted."<<endl;
                }
                else
                    cout<<"Invalid position."<<endl;

                break;

            case 3:
                cout<<"Enter position: ";
                cin>>pos;

                if(pos>=1&&pos<=arr.size())
                {
                    arr.erase(arr.begin()+pos-1);
                    cout<<"Element deleted."<<endl;
                }
                else
                    cout<<"Invalid position."<<endl;

                break;

            case 4:
                cout<<"Enter element to search: ";
                cin>>value;

                found=0;

                for(int i=0;i<arr.size();i++)
                {
                    if(arr[i]==value)
                    {
                        cout<<"Element found at position "<<i+1<<endl;
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    cout<<"Element not found."<<endl;

                break;

            case 5:
                cout<<"Exiting..."<<endl;
                return 0;

            default:
                cout<<"Invalid choice!"<<endl;
        }
    }

    return 0;
}