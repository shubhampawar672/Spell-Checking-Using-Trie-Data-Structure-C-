#include "Trie.h"

trie::trie()
{
   root=new TreeNode();
}
void trie::insert(string word)
{
    TreeNode *currNode=root;
    for(char c: word)
    {
        if(currNode->chilldren[c-'a']==NULL)
        {
            currNode->chilldren[c-'a']=new TreeNode();
        }
        currNode=currNode->chilldren[c-'a'];
    }
    currNode->isComplete=true;
}
bool trie::search(string word)
{
    TreeNode *currNode=root;
    for(char c: word)
    {
        if(currNode->chilldren[c-'a']!=NULL)
        {
           currNode=currNode->chilldren[c-'a'];
        }
        else{
            return false;
        }
    }

    return currNode->isComplete;
    
}
bool trie::deleteWord(string word)
{
   TreeNode *currNode=root;
    for(char c: word)
    {
        if(currNode->chilldren[c-'a']!=NULL)
        {
           currNode=currNode->chilldren[c-'a'];
        }
        else{
            return false;
        }
    }
    currNode->isComplete=false;
    return true;
}
void trie::updateWord(string oldword,string newword)
{
   this->deleteWord(oldword);
   this->insert(newword);
}