/*
#include<iostream>
using namespace std;

struct node
{
    char data;
    struct node*next;
};

class stack
{
    struct node*top;
    public:

          stack()
          {
            top=NULL;
          }

          int isempty()
          {
            if(top==NULL)
            {
                return 1;
            }
            return 0;
          }
          void push(int x)
          {
             struct  node*p;
              p=new node();
              p->data=x;
              p->next=top;
              top=p;

          }
          int pop()
          {
            char x;
            struct node *p;
            p=top;
            x=p->data;
            top=top->next;
            delete(p);
            return x;
          }

          char topdata()
          {
            return top->data;
          }
};
void infix_postfix(char infix[],char postfix[]);
int precendence(char val);
void infix_prefix(char reverse[],char prefix[]);
void reverse(char infix[],char Reverse[]);

int main()
{
//    char postfix[20],infix[20],token;
//    int token,x;
//    cout<<"Enter the infix expreation: ";
//    cin>>infix;
// //    infix to post fix conversion
//    infix_postfix(infix,postfix);
   

//    infix to prefix conversion.
char infix[20],prefix[20],Reverse[20];
for(int i=0;i<5;i++)
{
    cin>>infix[i];
}
for(int i=0;i<5;i++)
{
    cout<<infix[i];
}
cout<<"\n";
cout<<"given array in the reverse order\n";
   reverse(infix,Reverse);
   cout<<"exepreation in the reverse order";
   for(int i=0;Reverse[i]!='\0';i++)
   {
      cout<<Reverse[i];
   } 
  infix_prefix(Reverse,prefix);
  cout<<"prefix exepreation \n";
  for(int i=5;i>=0;i--)
  {
    cout<<prefix[i];
  }
   return 0;
}
// infix to post conversion.

// void infix_postfix(char infix[],char postfix[])
// {
//     stack s;
//     int i,j;
//     char x;
//     j=0;
//     char token;
//     for(int i=0;infix[i]!='\0';i++)
//     {
//        token=infix[i];
//        if(isalnum(token))
//        {
//           postfix[j]=token;
//           j++;
//        }
//        else if(token == '(')
//        {
//         s.push(token);
//        }
//        else if(token ==')')
//        {
//         while((x=s.pop())!='('){
//             postfix[j]=x; 
//             j++;
//         }
//        }
//        else{
//         while(s.isempty()!=1 && precendence(token) <= precendence(s.topdata()))
//         {
//            char x= s.pop();
//            postfix[j]=x;
//            j++;
//         }
//         s.push(token);
//        }
//     }
// }

int precendence(char val)
{
    if(val =='(')
    {
        return 0;
    }
    else  if(val == '+' || val =='-')
    {
        return 1;
    }
    else if(val == '*' || val =='/' || val=='%')
    {
        return 2;
    }
    else 
    {
        return 3;
    }

}
// infix to prefix.

void infix_prefix(char Reverse[],char prefix[])
{
    stack s;
    int i,j=0;
    char val;


    for(i=0;i<5;i++)
    {
      char x=Reverse[i];
       if(isalnum(x))
       {
         prefix[j]=x;
         j++;
       }
       else if(x=='(')
       {
         s.push(x);
       }
       else if(x==')')
       {
        
         while((val=s.pop())!='(')
         {
              prefix[j]=x;
              j++;
         }
       }

       else{
         if(s.isempty()!=1 && (x) <= precendence(s.topdata()))
         {
           prefix[j]= s.pop();
           j++;
         }
         else{
            s.push(x);
         }
       }
       
    }
      
      
}

 void reverse(char infix[],char Reverse[])
 {
    char token;
    int i,j=0;

      for(i=0;infix[i]!='\0';i++)
      {
        token=infix[i];
        if(token =='(')
        {
            Reverse[j]=')';
            j++;
        }
        else if (token == ')')
        {
            Reverse[j]='(';
            j++;
        }
        else if(isalnum(token))
        {
            Reverse[j]=token;
            j++;
        }
        else
        {
            Reverse[j]=token;
            j++;
        }
        
      }
 }*/

 #include<iostream>
 using namespace std;

 struct node
 {
   char data;
   struct node*next;

 };

 class stack
 {
   struct node*top;

     public:

          stack()
          {
              top=NULL;
          }

          int isempty()
          {
            if(top==NULL)
            {
              return 1;
            }
            return 0;
          }
          void push(char x)
          {
            struct node*p=new node();
            p->data=x;
            p->next=top;
            top=p;
          }
         int  pop()
          {
            // remove and delete the node
            struct node*p1;
            int val;
            p1=top;
            val=p1->data;
            top=top->next;
            delete(p1);
            return val;

          }

          char top_data()
          {
            return top->data;
          }
 };
