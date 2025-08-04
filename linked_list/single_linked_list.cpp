#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;
};


void insert(Node*& head, int val) {
	Node* node = new Node;
	node->data = val;
	node->next = NULL;

	if (head == NULL) {
		head = node;
		return;
	}

	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}

	temp->next = node;
}

void remove(Node*& head, int val){
	if (head == NULL) return;

	if (head->data == val){
		Node* temp = head;
		head = head->next;
		delete temp;
		return;
	}

	Node* prev = head;
	Node* curr = head->next;

	while(curr != NULL){
		if(curr->data == val){
			prev->next = curr->next;
			delete curr;
			return;
		}
		prev = curr;
		curr = curr->next;
	}
}

void removeAll(Node*& head){
	if (head == NULL) return;

	while(head != NULL){
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

void update(Node*& head, int preVal, int newVal){
	if (head == NULL) return;

	Node* curr = head;
	while(curr != NULL){
		if(curr->data == preVal) {
			curr->data = newVal;
			return;
		}
		curr = curr->next;
	}
}


void print(Node* head) {
	if (head == NULL) return;

	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data;
		if (temp->next != NULL) cout << " -> ";
		temp = temp->next;
	}
	cout << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	// Node* head = NULL;
	//
	// int n;
	// cin >> n;
	//
	// while (n--) {
	// 	int t;
	// 	cin >> t;
	// 	insert(head, t); 
	// }

	// print(head);  
	// remove(head, 1);
	// print(head);
	// update(head, 4, 7);
	// print(head);

	return 0;
}
