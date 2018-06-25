#include <iostream>
#include <curses.h>
using namespace std;

int checkGameScore(char[]);
void drawToScreen(char[],int);
int main() {
	char t[9]={'1','2','3','4','5','6','7','8','9'};
	drawToScreen(t,9);//(sizeof(t)/sizeof(*t))
	char c;
	for(int i=0;i<9;i++){
		cin>>c;
		cout<<endl<<"i: "<<i;
		if(i%2==0){
			t[c-49]='X';
		}
		else{
			t[c-49]='O';
		}
		cout<<string(20,'\n');
		drawToScreen(t,9);
		if(i==8 && checkGameScore(t)==0)cout<<"Draw!";
		else if(checkGameScore(t)==1){
			cout<<"X won";
			break;
		}
		else if(checkGameScore(t)==2){
			cout<<"O won";
			break;
		}

	}
}

void drawToScreen(char tab[],int l){
	if(l!=9)return;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<tab[j+3*i]<<" ";
		}
		cout<<"\n";
	}
}
int checkGameScore(char t[]){
	if((t[0]+t[1]+t[2]=='X'*3)||(t[0]+t[3]+t[6]=='X'*3)||
		(t[3]+t[4]+t[5]=='X'*3)||(t[6]+t[7]+t[8]=='X'*3)||
		(t[1]+t[4]+t[7]=='X'*3)||(t[2]+t[5]+t[8]=='X'*3)||
		(t[0]+t[4]+t[8]=='X'*3)||(t[2]+t[4]+t[6]=='X'*3))return 1;
	else if((t[0]+t[1]+t[2]=='O'*3)||(t[0]+t[3]+t[6]=='O'*3)||
			(t[3]+t[4]+t[5]=='O'*3)||(t[6]+t[7]+t[8]=='O'*3)||
			(t[1]+t[4]+t[7]=='O'*3)||(t[2]+t[5]+t[8]=='O'*3)||
			(t[0]+t[4]+t[8]=='O'*3)||(t[2]+t[4]+t[6]=='O'*3))return 2;
	else return 0;
}
