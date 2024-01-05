#include<iostream>
using namespace std;


class TrieNode{
  public: 
    char data;
    bool isTerminal;
    TrieNode* children[26];

    TrieNode(char data){
        this->data = data;
        this->isTerminal = false;
        for(int i=0; i<26; i++){
            this->children[i] = NULL;
        }
    }
};



// insertion in Trie
void insertionInTrie(TrieNode* root, string word){
    cout<<word<<" ";

    // base case
    if(word.length() == 0){
        root->isTerminal = true;
        return;
    }

    // 1 case mai solve krunga
    char ch = word[0];
    int index = ch-'a';
    TrieNode* child;
    if(root->children[index] != NULL){
        // present
        child = root->children[index];
    }
    else{
        // absent
        child = new TrieNode(ch);
        root->children[index] = child;
    }


    // baaki recursion sambhal lega
    insertionInTrie(child, word.substr(1));

}




// searching in Trie
bool searchingInTrie(TrieNode* root, string word){
    // base case
    if(word.length() == 0){
        return root->isTerminal;
    }

    // 1 case mai solve karunga
    char ch = word[0];
    int index = ch-'a';
    TrieNode* child;
    if(root->children[index] != NULL){
        // present
        child = root->children[index];
    }
    else{
        // absent
        return false;
    }

    // baaki recurion sambhal lega
    return searchingInTrie(child, word.substr(1));
}



void deleteWordFromTrie(TrieNode* root, string word){
    // base case
    if(word.length() == 0){
        root->isTerminal = false;
        return;
    }

    // 1 case mai solve karunga
    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;
    if(root->children[index] != NULL){
        // present
        child = root->children[index];
    }
    else{
        // absent
        return;
    }

    // bakai recurison sambhal lega
    deleteWordFromTrie(child, word.substr(1));
}










int main(){
    TrieNode* root = new TrieNode('_');


    // insert
    insertionInTrie(root, "lokesh");
    cout<<endl;
    insertionInTrie(root, "singh");
    cout<<endl;
    insertionInTrie(root, "babu");
    cout<<endl;
    insertionInTrie(root, "sona");
    cout<<endl;
    insertionInTrie(root, "baby");
    cout<<endl;
    insertionInTrie(root, "cutie");
    cout<<endl;
    insertionInTrie(root, "cutiepie");
    cout<<endl;
    insertionInTrie(root, "jaan");
    cout<<endl;
    insertionInTrie(root, "jaanu");
    cout<<endl;
    insertionInTrie(root, "sundar");
    cout<<endl;
    insertionInTrie(root, "sundari");
    cout<<endl<<endl;


    // search
    string str2 = "baby";
    bool searchResult = searchingInTrie(root, str2);
    if(searchResult){
        cout<<str2<<" Found"<<endl;;
    }
    else{
        cout<<str2<<" Not Found"<<endl;
    }


    // delete
    string del = "sundar";
    deleteWordFromTrie(root, del);
    if(searchingInTrie(root, del)){
        cout<<del<<" Found"<<endl;;
    }
    else{
        cout<<del<<" Not Found"<<endl;
    }



}