#include<stdio.h>
#include<sstream>
#include<fstream>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

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

    while(getline(nb,kn)){
        
        stringstream ss(kn);
        
        getline(ss,a,',');
        getline(ss,lan,',');
        getline(ss,ver);

//    cout<<a<<'x'<<lan<<'x'<<ver<<'x';

        

    int b = stoi(a);

    wb.isbn=b;
    wb.langu=lan;
    wb.version=ver;



        new1.push_back(wb);

        wb=book();
    }
    
    
    cout<<new1.size();

     for(auto i : new1) cout<< i <<endl;
    cout<<new1.at(1)<<endl;
    nb.close();
    return 0;
    
}





































File Edit Options Buffers Tools C++ Help
#include<stdio.h>
#include<sstream>
#include<fstream>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

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



int main(int argc, char* argv[]){

        cout<< argv[1] <<endl;

        vector<book> new1;

        ifstream nb(argv[1]);



        book wb;
-UU-:----F1  read.cpp       Top L1     (C++//l Abbrev) --------------------------------------------------------
read.cpp has auto save data; consider M-x recover-this-file

