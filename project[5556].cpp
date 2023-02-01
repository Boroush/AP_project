#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <string.h>
#include <cstdio>
using namespace std;

class member {
public:

  string username;
  string password;
  string firstname;
  string lastname;
  string birthdate;
  bool flag = true;

  fstream memberfile;
  vector < string > userpass;
  int j=-1;

  void sign_in() {
    
    cin >> username;
    cin >> password;
    cin >> firstname;
    cin >> lastname;
    cin >> birthdate;

    string info;
    info = username + " " + password + " " + firstname + " " + lastname + " " + birthdate;
    userpass.push_back(info);
    j++;
  }

  
  
  bool log_in(bool flag) {

    string inp_username;
    string inp_password;
    cout << "please enter your username and password: " << endl;
    cin >> inp_username;
    cin >> inp_password;

    memberfile.open("Membersfile.txt", ios::in);
    if (memberfile.is_open()) {
      string inp;
      vector <string> userpass;
      while (getline(memberfile, inp)) {
        istringstream ss(inp);
        string del;
        //j++;
        while (getline(ss, del, ' '))
        {
          userpass.push_back(del); 
        }
        if ((userpass[0] == inp_username) && (userpass[1] == inp_password)){
          flag = true;
          
         break;}
        else{
          flag = false;
        userpass.clear();


      }
    }
    return flag;
  }
  }
  bool borrow() {
      if (userpass[5] == "2") {
         cout << "you cant borrow books limit reached."
              return false;
      }
      else {
          if (userpass[5] == "0") {
              userpass[5] = "1";
              cout << "you can borrowed one book."
                  return true;}
          else {
              userpass[5] = "2";
              cout << "you can borrowed  one more book limit reached."
                  return true;
          }

          }

      }//end of borrow
  
    void m_retutn(){if (userpass[5] == "2") {
        userpass[5]=="1"
              return;
      }
      else {
          if (userpass[5] == "1") {
              userpass[5] = "0";
              
                  return;}
          
        
    }
 
      
  
void write_to_file() {
    if (memberfile.is_open()) {
        string to_file;
        int n = 0;
        bool check{ false };
        vector <string> tofile;
        while (getline(memberfile, to_file)) {
            if (n == j) {
                string perminant;
                for (int m = 0; m <= userpass.lenght(); m++) {
                    perminant = userpass[m] + perminant;
                }
                to_file = perminant;
                check = true;
            }

            tofile.push_back(to_file);

        }
        if (check == false) {
            for (int m = 0; m <= userpass.lenght(); m++) {
                perminant = userpass[m] + perminant;
            }
            to_file = perminant;
            tofile.push_back(to_file);
        }
        memberfile.close();
        char filename[] = ""Membersfile.txt";
            remove(filename);
        newfile

            if (newfile.is_open()) //checking whether the file is open
            {
                newfile << "Tutorials point \n";   //inserting text
                newfile.close();    //close the file object
            }

    }//وکتور توفایل باید بریزیم تو فایل جدید قدیمی رو پاک کنیم اسم فایلم عوض کنیم  
}

 };//end if class
  
class book{
    
    public:
    fstream bookfile;
    bool flag = true;
    string title;
    string shelfnumber;
    string authors;
    string edition;
    string publisher;
    string date;
    string ISBN;
    string lenght;
    string subjects;
    int j,m{-1};


    bool search_byname(bool flag){
        cout << "enter book title: " << endl;
        cin >> title;
        bookfile.open("bookfile", ios::in);
    if (bookfile.is_open()) {
      string inp;
      vector <string> booktitle;
      while (getline(bookfile, inp)) {
        j++;
        istringstream ss(inp);
        string del;
        while (getline(ss, del, ' '))
        {
          booktitle.push_back(del); 
        }
        if (booktitle[0] == title && booktitle[9]=="available"){
            cout<<"book succesfully borrowed";
            pubdate[9]=="notavailable";
            flag = true;
            return true;
        
        }
        else{
          flag = false;
        booktitle.clear();}
        if (flag==false){
            cout<<"book is not available";
            j=-1;
            return false;
        }
        
    }
    
}
    } 

    bool search_byauthor(bool flag) {
        cout << "enter book author" << endl;
        cin >> authors;
        bool f {false};
        bookfile.open("bookfile", ios::in);
        if (bookfile.is_open()) {
            string inp;
            vector <string> authorvec;
            while (getline(bookfile, inp)) {
                j++;
                istringstream ss(inp);
                string del;
                while (getline(ss, del, ' '))
                {
                    authorvec.push_back(del);
                }
                if (authorvec[2] == booktitle && authorvec[9]=="available") {
                    f = true;
                    out<<"book succesfully borrowed";
                    authorvec[9]=="notavailable";
                    f = true;
                    return true;
                    return f;
                    
                }
                else {
                    f = false;
                    authorvec.clear();
                }
                
            }
            if (f == false) {
                    cout << "book is not available or not registered";
                    j=-1;
                    return f;
                }
            
        }
    }

