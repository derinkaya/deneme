#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

void makePerm(vector<string> &arr, vector<string> &data, int start, int end, int index, int r) {
    fprintf(stderr, "0start:%d end:%d index:%d r:%d\n", start, end, index, r);
    if (index == r)
    {
        for (int j = 0; j < r; j++)
            cout << data.at(j) ;
        cout << endl;
        return;
    }
 
    for (int i = start; i <= end && end - i + 1 >= r - index; i++)
    {
        fprintf(stderr,"1start:%d end:%d index:%d r:%d i:%d\n", start, end, index, r,i);
        data.at(index) = arr.at(i);
        makePerm(arr, data, i + 1, end, index + 1, r);
    	fprintf(stderr,"2start:%d end:%d index:%d r:%d i:%d\n", start, end, index, r, i);
    }
}

vector<string> perm(vector<string> &x) {
	vector<string> data;
	data.resize(x.size());
	std::cout<<"Size : " << x.size() << endl;
	makePerm(x, data, 0, x.size()-1, 0, x.size());	
}


int main(){
	vector<string> a;
	a.push_back("1");
	a.push_back("2");
        a.push_back("3");
        a.push_back("4");
	vector<string> perms=perm(a);
	/*
	for (int i=0; i<perms.size(); i++) {
		cout << perms.at(i) << endl;
	}*/
	return 0;
}

