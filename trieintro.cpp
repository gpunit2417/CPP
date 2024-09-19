#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* child[26];
    bool isTerminal;
    TrieNode(char ch){
        data = ch;
        for(int i = 0; i<26; i++){
            child[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;
    Trie(){
        root = new TrieNode('\0');
    }
    void insertUtil(TrieNode* root , string word){
        //base case
        if(word.length() == 0){
            root->isTerminal=true;
            return;
        }

        //assumption that word will be in caps
        int index = word[0] - 'A';
        TrieNode* children;

        //present
        if(root->child[index] != NULL){
            children = root->child[index];
        }
        else{
            //absent
            children = new TrieNode(word[0]);
            root->child[index] = children;
        }

        //recursion
        insertUtil(children, word.substr(1));
    }
    void insertWord(string word){
        insertUtil(root, word);
    }

    //search function
    bool searchUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            return root->isTerminal;
        }
        int index = word[0] - 'A';
        TrieNode* children;

        //present
        if(root->child[index] != NULL){
            children = root->child[index];
        }
        else{
            //absent
            return false;
        }

        //recursion
        searchUtil(children, word.substr(1));
    }

    void searchWord(string word){
        searchUtil(root, word);
    }
};
int main(){
    Trie *t = new Trie();
    t->insertWord("punit");
    cout<<"hello world "<<endl;
    cout << "present or not " << t->searchWord("punit") << endl;

    return 0;

}