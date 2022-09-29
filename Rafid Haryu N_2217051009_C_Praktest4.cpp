#include "iostream"
using namespace std;

int main (){
	int AP;
	int x, n;
	
	cin >> AP;
	cin >> n;
	
	
	for (int x = AP; x <= n; x+=AP ){
		cout << x << " ";
	}
	
	return 0;
}
