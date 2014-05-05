#ifndef PLAYER_H
#define PLAYER_H

#include <qstring.h>
#include <cassert>

// Player class is responsible for the backend logic
// behind playing songs
class Player {
public:
	static Player& getInstance() {
		// Guaranteed to be destroyed.
		// Instantiated on first use.
		static Player instance;
		return instance;
	}

	// Play the song that currentPlayingFile is pointing
	// to
	// returns false if there's an error that occured while
	// trying to play the file
	bool play();

	// standard getters and setters for currentlyPlayingFile
	void setCurrentlyPlayingFile(QString fileName);
	QString getCurrentlyPlayingFile();
private:
	Player(void) {
		this->currentlyPlayingFile = "";
	};

	~Player(void) { };
	Player(Player const&); // don't implement
	void operator=(Player const&); // don't implement

	// Path to the file to the song that is currently playing
	QString currentlyPlayingFile;
};


#endif
