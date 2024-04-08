#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Lecture {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numLectures;
    vector<string> lectureDetails;

public:
    // Constructor to initialize lecture details
    Lecture(string name, string subject, string course) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        numLectures = 0;
    }

    // Function to add lecture details
    void addLectureDetail(string detail) {
        lectureDetails.push_back(detail);
        numLectures++;
    }

    // Function to display name and lecture details
    void displayLectureDetails() {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject: " << subjectName << endl;
        cout << "Course: " << courseName << endl;
        cout << "Lecture Details:" << endl;
        for (int i = 0; i < numLectures; ++i) {
            cout << "Lecture " << i+1 << ": " << lectureDetails[i] << endl;
        }
    }
};

int main() {
    // Create Lecture objects
    Lecture lecturer1("shah prince", "Computer Science", "Python Programming");
    Lecture lecturer2("mehta Smith", "Mathematics", "Calculus");
    Lecture lecturer3("David Johnson", "Physics", "Mechanics");
    Lecture lecturer4("Emily Brown", "Biology", "Cell Biology");
    Lecture lecturer5("Michael Wilson", "History", "World History");
    
    // Add lecture details for each lecturer
    lecturer1.addLectureDetail("Introduction to Python");
    lecturer1.addLectureDetail("Data Types and Variables");
    
    lecturer2.addLectureDetail("Limits and Continuity");
    lecturer2.addLectureDetail("Differentiation");
    lecturer2.addLectureDetail("Integration");

    lecturer3.addLectureDetail("Newton's Laws of Motion");
    lecturer3.addLectureDetail("Work, Energy, and Power");

    lecturer4.addLectureDetail("Cell Structure");
    lecturer4.addLectureDetail("Cell Functions");

    lecturer5.addLectureDetail("Ancient Civilizations");
    lecturer5.addLectureDetail("World Wars");

    // Display lecture details for each lecturer
    lecturer1.displayLectureDetails();
    cout << endl;
    lecturer2.displayLectureDetails();
    cout << endl;
    lecturer3.displayLectureDetails();
    cout << endl;
    lecturer4.displayLectureDetails();
    cout << endl;
    lecturer5.displayLectureDetails();

    
}

