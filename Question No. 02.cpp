/*____________________________________________________
Write a complete C++ program that uses 2 vectors, 1 for names (string) and 1 for grades (int) 
Ask the user for the number of name/grade pairs that will be entered.
Display the mean of the grades.
Display the median of the grades.
Display the mode of the grades.
Display the names of the students with the mode as their grade.
KASHIF NADEEM KAYANI      456 466          ME 15 A
*/

#include <iostream>
#include <vector>


using namespace std;

void vsort(vector<int> vec, float a){
	int temp;
	for (int i=0; i<a; i++){
		for (int j=0;j<a-1;j++){
			if  ( vec[j] > vec[j+1]) {
			temp= vec[j];
			vec[j]=vec[j+1];
			vec[j+1]= temp;
			
			}
			
			
		}
	}
	if ( int (a)%2 !=0 )
{
	cout<<" median of grades is: "<<vec[(a)/2]<<endl;
	}	
	
	else {
		cout<<"The median of grades is: "<<vec[(a+1)/2]<<" "<<vec[(a+3)/2]<<endl;
	}
}


int main() {
     vector<int> v;
   vector<string> a;
 string name;
 float n, grade , sum;
 cout<<" Enter the number of students: ";
 cin>>n;
 for ( int i=0;i<n;i++){
 	cout<<"Enter the name of student: "<<endl; cin>>name;
 	cout<<" enter the grades of student: "<<endl; cin>>grade;
 	a.push_back(name);
 	v.push_back(grade);
 	 sum=+grade;
 }
 cout<<"the mean of grades is:  "<<sum/n<<endl;
 
 vsort (v,n);
 
 
 int MostRepeated=-1;   //intialize with invalid value
  int Frequency=0; 
 	
 	for (size_t i=0;i<v.size(); i++ ){
 		int count =0;
 	for (size_t j=i+1; j<v.size() ; j++){
	 if (v[i]== v[j])
{
	count++;
	 }	 
	 }
	 if (count > Frequency){
	 	Frequency = count;
	 	MostRepeated= v[i];
	 }
	 }
 	
 	if (MostRepeated != -1){
 		cout<<"Mode Of Grades "<<MostRepeated<<endl;
	 }
	 else{
	 	cout<<"Grade Don't have a mode value"<<endl;
	 }
	 
	 for (int i=0; i<n ;i++){
	 	
	 	cout<<"student "<<a[i]<<" has "<<v[i]<<" grades "<<endl;
	 }
	 
 
 
 
    return 0;
}

