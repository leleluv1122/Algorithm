#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Node {
	int x;
	int y;
	int idx;
	Node* left;
	Node* right;
};

vector<Node> tree;
vector<int> pre;
vector<int> post;

void insert(Node* parent, Node* child) {
	if (parent->x < child->x) {
		if (parent->right == NULL)
			parent->right = child;
		else
			insert(parent->right, child);
	}
	else {
		if (parent->left == NULL)
			parent->left = child;
		else
			insert(parent->left, child);
	}
}

bool compare(Node& a, Node& b) {
	if (a.y == b.y)
		return a.x < b.x;
	return a.y > b.y;
}

void preorder(Node* cur) {
	if (cur == NULL)
		return;
	pre.push_back(cur->idx);
	preorder(cur->left);
	preorder(cur->right);
}

void postorder(Node* cur) {
	if (cur == NULL)
		return;
	postorder(cur->left);
	postorder(cur->right);
	post.push_back(cur->idx);
}

vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
	for (int i = 0; i < nodeinfo.size(); i++)
		tree.push_back({ nodeinfo[i][0], nodeinfo[i][1], i + 1 });
	sort(tree.begin(), tree.end(), compare);
	
	Node* root = &tree[0];
	for (int i = 1; i < tree.size(); i++)
		insert(root, &tree[i]);
	preorder(root);
	postorder(root);

	vector<vector<int>> answer;
	answer.push_back(pre);
	answer.push_back(post);

	return answer;
}

int main() {
	vector<vector<int>> r;
	r.resize(9);

	r[0].push_back(5);
	r[0].push_back(3);
	r[1].push_back(11);
	r[1].push_back(5);
	r[2].push_back(13);
	r[2].push_back(3);
	r[3].push_back(3);
	r[3].push_back(5);
	r[4].push_back(6);
	r[4].push_back(1);
	r[5].push_back(1);
	r[5].push_back(3);
	r[6].push_back(8);
	r[6].push_back(6);
	r[7].push_back(7);
	r[7].push_back(2);
	r[8].push_back(2);
	r[8].push_back(2);

	vector<vector<int>> result = solution(r);
}