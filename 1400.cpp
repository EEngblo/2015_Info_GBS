#include <iostream>
using namespace std;
#define MAXN 100000

int main(){
	int n, m, temp, arr[MAXN] = {};

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = n-1; i >=n-m; i--){
		for (int j = 1; j <=i; j++){
			if (arr[j-1] > arr[j]){
				temp = arr[j-1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
		/*for (int j = 0; j < n; j++){
			cout << arr[j] << " ";
		}
		cout << endl; */
	}

	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}