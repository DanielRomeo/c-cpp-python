#include <iostream>
#include <cmath>
#include <cstdlib>
#include "math.h"
#include <vector>
#include <fstream>
#include <string> 

class Meeting{
    private:
    std::string speaker;
    std::string topic;
    std::string venue;
    std::string date;
    
    public:
    // constructor:
    Meeting(){
        speaker = "";
        topic = "";
        venue = "";
        date = "";
    }

    //accessors:
    std::string GetSpeaker(){
        return speaker;
    }
    std::string GetTopic(){
        return topic;
    }
    std::string GetVenue(){
        return venue;
    }
    std::string GetDate(){
        return date;
    }

    // mutators:
    void SetSpeaker(std::string data){
        speaker = data;
    }
    void SetTopic(std::string data){
        topic = data;
    }
    void SetVenue(std::string data){
        venue = data;
    }
    void SetDate(std::string data){
        date = data;
    }

};


int main(){

    std::string speaker, venue, date, topic;

    std::cout << "Enter the name speaker, topic, venue and date of the meeting..." << std::endl;
	std::cin >>  speaker;
    std::cin >> topic;
    std::cin >> venue;
    std::cin >> date;

    // initialize:
    Meeting MyMeeting;

    MyMeeting.SetSpeaker(speaker);
    MyMeeting.SetTopic(topic);
    MyMeeting.SetVenue(venue);
    MyMeeting.SetDate(date);

    // display the contents:
    
    std::cout << "." << std::endl;
    std::cout << "Details of the venue are as follows...." << std::endl;
    std::cout << "Speaker: " << MyMeeting.GetSpeaker() <<std::endl;
    std::cout << "Topic: " << MyMeeting.GetTopic()<<std::endl;
    std::cout << "Venue: " << MyMeeting.GetVenue()<<std::endl;
    std::cout << "Date: " << MyMeeting.GetDate()<<std::endl;

    return 0;
};
   