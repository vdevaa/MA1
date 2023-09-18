// This code was taken from https://www.techiedelight.com/queue-implementation-cpp/
// The code has been modified from the original to provide opportunities to learn
#include "testQueue.hpp"

using namespace std;

// define default capacity of the queue


// Class for queue






// Constructor to initialize queue


// main function
int main()
{
    // call your test functions here!

    testQueue newTests;

    newTests.testSize(); //SIZE TEST CASE
    newTests.testEmpty(); //EMPTY TEST CASE
    newTests.testFull(); //FULL TEST CASE
    newTests.testDequeue1(); //DEQUEUE TEST ON LOADED QUEUE
    newTests.testDequeue2(); //DEQUEUE TEST ON EMPTY QUEUE (Terminates Program)
    newTests.testEnqueue1(); //ENQUEUE TEST
    newTests.testEnqueue2(); //ENQUEUE TEST ON FULL QUEUE
    newTests.testPeek1(); //PEEK TEST 
    newTests.testPeek2(); //PEEK TEST ON EMPTY QUEUE


    return 0;
}


/* Test ID: Empty queue check - EQC
Unit: queue::isEmpty ()
Description: test to determine if queue::isEmpty () returns 1 if a
queue object is empty
Test steps:
1. Construct an empty queue object
2. Invoke queue::isEmpty ()
3. Conditionally evaluate the valued returned by
queue::isEmpty ()
Test data: size = 0
Precondition: queue object is empty
Postcondition: queue object is still empty
Expected result: queue is empty; 1 is returned
Actual result: queue is empty; 1 is returned
Status: passed
*/

