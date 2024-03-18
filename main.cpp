#include <iostream>
#include"ArrayList.h"

using namespace std;

int main()
{
    ArrayList  List(5); 
    
    cout << "Maxsize : " << List.maxSize << endl;

    int choice, i ,e ;
    do 
    {
        cout << "Welcome to Lab ArrayList "<< endl;
        cout << " 1. size"<<endl;
        cout << " 2. index"<<endl;
        cout << " 3. get"<<endl;
        cout << " 4. remove"<<endl;
        cout << " 5. set"<<endl;
        cout << " 6. add"<<endl;
        cout << " 7. maxValue"<<endl;
        cout << " 8. minValue"<<endl;
        cout << " 9. Empty"<<endl;
        cout << " 10. clear"<<endl; 
        cout << " 0. Exit Program."<<endl;
        cout << " Select your Choice : ";
        cin >> choice;
    switch (choice)

    {
    case 1 :
        List.size();
        cout << " Size : " << List.size() <<endl;
        break;
    case 2 :
        cout<<"Input  indexOf  : ";
        cin>>e;
        List.indexOf(e);

    break;
    case 3 :
    {
        cout<<"Input Get index : ";
        cin>>i;
        cout << " Value of index ( "<< i <<")is " << List.get(i)<<endl;
        
    }
        break;
    case 4 :
        
        cout<<"Input remove  index  : ";
        cin>>i;
        cout << "Remove data index ("<<i<<") : "<<List.remove(i)<<endl;

        break;
    case 5 :
        cout<<"Input add index : ";
        cin>>i;
        cout<<"Input add element : ";
        cin>>e;
        List.set(i , e);
        break;
    case 6 :
        cout<<"Input add index : ";
        cin>>i;
        cout<<"Input add element : ";
        cin>>e;
        List.add(i , e);
        break;
    case 7 :
        cout<<"Input add index : ";
        cin>>i;
        List.maxVal();
        break;
    case 8  :
        cout<<"Input add index : ";
        cin>>i;
        List.minVal();
        break;
    case 9 :
        List.isEmpty();
        break;
    case 10 :
        List.clear();
        break;
    case 11 :
        List.display();
        break;
    case 0 :
        cout<<"Exit Program."<<endl;

    efault:
        break;
    }
    }while (choice != 0);



    


    return 0;
    
}
    
