#include<stdio.h>

class Process {

    public:
    Process(int processid, int brsttime, int process_priority) {
        this->pid = processid;
        this->bt = brsttime;
        this-> priority = process_priority;
    }
    Process() = delete;

    void ProcessPriorityScheduler(Process p);
    private:

    int pid; //process id
    int bt; //brust time
    int priority;
    // priority of the process
};

void Process::ProcessPriorityScheduler(Process p) {

    /*Call for function to segragate process based on priority and print the same sequence*/
    /*Call for function to get the execution time line*/
    
}

int main(void) {
    //Take input for different Process with data
    //enter number of process instance you want to enter
    /*Code for Getting Number*/
    //enter data for process
    Process p1[] = {{23,3,1},{25,5,2},{26,6,3}};

    /*Call for Scheduling algorithm*/

    return 0; 

}