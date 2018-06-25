#include <iostream>
using namespace std;

void drawToScreen(char);
int main() {
	char a[5];
	cout<<(sizeof(a)/sizeof(*a));
}

void drawToScreen(char tab[]){

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"";
		}
	}
}
