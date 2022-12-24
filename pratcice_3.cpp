// // queue using array.
// // in que remeneber front back pointe are inportaant beacuse we used first in first out oreation.
// #include<iostream>
// using namespace std;
// #define n 20


// class queue
// {
//     public:

//            int* arr;
//            int front;
//            int back;

//            queue()
//            {
//             arr=new int(n);
//             front =-1;
//             back=-1;
//            }

//            void push(char x)
//            {
//              if(back == n-1)
//              {
//                 cout<<"queue is overflow condition.";
//                 return ;
//              }
//              back++;
//              arr[back]=x;
//              if(front == -1)
//              {
//                 front++;
//              }
//            }

//            bool empty()
//            {
//             if(front == -1 || front >back)
//             {
//                 return true;
//             }
//             return false;
//            }

//            void pop()
//            {
//               if(front ==-1 || front >back)
//               {
//                 cout<<"queue is empty";
//                 return;
//               }
//               front++;
//            }

//            int peek()
//            {
//             if(front ==-1 || front >back)
//             {
//                 cout<<"queue is empty.";
//                 return -1;
//             }

//             return arr[front];
//            }
          
        
// };

// int main()
// {

//     queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.push(6);


//     cout<<q.peek()<<"\n";
//     q.pop();

//     cout<<q.peek()<<"\n";
//     q.pop();
//     cout<<q.peek()<<"\n";
//     q.pop();

//     cout<<q.peek()<<"\n";
//     q.pop();

//     cout<<q.empty();
//     return 0;
// }


// queue using linked list .

// #include<iostream>
// using namespace std;


// struct node
// {
//     int data;
//     struct node*next;
    

// };

// class queue
// {
//     public:
//     char var;
//     struct node*front;
//     struct node*back;
//     int f=-1;
//     int c=-1;

//     queue()
//     {
//         front=NULL;
//         back=NULL;
//     }

//     void push(char x)
//     {
//         struct node*p=new node();
        
//         if(front == NULL)
//         {
//             front=p;
//             back=p;
//             c++;
//             f++;
//             return;
//         }
//         back->data=x;
//         back->next=p;
//         back=p;
//         c++;
//         if(back->next == NULL)
//         {
//             back->next=front;
//         }

        

//     }

//     void  pop()
//     {
//         if(front == NULL)
//         {
//             cout<<"queue is empty.";
//             return;
//         }
//         struct node*p1;
//         p1=front;
//         var= p1->data;
//         front=front->next;
//         f++;
//         delete(p1);

       
       

//     }

//     int peek()
//     {
//         if(front==NULL)
//         {
//             cout<<"queue is empty";

//         }

//         return front->data;
//     }

//     bool empty()
//     {
//         if(front == NULL)
//         {
//             return true;
//         }
//         return false;
//     }

//     void display()
//     {
//          for(int i=f;i<c;i++)
//          {
//             cout<<front->data;
//             front=front->next;
//          }
//     }


          
// };


// int main()
// {

//     queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.display();
   
    

     
//     return 0;
// }


// queue using array

// #include<iostream>
// #define n 10
// using namespace std;

// class queue
// {
//     public:

//          int*arr;
//          int front;
//          int back;

//          queue()
//          {
//             arr=new int(n);
//             front=-1;
//             back=-1;
//          }

//          int isempty()
//          {
//             if(back == n-1)
//             { 
//                 return 1;

//             } 
//             return 0;
//          }

//          void push(int x)
//          {
//             if(back == n-1)
//             {
//                 cout<<"queue is full.";
//             }
            
//             back++;
//             arr[back]=x;
//             if(front == -1)
//             {
//                 front++;
//             }

//          }
//          int pop()
//          {
            
//             front++;
//          }
//          int peek()
//          {
            
//             return arr[front];
//          }

// };

// int main()
// {
//     queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     q.push(5);
//     q.push(6);
//     q.push(7);
//     q.pop();
//     q.pop();
//     cout<<q.peek();
//     return 0;
// }

// queue using circular queue.

 #include<iostream>
 using namespace std;

 struct node
 {
    int data;
    struct node*next;
 };

 class queue
 {
    public:
           struct node*front;
           struct node*back;

           queue()
           {
             front=NULL;
             back=NULL;
           }

           void push(int x)
           {

             struct node*p=new node();
             if( front == NULL)
             {
                front=p;
                back=p;
             }
             back->data=x;
             back->next=p;
             back=p;
             if(back->next ==NULL)
             {
                back->next=front;
             }
             
            }

            int pop()
            {
                struct node*p1;
                int val;
                p1=front;
                val=p1->data;
                front=front->next;
                delete(p1);
                return val;

            }

         int isempty()
         {
            if(front == NULL)
            {
                return 1;
            }
            return 0;
         }
           

       int peek()
       {
            return front->data;
       }
 };

 int main()
 {
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout<<q.pop();
    cout<<q.peek();
 }
 
 