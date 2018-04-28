using namespace std;
#include <bits/stdc++.h>
#define ALPHABET_SIZE 26
#define CHAR_TO_INT(c) ((int)c - (int)'a') 

typedef struct Node{
	struct Node *child[ALPHABET_SIZE];
	bool isLeaf;

} Node;

Node* initialize(void){
	Node* root = NULL;
	root = (Node*)malloc(sizeof(Node));
	if(root){
		root->isLeaf = false;
		for(int i = 0; i<ALPHABET_SIZE; i++){
			root->child[i] = NULL;
		}

	}
	return root;
}

bool addWord(Node *root, string s){
	int l = s.length();
	int index;
	Node *parent = root;
	for (int i = 0; i < l; ++i)
	{
		index = CHAR_TO_INT(s[i]);
		if(parent->child[index]==NULL){
			parent->child[index] = initialize();
		} 
		parent = parent->child[index];
	}
	parent->isLeaf = true;
	return true;
}

bool searchWord(Node *root, string s){
	int l = s.length();
	int index;
	Node *parent = root;
	for (int i = 0; i < l; ++i)
	{
		//Node *child;
		index = CHAR_TO_INT(s[i]);
		if(parent->child[index]==NULL) return false;
		parent = parent->child[index];
	}
	return (parent!=NULL && parent->isLeaf);
}

int main() {
   	ios_base::sync_with_stdio(0);cin.tie(NULL);
   	//Solution
	
   	Node *root = initialize();

   	while(true){
   		int type;
   		string word;
   		cin >> type;
   		cin >> word;
   		if(type == 1){
   			if(addWord(root, word))
   				cout <<  word << " was added!!" << endl;
   			else
   				cout <<  "Error :(" << endl;
   		}else{
   			if(searchWord(root, word))
   				cout <<  word << " is in!!" << endl;
   			else
   				cout << word << " is not in :(" << endl;
   		}


   	}
   	
   	return 0;
}


//g++-4.9 Trie.cpp -o Trie && ./Trie < Trie.in > Trie.out