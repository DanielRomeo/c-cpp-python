#include <iostream>
#include <string>
using namespace std;

/*
Adapter design pattern is about making incompatible things compatible.
- E.g if we have a legacy printer however we want to have a new printer?
- We would then need to implement a translator between the new system and the old one.

*/

/*
Adapter - I have something that works however its interface doesnt match what my program expects.
- Like a physical travel adapter; you dont modify the wall socket for the charger, you put something between them.
*/

/*
An example would be:
- Imagine we have an AUDIO player, we expect players to have the 'play(string filename)'
- and a normal mp3 player fits perfectly because it has the play(string filename) function.
- however a VLCplayer probably doesnt have that play function, it has a startVLC function,
- therfore; to make VLC compatible, we then need to create some sort of adapter. 

*/

// Inteface our program expects / Base class:
class AudioPlayer{
public:
    virtual void play(string filename) = 0;
    virtual ~AudioPlayer() = default;
};
// MP3 Player that is compatible:
class Mp3Player: AudioPlayer{
public:
    void play(string filename) override{
        cout << "Playing mp3 \n";
    }
};
// Existing VLC player that doesnt work:
class VLCplayer{
public:
    void startVlc(string filename){
        cout << "Playing VLC \n";
    }
};

// Adapter class:
class VLCadapter : public AudioPlayer{
private:
    VLCplayer* vlc;
public:
    VLCadapter(VLCplayer* player){
        vlc = player;
    }
    void play(string filename) override{
        vlc->startVlc(filename);
    }

};




main(){

    


    return 0;
}