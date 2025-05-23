#include <bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node* next;
	Node* prev;
}

void insert(Node* &head, int val){
	Node node = new Node;
	node->data = val;
	node->next = NULL;
	node->prev = NULL;

	if (head == NULL){
		head = node;
		return;
	}

	Node* curr = head;

	while(curr->next != NULL){
		curr = curr->next;
	}
	node->prev = curr;
	curr->next = node;
	return;
}

void insertAfter(Node* &head, int afterVal, int val){
	Node* node = new Node;
	node->data = val;
	node->next = NULL;
	node->prev = NULL;

	if (head == NULL) return;

	Node* curr = head;

	while(curr != NULL){
		if(curr->data == afterVal){
			node->next = curr->next;
			node->prev = curr;

			if (curr->next != NULL){
				curr->next->prev = node;
			}
			curr->next = node;
			break;
		}

		curr = curr->next;
	}

	return;
}

void remove(Node* &head, int val){
	if(head == NULL) return;

	if (head->data == val){
		Node* temp = head;
		head = head->next;
		if(head != NULL){
			head->prev = NULL;
		}
		delete temp;
		return;
	}
	
	Node* curr = head;

	while(curr != NULL){
		if (curr->data == val){
			if(curr->prev != NULL){
				curr->prev->next = curr->next;
			}
			if (curr->next != NULL){
				curr->next->prev = curr->prev;
			}
			delete curr;
			return;
		}
		curr = curr->next;
	}
}

void removeAfter(Node* &head, int val) {
	if (head == NULL) return;

	Node* curr = head;

	while (curr != NULL) {
		if (curr->data == val) {
			if (curr->next == NULL) return;

			Node* temp = curr->next;

			curr->next = temp->next;

			if (temp->next != NULL) {
				temp->next->prev = curr;
			}

			delete temp;
			return;
		}
		curr = curr->next;
	}
}



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	Node* head = NULL;

	return 0;
}