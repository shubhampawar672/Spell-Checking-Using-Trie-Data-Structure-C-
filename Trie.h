#include<iostream>
#include<string>

using namespace std;
struct TreeNode{
bool isComplete=false;
TreeNode* chilldren[26]={NULL};

};
class trie
{
    TreeNode *root;
    public:
    trie();
    void insert(string word);
    bool search(string word);
    bool deleteWord(string word);
    void updateWord(string oldword,string newword);
};