#include <malloc.h>


class Node
{
    public:
        int value;
        Node* next;  
     
};

class SimpleLinkedList
{
    private:
        Node* head = new Node;
        Node* tail = new Node;
        int list_size = -1;

    public:

        int size()
        {
            return list_size + 1;
        }

        bool is_empty()
        {
            return (size() == 0) ? true : false;
        }

        int value_at(int index)
        {

            if(is_empty()) return -1;
            else
            {
                Node* ptr = new Node;
                int i = 0;
                ptr = head;

                
                while(ptr != tail->next)
                {
                    if( i == index) return ptr->value;
                    else
                    {
                        ptr = ptr->next;
                        i++;
                    }
                }
            }
        }
        
        void push_front(int new_value)
        {
            Node* new_node = new Node;
            new_node->value = new_value;

            if(is_empty())
            {
                head = new_node;
                tail = new_node;
            }
            else
            {
                new_node->next = head;
                head = new_node;
            }

            list_size++;
        }

        //TODO: Implementar el caso para Cuando este vacia
        int pop_front()
        {
            Node* ptr = new Node;
            int value = head->value;

            ptr = head;
            ptr = ptr->next;

            free(head);
            head = ptr;
            free(ptr);

            list_size--;
            return value;
            
        }

        void push_back(int new_value)
        {
            Node* new_node = new Node;
            new_node->value = new_value;
            
            if(is_empty())
            {
                head = new_node;
                tail = new_node;
            }
            else
            {
                tail->next = new_node;
                tail = new_node;
            }

            list_size++;
        }

        int pop_back()
        {
           Node* ptr = new Node;
           int value = tail->value;

           ptr = head;

           while(ptr->next->next != tail)
           {
                if(ptr->next->next == tail)
                {
                    free(tail);
                    ptr->next = tail;
                    free(ptr);
                    list_size--;
                    return value;
                }
                else
                {
                    ptr = ptr->next;
                }
            }
        }

        int front()
        {
            return head->value;
        }

        int back()
        {
            return tail->value;
        }

        void insert(int index, int new_value)
        {
            if(is_empty())
            {
                
            }
            else
            {
                Node* new_node = new Node;
                Node* ptr = new Node;
                ptr = head;
                new_node->value = new_value;
                int i = 0;

                if(index == 0) push_front(new_value);
                else if(index == size() - 1) push_back(new_value);
                else
                {
                    while(ptr != tail->next)
                    {
                        if(i == index)
                        {
                            new_node->next = ptr->next;
                            ptr->next = new_node;
                        }
                        else
                        {
                            ptr = ptr->next;
                            i++;
                        }
                    }
                }
                
                free(ptr);

            }
        }
    



};


