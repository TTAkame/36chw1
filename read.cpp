#include<stdio.h>
#include<sstream>
#include<fstream>
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int value(const string& a){
	if(a=="new"){
		return 1;
	}
	else if(a =="used"){
		return 2;
	}
	else{
		return 3;
	}
}

struct book{
    int isbn;
    string langu;
    string version;

    book() : isbn(0), langu(""), version(""){}

    friend std::ostream& operator<<(std::ostream& os, const book& a){
            os<< a.isbn <<endl;
            os<< a.langu <<endl;
            os<< a.version <<endl;
    return os;
    }
}; 
    
    bool operator<(const book& a, const book& b){
	int k,j;
	
	if(a.isbn!=b.isbn){
		return a.isbn<b.isbn;
	}
	else{
		k=value(a.version);
		j=value(b.version);
		
		if(k!=j){
			return k<j;
		}
		else{
			return a.langu<b.langu;
		}
	}
    } 
    
       

    


int main(int argc, char* argv[]){

    cout<< argv[1] <<endl;

    vector<book> new1;

    ifstream nb(argv[1]);



    book wb;

    if(!nb){
        cout<<"erroropen";
    
    }
    string kn;
    string lan;
    string ver;
    string a;
    int b;
    cout<<"start reading"<<endl;

    while(getline(nb,kn)&&!kn.empty()){
        
        stringstream ss(kn);
        
        getline(ss,a,',');
        getline(ss,lan,',');
        getline(ss,ver);

    cout<<endl;
  
  //  cout<<a<<'x'<<lan<<'x'<<ver<<'x'<<endl;

        

    b = stoi(a);

    wb.isbn=b;
    wb.langu=lan;
    wb.version=ver;



        new1.push_back(wb);

        wb=book();
    }
    
    
    cout<<"total  "<<new1.size()<<endl<<endl;
    
    sort(new1.begin(),new1.end());

    for(auto i : new1) cout<< i <<endl;
    nb.close();
    return 0;
    
}
































