#include<iostream>
#include<vector>
#include "Trie.h"

#define underlineOn "\033[4m"
#define underlineOff "\033[0m"

using namespace std;

int main()
{
    vector<string>words={
        "character","cricket","ball","bat","book","cake","icecream","new","world","word","cat","dog","six","west","waste","hat",
        "hot","bath"
    };
    trie trieobj;
    for(auto x:words)
    {
        trieobj.insert(x);
        
    }
    
    trieobj.updateWord("cat","cap");
    string str="";
    while(true)
    {
        char ch=getchar();
        if(ch=='\n')
        {
            bool x=trieobj.search(str);
            if(!x)
            {
                
                cout << underlineOn << str << underlineOff <<" ";
            }
            break;
           
        }
        else if(ch==' ')
        {
            bool x=trieobj.search(str);
            if(!x)
            {
                
                cout << underlineOn << str << underlineOff<<" ";
            }
            str="";
        }
        else{
            str+=ch;
        }
    }
    // trieobj.deleteWord("cat");
    // trieobj.updateWord("car","cap");
    return 0;
}
