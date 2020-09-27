#include <bits/stdc++.h>

using namespace std;

class LRUCache
{
    typedef struct DoublyLL
    {
        int key;
        int value;
        struct DoublyLL *next;
        struct DoublyLL *prev;
    } DoublyLL;

    int capacity;
    int curr = 0;
    map<int, DoublyLL *> cache;
    DoublyLL *head, *tail;

    DoublyLL* createNode(int key, int value)
    {
        DoublyLL *node = new DoublyLL();
        node->key = key;
        node->value = value;
        node->prev = NULL;
        node->next = NULL;
        return node;
    }

    void addNode(DoublyLL *node)
    {
        if (head == NULL)
        {
            head = node;
            tail = node;
        }
        else
        {
            node->next = head;
            head->prev = node;
            head = node;
        }
    }

    void moveHead(DoublyLL *node)
    {
        if (node == head && node == tail)
        {
            return;
        }
        else if (node == tail)
        {
            DoublyLL *p;
            p = node->prev;
            tail = p;
            p->next = NULL;
            node->next = head;
            head->prev = node;
            node->prev = NULL;
            head = node;
        }
        else if (head != node)
        {
            DoublyLL *p, *n;
            p = node->prev;
            n = node->next;
            p->next = n;
            n->prev = p;
            node->next = head;
            head->prev = node;
            node->prev = NULL;
            head = node;
        }
    }

    void delTail()
    {
        int key = tail->key;
        if (head == tail)
        {
            head = tail = NULL;
        }
        else
        {
            DoublyLL *p = tail->prev;
            p->next = NULL;
            delete(tail);
            tail = p;
        }
        cache.erase(key);
    }

public:
    LRUCache(int capacity)
    {
        this->capacity = capacity;
        head = NULL;
        tail = NULL;
    }

    int get(int key)
    {
        if (cache.find(key) == cache.end())
            return -1;
        DoublyLL *node = cache[key];
        int value = node->value;
        moveHead(node);
        PDLL(head);
        return value;
    }

    void put(int key, int value)
    {
        DoublyLL *node;
        if (cache.find(key) != cache.end())
        {
            node = cache[key];
            node->value = value;
        }
        else
        {
            if (curr == capacity)
            {
                delTail();
                --curr;
            }
            node = createNode(key, value);
            cache[key] = node;
            addNode(node);
            ++curr;
        }
        moveHead(node);
        PDLL(head);
    }

    void PDLL(DoublyLL *head)
    {
        DoublyLL *temp = head;
        cout << "**********************" << endl;
        while (temp != NULL)
        {
            cout << temp->key << " ";
            temp = temp->next;
        }
        cout << endl;
        cout << "**********************" << endl;
    }

};

int main()
{
    LRUCache l = LRUCache(2);
    l.put(1,1);
    l.put(2,2);
    cout << l.get(1) << endl;
    l.put(3,3);
    cout << l.get(2) << endl;
    l.put(4,4);
    cout << l.get(1) << endl;
    cout << l.get(3) << endl;
    cout << l.get(4) << endl;
    return 0;
}