    bool search_bypublisher(bool flag) {
        cout << "enter name of publisher: " << endl;
        cin >> publisher;
        bookfile.open("bookfile", ios::in);
        if (bookfile.is_open()) {
            string inp;
            vector < string > publish;
            while (getline(bookfile, inp)) {
                j++;
                istringstream ss(inp);
                string del;
                while (getline(ss, del, ' '))
                {
                    publish.push_back(del);
                }
                if (publish[4] == publisher && publish[9]=="available") {
                    out<<"book succesfully borrowed";
                    pubdate[9]=="notavailable";
                    flag = true;
                    return true;
                }
                else {
                    flag = false;
                    publish.clear();
                }
               
                }
            } if (flag == false) {
                    cout << "book is not available";
                    j=-1;
                    return false;

        }
    }
    bool search_bydate(bool flag) {
        cout << "enter date of publication: " << endl;
        cin >> date;
        bookfile.open("bookfile", ios::in);
        if (bookfile.is_open()) {
            string inp;
            vector < string > pubdate;
            while (getline(bookfile, inp)) {
                istringstream ss(inp);
                string del;
                j++;
                while (getline(ss, del, ' '))
                {
                    pubdate.push_back(del);
                }
                if (pubdate[5] == date && pubdate[9]=="available") {
                    cout<<"book succesfully borrowed";
                    pubdate[9]=="notavailable";
                    flag = true;
                    return true;
                }
                else {
                    flag = false;
                    pubdate.clear();
                }
                
                

            }
            if (flag == false) {
                    cout << "book is not registered or not available";
                    j=-1;
                    return false;
                }

        }
    }
      
    void b_return(){
        bookfile.open("bookfile", ios::in);
        bool f{false};
        if (bookfile.is_open()) {
            string inp;
            vector <string> bookdata;
            int i=0;
            while (getline(bookfile, inp)) {
                m=i;
                bookdata[i]=inp;
                i++;}
            cout<<"enter the book title you want to return.";
            cin>>title;
            if (bookfile.is_open()) {
             string inp;
            vector <string> single_book_vec;
            for(int j=0, j<i;j++){
                istringstream ss(inp);
                string del;
                while (getline(ss, del, ' '))
            {
                single_book_vec.push_back(del);} 
                
            }
            if (single_book_vec[0]==title){
                single_book_vec[9]=="available";
                f=true;
                return;
                else
                single_book_vec.clear();
                
            }
            }
               
            }
            if (f==false){
                cout<<"book not registered"
                m=-1
                return;
            }
             
                
                
                
        }
                
            }//ened of return
        void write_to_file() {
    if (bookfile.is_open()) {
        string to_file;
        int n = 0;
        bool check{ false };
        vector <string> tofile;
        while (getline(memberfile, to_file)) {
            if (n == j) {
                string perminant;
                for (int m = 0; m <= userpass.lenght(); m++) {
                    perminant = userpass[m] + perminant;
                }
                to_file = perminant;
                check = true;
            }

            tofile.push_back(to_file);

        }
         if (check == false) {
            for (int m = 0; m <= userpass.lenght(); m++) {
                perminant = userpass[m] + perminant;
            }
            to_file = perminant;
            tofile.push_back(to_file);
        }
        memberfile.close();
        char filename[] = ""Membersfile.txt";
            remove(filename);
        newfile

            if (newfile.is_open()) //checking whether the file is open
            {
                newfile << "Tutorials point \n";   //inserting text
                newfile.close();    //close the file object
            }

    }//وکتور توفایل باید بریزیم تو فایل جدید قدیمی رو پاک کنیم اسم فایلم عوض کنیم  
}
    };
    
//error: cannot call member function ‘void hi::print()’ without object
int main(){
    member m1;
    book b;
    m1.log_in();
    if (m1.log_in() == false){
        cout << "you should sign in" << endl;;
        m1.sign_in;
    }
    else{
        string inp;
        cout << "welcome! if you want to borrow books enter B and if you want to return books enter R" << endl;
        cin >> inp;
        if (inp == "B") {
                string search_type;
                cout << "How do you want to search for books? enter A for author. enter N for book name. enter D for date of publication and enter P for publisher." << endl;
                cin >> search_type;
                if (search_type == "A")
                    
                    if (b.search_byauthor()==true){
                        m1.borrow();
                       // m1.write_to_file();
                        
                    }
                    
                    
                else if (search_type == "N")
                
                    if (b.search_byname()==true){
                        m1.borrow();
                       // m1.write_to_file();
                        
                    }
                else if (search_type == "D"){
                    if (b.search_byname()==true){
                        m1.borrow();
                       // m1.write_to_file();
                        
                    }
                }
                    //book::search_bydate;
                else
                    if (b.search_byname()==true){
                        m1.borrow();
                       // m1.write_to_file();
                        
                    }

            }
        else; {
            b.b_return();
            m1.m_retutn();
        }
    m1.write_to_file();
    b.write_to_file();
}






