#include <iostream>

using namespace std;
int main()
{
    int SelectItem;
    int a,b,c;
    do {
        system("cls");
        cout << "1(+)\n ";
        cout << "2(-)\n ";
        cout << "3(*)\n ";
        cout << "4(/)\n ";
        cout << "Exit\n ";
        cout << "select item";
        cin >> SelectItem;

        switch (SelectItem)
        {
            case 1: {
                system("cls");
                cout<<"========Sum========\n";
                cout<<"Enter A";
                cin>>a;
                cout<<"Enter B";
                cin>>b;
                c=a+b;
                cout<<c;
                system("pause");
                break;
            }

            case 2: {
                system("cls");
                cout<<"========Submission========\n";
                cout<< "Enter A";
                cin>>a;
                cout<< "Enter B";
                cin>>b;
                c=a-b;
                cout << c<<"\n\n";
                system("pause");
                break;
            }

            case 3: {
                system("cls");
                cout<<"========Multi========\n";
                cout << "Enter A";
                cin >> a;
                cout << "Enter B";
                cin >> b;
                c=a*b;
                cout << c <<"\n\n";
                system("pause");
                break;

            }

            case 4: {
                system("cls");
                cout<<"========Division========\n";
                cout << "Enter A";
                cin >> a;
                cout << "Enter B";
                cin >> b;
                c=a/b;
                cout << c <<"\n\n";
                system("pause");
                break;


            }


        }


    }
    while(SelectItem!=5);
    return 0;
}
