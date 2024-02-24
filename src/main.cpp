#include <iostream>

#include "LinkedList.cpp"
#include "SimpleLinkedList.cpp"
using namespace std;


int main()
{
    
    SimpleLinkedList list;

           
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);
    list.push_back(5);
    list.push_back(6);
    list.push_back(100);
    list.push_front(500);

    // cout<<"Esta vacia?: "<< list.is_empty() 
    //      <<"\nCantidad de elementos: " << list.size()
    //      <<"\nValor del primer elemento:" << list.front()
    //      <<"\nValor del ultimo elemento:" << list.back() <<  endl<<endl;

    // cout << list.pop_back()<<endl<<endl;

    // cout<<"Esta vacia?: "<< list.is_empty() 
    //    <<"\nCantidad de elementos: " << list.size()
    //    <<"\nValor del primer elemento:" << list.front()
    //    <<"\nValor del ultimo elemento:" << list.back() <<  endl;

    list.insert(333,0);

    for(int i = 0; i < list.size(); i++)
    {
      cout<< list.value_at(i)<<endl;
    }
    

    


    return 0;
}