#include <malloc.h>


// class Node
// {
//     public:

//         int value;
//         Node* next;  
        
// };

// class LinkedList
// {   

//     private:

//         Node* head;
//         Node* Tail;
//         int list_size = -1;

//     public:

//         int size()
//         {
//             return list_size + 1;
//         }

//         bool is_empty()
//         {
//             return (list_size == -1) ? true : false;
//         }

//         //TODO: Crear el caso para cuando la variable exceda el limite
//         int value_at(int value)
//         {
//             if(value > list_size) return -1;

//             else
//             {
//                 Node* ptr = new Node;
//                 ptr = head;
//                 int  i = 0;
//                 while(ptr != nullptr)
//                 {
    
//                     if(i == value) return ptr->value;
//                     else
//                     {
//                         ptr = ptr->next;
//                         i++;
//                     }
//                 }
//                 free(ptr);
//             }
//         }

//         //TODO: Terminar de documentar
//         //Add a new Node in the front of the Linked List
//         void push_front(int new_value)
//         {   
//             //1. Create a new Node
//             Node* new_node = new Node;
//             //2. Assing a value
//             new_node->value = new_value;

//             //3. If the Linked list is Empty add the new Node as Head
//             if(is_empty() == true)
//             {
//                 head = new_node;
//                 Tail = new_node;
//                 list_size++;
//             } 
//             //4. If isnt empty point Next to head and  
//             else{

//                 new_node->next = head;

//                 head = new_node;

//                 list_size++;

//             } 
//         }

//         int pop_front()
//         {
//             Node* ptr = new Node;
//             int value = head->value;
//             list_size--;

//             ptr = head;
//             ptr = ptr->next;
//             free(head);
//             head = ptr;
//             free(ptr);
//             return value;



            
//         }

//         //Return the value of the first node(Head)
//         int front()
//         {
//             return head->value;
//         }

//         int back()
//         {
//             return Tail->value;
//         }






// };