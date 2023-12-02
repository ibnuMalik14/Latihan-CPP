#include <iostream>
#include <string>
#include <fstream>
using namespace std;
namespace nm {
    // different logging verbosity levels
    enum class LoggingLevels {
        LOG_INFO,
        LOG_WARNING,
        LOG_ALL
    };
    const string defaultlogfile = "defaultlogfile.txt";
    class MyLogger{
        private:
            fstream fs;
            string messagestart;
        public:
            void logToFile(const string& message);
            void logToConsole(const string& message);
            MyLogger(); //Constructor
            explicit MyLogger(const string& customlogfile); // user provided constructor

            MyLogger(const MyLogger& rhs) = delete; // disable copy constructor
            MyLogger& operator=(const MyLogger& rhs) = delete; // disable copy assignment operator 

            MyLogger(MyLogger&& rhs) noexcept; //  move constructor
            MyLogger& operator=(MyLogger&& rhs) noexcept; // disable move assignment operator   


            ~MyLogger(); //Destructor
            void logwithLevel(const string& message, LoggingLevels loglevel);
            void logToAll(const string& message);
    };

    void MyLogger::logToFile(const string& message) {
        fs  << message << endl;
    }

    void MyLogger::logToConsole(const string& message) {
        cout << messagestart << message << endl;
    }

    void MyLogger::logwithLevel(const std::string& message, LoggingLevels loglevel) {
        switch (loglevel){
        case LoggingLevels::LOG_INFO:
            logToConsole("Log level INFO: " + message);
            break;
        case LoggingLevels::LOG_WARNING:
            logToConsole("Log level WARNING: " + message);
            break;
        case LoggingLevels::LOG_ALL:
            logToConsole("Log level ALL: " + message);
            break;
        default:
            logToConsole("No logging level: " + message);
            break;
        }
    }

    void MyLogger::logToAll(const string& message) {
        logToFile(message);
        logToConsole(message);
    }

    // Default Constructor
    MyLogger::MyLogger() {
        // constructor implementation
        fs.open(defaultlogfile, ios::app);
        messagestart = "Started logging to a default file.";
    }

    //User provided constructor
    MyLogger::MyLogger(const string& customlogfile) {
        // constructor implementation
        fs.open(customlogfile, ios::app);
        messagestart = "Started logging "; // Open the file
    }

    // Move constructor
    MyLogger::MyLogger(MyLogger&& rhs) noexcept 
        :fs{move(rhs.fs)},messagestart{rhs.messagestart } {
        // move constructor implementation
    }

    // Move assignment operator
    MyLogger& MyLogger::operator=(MyLogger&& rhs) noexcept {
        // move assignment operator implementation
        fs = move(rhs.fs);
        messagestart = rhs.messagestart;
        return *this;
    }


    // Destructor
    MyLogger::~MyLogger() {
        // destructor implementation
        fs.close();
    }
}
int main() { 
    //create object using default log file name
    nm::MyLogger o1;
    o1.logToConsole("Console log message 1.");
    o1.logToFile("Default file name log message 1.");
    o1.logwithLevel("Console log message 2.", nm::LoggingLevels::LOG_INFO);
    o1.logToAll("Logging to both the console and a file from o1.");

    //create object using custom log file name
    nm::MyLogger o2("mylogfile.txt");
    o2.logToConsole("Console log message 1.");
    o2.logToFile("Custom file name log message 1.");
    o2.logwithLevel("Console log message 3.", nm::LoggingLevels::LOG_WARNING);
    o2.logToAll("Logging to both the console and a file from o2.");
    // create an object using a move operation
    nm::MyLogger o3(std::move(o2));
    o3.logToAll("Logging to both the console and a file from o3.");
    return 0;
}