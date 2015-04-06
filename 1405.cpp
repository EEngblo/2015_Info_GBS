#include <iostream>
using namespace std;
#define MAXN 100000

struct xy{
	int x;
	int y;
};

int compare(const void *va, const void *vb){
	struct xy *a, *b;
	a = (struct xy *)va;
	b = (struct xy *)vb;
	return a->x - b->x;
}

int main(){
	int n;
	struct xy arr[MAXN];

	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> arr[i].x >> arr[i].y;
	}

	qsort(arr, n, sizeof(arr[0]), compare);

	for (int i = 0; i < n; i++){
		cout << "(" << arr[i].x << "," << arr[i].y << ")" << endl;
	}

	return 0;
}