#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

struct Song
{
	string title;
	string artist;
	int year;
	string producer;
};

int main(int argc, const char * argv[])
{
	Song song1, song2, song3;
	song1.title = "Girls Like You";
	song1.artist = "Maroon 5";
	song1.year = 2017;
	song1.producer = "Jason Evigan";

	song2.title = "SICKO MODE";
	song2.artist = "Travis Scott";
	song2.year = 2018;
	song2.producer = "Tay Keith";

	song3.title = "7 Rings";
	song3.artist = "Ariana Grande";
	song3.year = 2019;
	song3.producer = "Tommy Brown";

	vector<Song> mySongs;
	mySongs.push_back(song1);
	mySongs.push_back(song2);
	mySongs.push_back(song3);

	for (auto x : mySongs)
	{
		cout << x.title << " by " << x.artist << " was released in " << x.year << " and produced by " << x.producer << "." << endl;
	}

	system("pause");
	return 0;
}