#include "queue.hpp"

class testQueue
{
private:
    queue* myQueue;


public:

    ~testQueue();
    void testEmpty(void);
    void testFull(void);
    void testSize(void);
    void testDequeue1(void);
    void testDequeue2(void);
    void testEnqueue1(void);
    void testEnqueue2(void);
    void testPeek1(void);
    void testPeek2(void);
};

