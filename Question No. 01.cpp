/*____________________________________________________
1.Iterate Through Vector Using Iterators and print all pushed elements.
 Next you need to push integer 5 and remove element at that position.
KASHIF NADEEM KAYANI      456 466          ME 15 A
*/

#include<iostream>
#include<vector> 
using namespace std;
int main(){
	
	vector<int> v;
	v.push_back(4);
	v.push_back(6);
	v.push_back(9);
	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(8);
	v.push_back(12);
	v.push_back(23);
	v.push_back(55);
	v.push_back(13);
	v.push_back(28);
	v.push_back(90);
	vector<int>::iterator it;
	for (it=v.begin(); it!=v.end();it++ ){
		cout<<*it<<" ";
	}
	cout<<endl;


v.erase(v.begin() + 4, v.begin()+5);

v.insert(  v.begin()+4, 5);

	for (it=v.begin(); it!=v.end();it++ ){
		cout<<*it<<" ";
	}
	
	return 0;
}
