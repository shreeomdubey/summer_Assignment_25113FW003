#include<bits/stdc++.h>
using namespace std;

struct Book{
    string id;
    string title;
    string author;
    string publisher;
};

int main(){

    vector<Book> books;
    string choice;

    while(true){

        cout<<endl;
        cout<<"========== Library Management System =========="<<endl;
        cout<<"1. Add Book"<<endl;
        cout<<"2. Display All Books"<<endl;
        cout<<"3. Search Book"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter Your Choice: ";
        getline(cin,choice);

        if(choice=="1"){

            Book b;

            cout<<"Enter Book ID: ";
            getline(cin,b.id);

            cout<<"Enter Book Title: ";
            getline(cin,b.title);

            cout<<"Enter Author Name: ";
            getline(cin,b.author);

            cout<<"Enter Publisher Name: ";
            getline(cin,b.publisher);

            books.push_back(b);

            cout<<endl<<"Book Added Successfully!"<<endl;
        }

        else if(choice=="2"){

            if(books.empty()){
                cout<<endl<<"No Book Records Found!"<<endl;
                continue;
            }

            cout<<endl<<"Book Records"<<endl;

            for(int i=0;i<books.size();i++){

                cout<<endl;
                cout<<"Book "<<i+1<<endl;
                cout<<"Book ID      : "<<books[i].id<<endl;
                cout<<"Book Title   : "<<books[i].title<<endl;
                cout<<"Author       : "<<books[i].author<<endl;
                cout<<"Publisher    : "<<books[i].publisher<<endl;
            }
        }

        else if(choice=="3"){

            string id;
            bool found=false;

            cout<<"Enter Book ID to Search: ";
            getline(cin,id);

            for(int i=0;i<books.size();i++){

                if(books[i].id==id){

                    cout<<endl<<"Book Found!"<<endl;
                    cout<<"Book ID      : "<<books[i].id<<endl;
                    cout<<"Book Title   : "<<books[i].title<<endl;
                    cout<<"Author       : "<<books[i].author<<endl;
                    cout<<"Publisher    : "<<books[i].publisher<<endl;

                    found=true;
                    break;
                }
            }

            if(!found)
                cout<<"Book Record Not Found!"<<endl;
        }

        else if(choice=="4"){

            cout<<"Exiting Program..."<<endl;
            break;
        }

        else{

            cout<<"Invalid Choice!"<<endl;
        }
    }

    return 0;
}