#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct TrieNode {
    int isEnd;
    struct TrieNode* children[26];
} TrieNode;

TrieNode* createNode() {
    TrieNode* node = (TrieNode*)malloc(sizeof(TrieNode));
    node->isEnd = 0;
    for (int i = 0; i < 26; i++) {
        node->children[i] = NULL;
    }
    return node;
}

void insert(TrieNode* root, const char* word) {
    TrieNode* curr = root;
    while (*word) {
        int idx = *word - 'a';
        if (!curr->children[idx]) {
            curr->children[idx] = createNode();
        }
        curr = curr->children[idx];
        word++;
    }
    curr->isEnd = 1;
}

int isContain(TrieNode* root, const char* word) {
    TrieNode* curr = root;
    while (*word) {
        int idx = *word - 'a';
        if (!curr->children[idx]) return 0;
        curr = curr->children[idx];
        word++;
    }
    return curr->isEnd;
}

void freeTrie(TrieNode* node) {
    for (int i = 0; i < 26; i++) {
        if (node->children[i]) {
            freeTrie(node->children[i]);
        }
    }
    free(node);
}

int main() {
    int n, m;
    int count = 0;

    scanf("%d %d", &n, &m);

    char** str = (char**)malloc(sizeof(char*) * n);
    for (int i = 0; i < n; i++) {
        str[i] = (char*)malloc(sizeof(char) * 501);
        scanf("%s", str[i]);
    }

    char** substr = (char**)malloc(sizeof(char*) * m);
    for (int i = 0; i < m; i++) {
        substr[i] = (char*)malloc(sizeof(char) * 501);
        scanf("%s", substr[i]);
    }

    TrieNode* root = createNode();
    for (int i = 0; i < n; i++) {
        insert(root, str[i]);
    }

    for (int i = 0; i < m; i++) {
        if (isContain(root, substr[i])) {
            count++;
        }
    }

    for (int i = 0; i < n; i++) free(str[i]);
    free(str);

    for (int i = 0; i < m; i++) free(substr[i]);
    free(substr);

    freeTrie(root);

    printf("%d\n", count);
}