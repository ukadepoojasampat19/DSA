// create the data base of student .
// 1)arrang the roll number in the ascending order (bubble sort);
// 2)insertion sort for sortng names in aseding order
// 3)quick_sort on SGPA
// 4)linear search onsgpa if same then print all the record.

// #include<iostream>
// #include<cstring>
// using namespace std;


// struct student{
//     int roll_no;
//     char name[20];
//     float SGPA;

// }s; 

// void getdata(student s[],int n);
// void display(student s[],int n);
// void bubble_sort(student s[],int n,int count);
// void insertion_sort(student s[],int n);
// // void quick_sort(student s[],int l,int u);
// // int partition(student s[],int l,int u);
// void linear_search(student s[],int n);
// int binary_search(student s[],int n,char name[],int l,int u);

// int main()
// {
//     student s[5];
//     int count=0;
//     // creation of data of 10 student 

//     getdata(s,5);
//     display(s,5);
//     // sorting roll numbers.
//     cout<<"\n";
//     cout<<"bubble sort";
//     cout<<"\n";
//     bubble_sort(s,5,count);
//     display(s,5);

//     // insertion sorting on the based of name;

//     insertion_sort(s,5);
//     cout<<"\n";
//     cout<<"Insertion sort\n";
//     display(s,5);

//     // quick sort .
//     // int l=0;
//     // int u=4;
//     // quick_sort(s,l,u);
//     // cout<<"\n";
//     // cout<<"quick sirt\n";y
//     // display(s,5);

//     // linear serach on sgpa.
//     cout<<"linear search on sgpa.\n";
//     linear_search(s,5);

//     // binary search on names
//     char name[10];
//     cout<<"Which name you want to search: ";
//     cin>>name;
//     int l=0;
//     int u=4;

//     cout<<binary_search(s,5,name,l,u);
    
    
//     return 0;
// }

// void getdata(student s[],int n)
// {

//      for(int i=0;i<n;i++)
//      {
//         cout<<"Enter your name: ";
//         cin>>s[i].name;
//         cout<<"Enter your roll_no: ";
//         cin>>s[i].roll_no;
//         cout<<"Enter your SGPA: ";
//         cin>>s[i].SGPA;
//     }
// }

// void display(student s[],int n)
// {
//     cout<<"ROLL_NO"<<"\t"<<"NAME"<<"\t"<<"SGPA"<<"\n";
//     for(int i=0;i<n;i++)
//      {

//        cout<<s[i].roll_no<<"\t"<<s[i].name<<"\t"<<s[i].SGPA<<"\n";
//      }
// }

// void bubble_sort(student s[],int n,int count)
// {
//       while(count < n)
//       {
//         for(int i=0;i<n-count;i++)
//         {
//             // sort on the bases of roll-no
//             if(s[i].roll_no > s[i+1].roll_no)
//             {
//                 student temp;
//                 temp=s[i];
//                 s[i]=s[i+1];
//                 s[i+1]=temp;
//             }
//         }
//         count++;
//       }
// }

// void insertion_sort(student s[],int n)
// {
//     int i,j;
//     for(i=0;i<n;i++)
//     {
//         student temp=
//         temp=s[i+1];
//         j=i-1;
//         // j=0;
//         while(j>=0 && strcmp(s[j].name,temp.name) >0)
//         {
//             s[j +1]=s[j];
//             j=j-1;
//         }
//         s[j+1]=temp;
//     }


// }

// void quick_sort(student s[],int l,int u)
// {
//     int j;
//     if(l<u)
//     {
//         j=partition(s,l,u);
//         quick_sort(s,l,j-1);
//         quick_sort(s,j+1,u);

//     }
// }

// int  partition(student s[],int l,int u)
// {
//     student temp,p;
//     p=s[l];
//     int i=1;
//     int j=u+1;
//     do
//     {
//         do
//         {
//            i++;
//         } while (s[i].SGPA < p.SGPA);
//         do
//         {
//            j--;
//         } while (s[j].SGPA > p.SGPA);
//         if(i<j)
//         {
//             temp=s[i];
//             s[i]=s[j];
//             s[j]=temp;
//         }
//         } while (i<j);
//         s[l]=s[j];
//         s[j]=p;

//         return j;
    
    
// }

