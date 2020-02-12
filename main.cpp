#include <iostream>
#include <string> // include to use string variable 

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 bool
 char
 int
 float
 double
 void
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
bool variableDeclaration () {
    bool a = true;
    bool b = false;
    bool c = true;
    ignoreUnused (a, b, c);
}

char variableDeclaration () {
    char 1 = a;
    char 2 = b;
    char 3 = c;
    ignoreUnused (1, 2, 3);
}

int variableDeclaration () {
    int x = 20;
    int y = 21;
    int z = 22;
    ignoreUnused (x, y, z);
}

float variableDeclaration () {
    float i = 1.1;
    float h = 1.2;
    float g = 1.3;
    ignoreUnused (i, h, g);
}

double variableDeclaration () {
    double a = 2.22;
    double b = 2.32;
    double c = 2.42;
    ignoreUnused (a, b, c);
}

3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end
    for each of those functions declared, write out how the function would look if called with correct arguments
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    bool a = true;
    bool b = false;
    bool c = true;
    char d = a;
    char e = b;
    char f = c;
    int x = 20;
    int y = 21;
    int z = 22;
    float i = 1.1f;
    float h = 1.2f;
    float g = 1.3f;
    double j = 2.22;
    double k = 2.32;
    double l = 2.42;

    ignoreUnused(number, a, b, c, d, e, f, x, y, z, i, h, g, j, k, l); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */

bool startNewTrack(int diskSpaceRemaining, std::string fileName = "New Track") 
{
    ignoreUnused(diskSpaceRemaining, fileName); //added #include <string> in header

    return {};
}


/*
 2)
 */

double getSongTime(int bpm, int bars = 8) 
{
    ignoreUnused(bpm, bars);

    return {};
}

/*
 3)
 */

void addInstrument(int instrumentType, int trackNumber, int instances = 1) 
{
    ignoreUnused(instrumentType, trackNumber, instances);
}

/*
 4)
 */

int createMidiNote(int noteNumber = 64, int noteVelocity = 100, int noteLength = 4) 
{
    ignoreUnused(noteNumber, noteVelocity, noteLength);

    return {};
}

/*
 5)
 */

bool setLoopRegion(int barStart, int barEnd) 
{
    ignoreUnused(barStart, barEnd);

    return {};
}

/*
 6)
 */

int arpeggiateChord(int rootNote, int chordType = 0)
{
    ignoreUnused(rootNote, chordType);

    return {};
}

/*
 7)
 */

char findRootNote(int firstNote, int secondNote, int thirdNote) 
{
    ignoreUnused(firstNote, secondNote, thirdNote);

    return {};
}

/*
 8)
 */

void createMelody(int rootNote, int melodyLength, double complexity = 1)
{
    ignoreUnused(rootNote, melodyLength, complexity);
}

/*
 9)
 */

int changeVolume(int currentVolume, int changeAmount = 3)
{
    ignoreUnused(currentVolume, changeAmount);

    return {};
}

/*
 10)
 */

int calculateBpm(double songTime, double transientsDetected) 
{
    ignoreUnused(songTime, transientsDetected);

    return {};
}

int main()
{
    //example of calling that function
    rentACar(6, 2); 
    
    //1)
    startNewTrack(3);
    //2)
    getSongTime(120, 10);
    //3)
    addInstrument(2, 3, 2);
    //4)
    createMidiNote(65, 34, 2);
    //5)
    setLoopRegion(20, 30);
    //6)
    arpeggiateChord(64);
    //7)
    findRootNote(64, 68, 71);
    //8)
    createMelody(23, 15, 2);
    //9)
    changeVolume(90, 4);
    //10)
    calculateBpm(12.3, 20.3);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
