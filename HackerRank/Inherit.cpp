#include <iostream>
#include <vector>

using namespace std;

class Person
{
protected:
		string firstName;
		string lastName;
		int id;
public:
		Person(string firstName, string lastName, int identification)
        {
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}

		void printPerson()
        {
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person
{
private:
	vector<int> testScores; 

public:
    string firstName;
    string lastName;
    int id;


    char calculate()
    {
        int n;
        for (int i : testScores) 
            n = n + i;
        
        n = n / testScores.size();

        switch (n / 10)
        {
            case 10:

            case 9: return 'O';

            case 8: return 'E';

            case 7: return 'A';
            
            case 6: 
            
            case 5: if (n >= 55)
                        return 'P';
                    else
                        return 'D';

            case 4: return 'D';
            
            default : return 'T';
        }
    }       
};

int main() 
{
	string firstName;
  	string lastName;
	int id;
  	int numScores;

	cin >> firstName >> lastName >> id >> numScores;
  	
    vector<int> scores;
  	for(int i = 0; i < numScores; i++)
    {
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}

	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
    
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}