// void linear_search(student s[],int n)
// {
//    for(int i=0;i<n;i++)
//    {
//      if (s[i].SGPA == s[i+1].SGPA)
//      {
//         cout<<"\n"<<"the student having same SGPA are given below\n.";
//          cout<<s[i].name<<"\t"<<s[i].roll_no<<"\t"<<s[i].SGPA<<"\n";
//         cout<<s[i+1].name<<"\t"<<s[i+1].roll_no<<"\t"<<s[i+1].SGPA<<"\n";
//      }
     
//    }
// }

// int  binary_search(student s[],int n,char name[],int l,int u)
// {
//       int mid;
//       while(l<=u)
//       {
//         if(strcmp(name,s[mid].name)==0)
//         {
//             return mid;
//         }
//         else if(strcmp(name,s[mid].name)<0)
//         {
//             u=mid -1;
//         }
//         else{
//             l=mid + 1;
//         }
//       }
//       return -1;
// }



#include<iostream>
#include<cstring>
using namespace std;

struct student
{
    int roll_no;
    char name[10];
    float sgpa;
};

void getdata(struct student s[],int n);
void display(struct student s[],int n);
void bubble_sort(struct student s[],int n,int count);
void insertion_sort(struct student s[],int n);
void quick_sort(struct student s[],int l,int u);
int partition(struct student s[],int l,int u);
void linear_search(struct student s[],int n,float num);
int  binary_search(struct student s[],int n,int l,int u,int num);


int main()
{

    struct student s[5];
    int count=0;
    getdata(s,5);
    // display(s,5);
    // bubble sort.
    // bubble_sort(s,5,count);
    // display(s,5);
    // insertion sort;
    // insertion_sort(s,5);
    // display(s,5);
    // int l=0;
    // int u=5;
    // quick_sort(s,l,u);
    // display(s,5);
    // linear search
    // float num;
    // cout<<"Enter the sgpa you want to search: ";
    // cin>>num;
    // linear_search(s,5,num);
    //binary search .
    float num;
    cout<<"Enter the sgpa you want to search: ";
    cin>>num;
    int l=0;
    int u=5;
    binary_search(s,5,l,u,num);
    // the criteria for binary serach is the arry should in the sorted order.








    return 0;
}

void getdata(struct student s[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter your roll no: ";
        cin>>s[i].roll_no;
        cout<<"Enter your name: ";
        cin>>s[i].name;
        cout<<"Enter your sgpa: ";
        cin>>s[i].sgpa;

    }
}

void display(struct student s[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<s[i].roll_no<<"\t"<<s[i].name<<"\t"<<s[i].sgpa<<"\n";
    }

    
}

void bubble_sort(struct student s[],int n,int count)
{
    struct student temp;
    while(count < n)
    {
        for(int i=0;i<n-count;i++)
        {
            if(s[i].roll_no>s[i+1].roll_no)
            {
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
            }
        }
        count++;
    }
}

void insertion_sort(struct student s[],int n)
{
    struct student temp;
    int i,j;
    for(int i=0;i<n;i++)
    {
        struct student temp=s[i+1];
        j=1-1;
        while(j>=0 &&  strcmp(s[j].name,temp.name)>0 )
        {
            s[j+1]=s[j];
            j=j-1;
        }
        s[j+1]=temp;
    }



}

void quick_sort(struct student s[],int l,int u)
{
    int t;
    if(l<u)
    {
        t=partition(s,l,u);
        quick_sort(s,l,t-1);
        quick_sort(s,t+1,u);
    }

}

int partition(struct student s[],int l,int u)
{
    struct student temp,val;
    int i=l;
    int j=u+1;
    temp=s[l];
    do
    { 
        do{
        i++;
    }while(s[i].sgpa < temp.sgpa);
    do
    {
        j--;
    } while (s[j].sgpa > temp.sgpa);
    if(i<j)
    {
        val=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
        
    } while (i<j);
    s[l]=s[j];
    s[j]=val;
    
    
    return j;
    

}

void linear_search(struct student s[],int n,float num)
{
    for(int i=0;i<n;i++)
    {
        if(s[i].sgpa == num)
        {
            cout<<"record found:\n";
            cout<<s[i].roll_no<<"t"<<s[i].name<<"\t"<<s[i].sgpa;
        }
      
    }
}

int  binary_search(struct student s[],int n,int l,int u,int num)
{
    int mid;
    // without recurrsion serach an element in array.
    while(l<=u)
    {
        mid=(l+u)/2;

    if(s[mid].sgpa == num)
    {
        return mid;
    }
    else if(num < s[mid].sgpa)
    {
    
        u=mid -1;
    }
    else{
        l=mid + 1;
    }
    }
    return -1;
}
// remaing to learn;