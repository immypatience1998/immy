#include <iostream>
#include<cstring>

using namespace std;

int main() {
	char myname[16];
	char studentname[21];
	char length[34];
	strcpy(myname,"immy patience");
	cout<<"Myname is:"<<myname;
	cout<<"\n.............\n"<<strlen(myname)<<endl;
	strcpy(studentname,"immyP");
	cout<<"The studentname is:"<<studentname;
	strcmp(myname,studentname);
	
	return 0;
}
