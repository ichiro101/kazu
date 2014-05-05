#include "Player.h"



void Player::setCurrentlyPlayingFile(QString fileName) {
	this->currentlyPlayingFile = fileName;
}

QString Player::getCurrentlyPlayingFile() {
	return this->currentlyPlayingFile;
}

bool Player::play() {
	assert(this->currentlyPlayingFile != "");
	
	// TODO: implement this

	return false;
}