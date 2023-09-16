//given string is given in upper and lower case both we need to convert the whole string in either upper or lower case .
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str="asdfvfSDDFHGHJ";
    for(int i=0;i<str.size();i++)
    {
        if(str[i] >='a' && str[i] <='z')
        {
            str[i] = str[i] -32;
        }
        else if(str[i] >='A' && str[i] <='Z')
        {
            str[i] = str[i] +32;
        }
    }
    cout<<str; 

    return 0;
}

//convert the lower case string into uppercase string .
#include<iostream>
using namespace std;

int main()
{
    string str="sdxfcghbjnkml";
    for(int i=0;i<str.size();i++)
    {
        if(str[i] >='a' && str[i] <='z')
        {
            str[i]=str[i] - 32;
        }
    }
    //or 
    transform(str.begin(),str.end(),str.begin(), ::toupper);

    cout<<str;
    return 0;
}
//convert uppercase string into lower case.

#include<iostream>
using namespace std;

int main()
{
    string str="SADGFGHJK";
    for(int i=0;i<str.size();i++)
    {
        if(str[i] >='A' && str[i] <='Z')
        {
            str[i]=str[i] + 32;
        }
       
        
    }
    // or
    transform(str.begin(),str.end(),str.begin(), ::tolower);
    cout<<str;
    return 0;
}
//form the biggest number from the numeric string.
#include<iostream>
using namespace std;

int main()
{
    string str="1234567";
    sort(str.begin(),str.end(),greater<int>());
    cout<<str;
    return 0;
}
//print the maximum time of occurrence of charecter in a string .


#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="acaaahjkkliccccccccc";
    int len=str.size();
    int freq[len];
    for(int i=0;i<len;i++)
    {
        freq[i]=0;
    }
    for(int j=0;j<len;j++)
    {
       freq[str[j] - 'a']++;
    }
    char ans='a';
    int max_f=0;
    for(int i=0;i<len ;i++)
    {
        if(freq[i] > max_f)
        {
            max_f=freq[i];
            ans=i +'a'; // how it come not clear.
        }
    }
    cout<<max_f<<" "<<ans;
    return 0;
}