//  elvauation of postfix expretion.
// int postfix_con(char postfix[],int size);
// int opreator(int opd_2,int opd_1,char val);
// prefix

int prefix_con(char prefix[],int size);
int opreator(int opd_2,int opd_1,char val);


int main()
{
  // post fix

  // int size;
  // cout<<"Enter the size of your expreation: ";
  // cin>>size;
  // char postfix[size],evaluated[size];
  // cout<<"Enter the element of experation: ";
  // for(int i=0;i<size;i++)
  // {
  //     cin>>postfix[i];
  // }
  // cout<<"Enter experation is: \n";
  //  for(int i=0;i<size;i++)
  //  {
  //     cout<<postfix[i];
  //  }
  //  cout<<"\n";
  // cout<<"the final value is: "<<postfix_con(postfix,size);


  // prefix sathi


  int size;
  cout<<"Enter the size of your expreation: ";
  cin>>size;
  char prefix[size],evaluated[size];
  cout<<"Enter the element of experation: ";
  for(int i=0;i<size;i++)
  {
      cin>>prefix[i];
  }
  cout<<"Enter experation is: \n";
   for(int i=0;i<size;i++)
   {
      cout<<prefix[i];
   }
   cout<<"\n";
  cout<<"the final value is: "<<prefix_con(prefix,size);
  return 0;
}
// evaluation of postfix expreation.

// int postfix_con(char postfix[],int size)
// {
//   stack s;
//   char val;
//   for(int i=0;i<size;i++)
//   {
//      val=postfix[i];

//      if(isalnum(val))
//      {
//        s.push(val);
//      }
//      else{
//            int opd_2;
//            int opd_1;
//            opd_2=s.pop();
//            opd_1=s.pop();
//            int result=opreator(opd_2,opd_1,val);
//            s.push(result);
//      }

//   }
//   return s.pop();
// }

// int  opreator(int opd_2,int opd_1,char val)
// {
//     if(val =='+')
//     {
//         return opd_1 + opd_2;
//     }
//     else if(val =='-')
//     {
//         return opd_1 - opd_2;
//     }
//     else if(val =='*')
//     {
//         return opd_1 * opd_2;
//     }
//     else if(val =='%')
//     {
//         return opd_1 % opd_2;
//     }
//     else{
//       return opd_1 / opd_2;
//     }


// }

// evaluation of prefix experation .


int prefix_con(char prefix[],int size)
{
  stack s;
  char val;
  for(int i=size-1;i>=0;i--)
  {
     val=prefix[i];

     if(isalnum(val))
     {
       s.push(val);
     }
     else{
           int opd_2;
           int opd_1;
           opd_2=s.pop();
           opd_1=s.pop();
           int result=opreator(opd_2,opd_1,val);
           s.push(result);
     }

  }
  return s.pop();
}

int opreator(int opd_2,int opd_1,char val)
{
    if(val =='+')
    {
        return opd_2 + opd_1;
    }
    else if(val =='-')
    {
        return opd_2 - opd_1;
    }
    else if(val =='*')
    {
        return opd_2 * opd_1;
    }
    else if(val =='%')
    {
        return opd_2 % opd_1;
    }
    else{
      return opd_2 / opd_1;
    }
}