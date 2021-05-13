#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    int ag, std;
    string fname, lname;
    
    void set_age(int age)
    {
        ag = age;
    }
    int get_age()
    {
        return ag;
    }

    
    void set_first_name(string first_name)
    {
        fname = first_name;
    }
    void get_first_name()
    {

    }


    void set_last_name(string last_name)
    {
        lname = last_name;
    }
    void get_last_name()
    {

    }


    void set_standard(int standard)
    {
        std = standard;
    }
    int get_standard()
    {
        return std;
    }

    void to_string()
    {
        // t_string = (string)age, 
    }

};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

