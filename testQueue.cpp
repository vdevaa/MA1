#include "testQueue.hpp"


testQueue::~testQueue()
{
    delete[] myQueue;
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

void testQueue::testEmpty(void)
{
    queue test;

    // testQueue emptyTest;

    int value = 0;
    value = test.isEmpty();

    if (value == 1)
    {
        cout << "Empty Test Passed" << endl;
    }
    else
    {
        cout << "Empty Test Failed" << endl;
    }
}

/* Test ID: Full Queue Check
Unit: queue::isFull ()
Description: test to determine if queue::isFull () returns 1 if a
queue object is Full
Test steps:
1. Construct an empty queue object
2. Full Queue to Capacity
3. Envoke the isFull() function
4. Conditionally evaluate the valued returned by
queue::isFull ()
Test data: size = 10
Precondition: queue object is empty
Postcondition: queue object is full
Expected result: queue is full; 1 is returned
Actual result: queue is full; 1 is returned
Status: passed
*/

void testQueue::testFull(void)
{
    int value = 0;
    queue test;

    for (int i = 0; i < 11; i++)
    {
        test.enqueue(i);
    }

    value = test.isFull();

    if (value == 1)
    {
        cout << "Full Test Passed!" << endl;
    }
    else
    {
        cout << "Full Test Failed!" << endl;
    }


}

/* Test ID: Size queue check
Unit: queue::size ()
Description: test to determine if queue::size () returns the right amount of nodes
Test steps:
1. Construct an empty queue object
2. Enqueue a node into the queue
3. envoke size() to return the amount of nodes
3. Conditionally evaluate the valued returned by
queue::size()
Test data: size = 1
Precondition: queue object is empty
Postcondition: queue object has one value/node
Expected result: size returns 1 for 1 node
Actual result: size returned 1 for 1 node
Status: passed
*/


void testQueue::testSize(void)
{
    queue test;

    int value = 0; // end size of queue   

    value = test.size(); // this state ment should be 11 since it is an empty queue

    // cout << "Size of Queue (If size is empty value should be 12) " << value << endl; 

    test.enqueue(1);

    value = test.size();

    // cout << "Size of Queue (Atfer Queue) " << value << endl;

    if (value == 1)
    {
        cout << "Size Test Passed!" << endl;
    }
    else
    {
        cout << "Size Test Failed!" << endl;
    }
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

void testQueue::testDequeue1(void)
{
    int sizeValue = 0;
    int postValue = 0;

    queue test;

    for (int i = 0; i < 4; i++)
    {
        test.enqueue(i);
    }
    sizeValue = test.size();

    // cout << "Pre Value: " << sizeValue << endl;

    test.dequeue();

    postValue = test.size();

    // cout << "Post Value: " << postValue << endl;

    if (sizeValue == postValue + 1)
    {
        cout << "Dequeue Test 1 Passed!" << endl;
    }
    else
    {
        cout << "Dequeue Test 1 Failed!" << endl;
    }
}

void testQueue::testDequeue2(void) // try to dequeue an empty list
{
    queue test;
    test.dequeue();;
}

void testQueue::testEnqueue1(void)
{
    queue test;

    int value = 0;

    test.enqueue(11);

    value = test.size();

    if (value > 0)
    {
        cout << "Enqueue Test 1 Passed!" << endl;
    }
    else
    {
        cout << "Enqueue Test 1 Passed!" << endl;
    }
}
void testQueue::testEnqueue2(void)
{
    queue test;
    int value = 0;

    for (int i = 0; i < 11; i++)
    {
        test.enqueue(i);
    }

    // NOW THAT QUEUE IS FULL, TRY TO ADD ANOTHER

    test.enqueue(1);
    test.enqueue(1);

    value = test.size();


    if (value > 11)
    {
        cout << "Enqueue Test 2 Failed!" << endl;
    }
    else
    {
        cout << "Enqueue Test 2 Passed!" << endl;
    }


}

void testQueue::testPeek1(void)
{
    queue test;

    int value = 0;

    test.enqueue(4);

    value = test.peek();
    cout << test.peek() << endl;
    if (value == 4)
    {
        cout << "Peek Test 1 Passed!" << endl;
    }
    else
    {
        cout << "Peek Test 1 Failed!" << endl;
    }


}

void testQueue::testPeek2(void)
{
    queue test;
    test.peek();
}