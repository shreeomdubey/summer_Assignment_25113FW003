#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>id;
    vector<string>title,author,status;

    int ch;

    do{
        cout<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. Display Books"<<endl;
        cout<<"3. Search Book"<<endl;
        cout<<"4. Update Book"<<endl;
        cout<<"5. Delete Book"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>ch;

        switch(ch){
            case 1:{
                int b;
                string t,a,s;

                cout<<"Enter Book ID: ";
                cin>>b;

                cout<<"Enter Book Title: ";
                getline(cin>>ws,t);

                cout<<"Enter Author Name: ";
                getline(cin,a);

                cout<<"Enter Status(Available/Issued): ";
                getline(cin,s);

                id.push_back(b);
                title.push_back(t);
                author.push_back(a);
                status.push_back(s);

                cout<<"Book added successfully."<<endl;
                break;
            }

            case 2:{
                if(id.empty()){
                    cout<<"No books available."<<endl;
                }
                else{
                    for(int i=0;i<id.size();i++){
                        cout<<"----------------------"<<endl;
                        cout<<"Book ID: "<<id[i]<<endl;
                        cout<<"Title: "<<title[i]<<endl;
                        cout<<"Author: "<<author[i]<<endl;
                        cout<<"Status: "<<status[i]<<endl;
                    }
                }
                break;
            }

            case 3:{
                int b,f=0;
                cout<<"Enter Book ID to search: ";
                cin>>b;

                for(int i=0;i<id.size();i++){
                    if(id[i]==b){
                        cout<<"Book ID: "<<id[i]<<endl;
                        cout<<"Title: "<<title[i]<<endl;
                        cout<<"Author: "<<author[i]<<endl;
                        cout<<"Status: "<<status[i]<<endl;
                        f=1;
                        break;
                    }
                }

                if(f==0)
                    cout<<"Book not found."<<endl;

                break;
            }

            case 4:{
                int b,f=0;
                cout<<"Enter Book ID to update: ";
                cin>>b;

                for(int i=0;i<id.size();i++){
                    if(id[i]==b){
                        cout<<"Enter New Title: ";
                        getline(cin>>ws,title[i]);

                        cout<<"Enter New Author: ";
                        getline(cin,author[i]);

                        cout<<"Enter New Status: ";
                        getline(cin,status[i]);

                        cout<<"Book updated successfully."<<endl;
                        f=1;
                        break;
                    }
                }

                if(f==0)
                    cout<<"Book not found."<<endl;

                break;
            }

            case 5:{
                int b,f=0;
                cout<<"Enter Book ID to delete: ";
                cin>>b;

                for(int i=0;i<id.size();i++){
                    if(id[i]==b){
                        id.erase(id.begin()+i);
                        title.erase(title.begin()+i);
                        author.erase(author.begin()+i);
                        status.erase(status.begin()+i);

                        cout<<"Book deleted successfully."<<endl;
                        f=1;
                        break;
                    }
                }

                if(f==0)
                    cout<<"Book not found."<<endl;

                break;
            }

            case 6:
                cout<<"Exiting..."<<endl;
                break;

            default:
                cout<<"Invalid choice."<<endl;
        }

    }while(ch!=6);

    return 0;
}