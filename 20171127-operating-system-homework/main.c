#include <stdio.h>
#include <malloc.h>

typedef struct _Process
{
    int id; // the id of process
    int burtTime; //the burst time of process
    int remainingTime; //the remaining time of process
    struct _Process *next;

} Process;

int main(int argc, char *argv[])
{
    int i;
    int processesNumber; //the number of processes
    int q; //length of the time quantum
    int time, count;
    Process *process, *head, *tail;
    int schedule[65536] = {0};
    // enter data
    printf("Enter the number of processes to schedule: ");
    scanf("%d", &processesNumber);

    head = (Process *)malloc(sizeof(Process));
    process = head;
    for (i = 1; i <= processesNumber; ++i)
    {
        process->next = (Process *)malloc(sizeof(Process));
        process = process->next;
        process->next = NULL;
        printf("Enter the burst time of process %d: ", i);
        scanf("%d", &process->burtTime);
        process->remainingTime = process->burtTime;
        process->id = i;
    }
    tail = process;
    printf("Enter the length of the time quantum q: ");
    scanf("%d", &q);

    process = head;
    time = 0;
    count = 0;
    while (process == NULL)
    {
        --process->remainingTime;
        ++time;
        ++count;

    }
    return 0;
}