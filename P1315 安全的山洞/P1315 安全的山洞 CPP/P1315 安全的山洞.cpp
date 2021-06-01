#include<iostream>
#include<cstdlib>

using namespace std;

struct node
{
    int data;
    struct node* next;
};

int main()
{
    struct node* head, * p, * q;
    int n, m;
    while (cin >> n >> m)
    {
        head = p = (struct node*)malloc(sizeof(struct node));
        p->data = 1;
        for (int i = 2; i <= n; i++)
        {
            q = (struct node*)malloc(sizeof(struct node));
            q->data = i;
            p->next = q;
            p = q;
        }
        p->next = head;
        q = head;
        while (q->next != q)
        {
            if (m % 2 != 0)
            {
                for (int i = 0; i < m / 2; i++)
                {
                    p = q->next;
                    q = p->next;
                }
                p->next = q->next;
                //cout << q->data << " ";
                free(q);
                q = p->next;
            }
            else if (m % 2 == 0)
            {
                for (int i = 0; i < m / 2 - 1; i++)
                {
                    p = q->next;
                    q = p->next;
                }
                p = q->next;
                q->next = p->next;
                //cout << p->data << " ";
                free(p);
                q = q->next;
            }
        }
        cout << q->data << endl;
    }
    return 0;
}