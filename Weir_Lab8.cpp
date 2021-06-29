//**********************************************
//Programmer: Megan Weir
//Completed : 10/29/2019
//Status    : Complete
//
// This program receives 10 user input songs and artists, sorts them
// in ascending order by artist, and then outputs the playlist.

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manipulator declarations
#include <cmath>		// math algorithms
using namespace std;	// declare namespace


// structure for playlist array
struct SongInfo
{	
	string artist;
	string title;
};

// function prototypes
void getData(SongInfo [], int);
void artistSort(SongInfo [], int);
void swap(string &, string &);
void displayPlaylist(SongInfo [], int);
	
int main()
{	
	const int TOTAL = 10;
	SongInfo playlist[TOTAL];			// declare Playlist array of structure

	cout << "Create playlist of 10 artists and their songs.\n\n";
	getData(playlist, TOTAL);			// get user input artists and songs
	
	artistSort(playlist, TOTAL);		// sort the objects alphabetically by Artist
	
	displayPlaylist(playlist, TOTAL);		// display sorted playlist
	
	return 0;
}

void getData(SongInfo playlist[], int total)
{
	for(int index=0; index<total; index++)
	{	cout << "Enter song artist: ";
		getline(cin, playlist[index].artist);
		cout << "Enter song title: ";
		getline(cin, playlist[index].title);
		cout << endl;
	};
}
	
void displayPlaylist(SongInfo playlist[], int total)
{
	cout << setw(22) << "Playlist\n";
	cout << setw(11) << "Artist" << setw(20) << "Title";
	cout << "\n======================================\n";
	for (int count = 0; count < total; count++)
	{	
		cout << setw(22) << left << playlist[count].artist << setw(20) << left << playlist[count].title << endl;
	};	
}
	
void artistSort(SongInfo playlist[], int total)
{	
	bool madeAswap = true;
	for (int maxElement = total-1; maxElement > 0 && madeAswap; maxElement--)
	{	
		madeAswap = false;
		for (int index = 0; index < maxElement; index++)
		{	
			if (playlist[index].artist > playlist[index+1].artist)
			{	
				swap(playlist[index].artist, playlist[index+1].artist);
				swap(playlist[index].title, playlist[index+1].title);
				madeAswap = true;
			}
		}
	}
}
	
void swap(string &a, string &b)
{
	string temp = a;
	a = b;
	b = temp;
}
