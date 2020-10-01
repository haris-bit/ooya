#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Profile{
	private:
		
	//attributes	
	string name;
	int age;
	string city;
	string country;
	string pronouns;
	vector<string> hobbies;
	
	public:
		
	//methods
	
		
	Profile(string new_name, int new_age, string new_city, string new_country, string new_pronouns = "they/them")
	{
		name = new_name;
		age = new_age;
		city = new_city;
		country = new_country;
		pronouns = new_pronouns;
 
	}
	
	
	string view_profile()
	{
		string bio;
		bio = "Name: "+name;
		bio += "\nAge: "+to_string(age);
		bio += "\nCity: "+city;
		bio += "\nCountry: "+country;
		bio += "\nPronouns: "+pronouns; 
		
		string hobby_string = "Hobbies:\n";
		for(int i = 0; i<hobbies.size(); i++)
		{
			hobby_string += "-"+hobbies[i]+"\n";
		}
		return bio+"\n"+hobby_string;
	}
	
	
	
	void add_hobby(string new_hobby)
	{
		hobbies.push_back(new_hobby);
	}
};
int main()
{
	
	
	Profile sam("Sam Drakilla", 30, "New York", "USA", "he/him");
	sam.add_hobby("listening to audiobooks and podcasts");
	sam.add_hobby("playing rec sports like bowling and kickball.");
	sam.add_hobby("writing a speculative fiction novel.");
	sam.add_hobby("reading advice columns");
	cout<<sam.view_profile();
	return 0;
}
