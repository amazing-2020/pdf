// compile with the queue_17.7.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue_17.9.h"
#define MIN_PER_HR 60.0 // 1 hour = 60 minutes

bool newcustomer(double x);
Item customertime(long when);

int main(void)
{
  Queue line;
  Item temp; //the new customer data
  int hours; //simulation time
  int perhour; //number of customers per hour
  long cycle, cyclelimit; //cycle counter, cycle upper limit
  long turnaways = 0; //customer rejected because the queue is full
  long customers = 0; //joined the queue
  long served = 0; //served during the simulation
  long sum_line = 0; //cumulative line length
  int wait_time = 0; //time until Sigmund is free
  double min_per_cust; //average time between arrivals
  long line_wait = 0; //cumulative time in line

  InitializeQueue(&line);
  srand((unsigned int)time(0));
  puts("Case Study: Sigmund Lander's Advice Booth");
  puts("Enter the number of simulation hours");
  scanf("%d", &hours);
  cyclelimit = MIN_PER_HR * hours;
  puts("Enter the average number of customers per hour:");
  scanf("%d", &perhour);
  min_per_cust = MIN_PER_HR / perhour;

  for (cycle = 0; cycle < cyclelimit; ++cycle)
  {
    if (newcustomer(min_per_cust))
    {
      if (QueueIsFull(&line))
        turnaways++;
      else
      {
        customers++;
        temp = customertime(cycle);
        EnQueue(temp, &line);
      }
    }
    if (wait_time <= 0 && !QueueIsEmpty(&line))
    {
      DeQueue(&temp, &line);
      wait_time = temp.processtime;
      line_wait += cycle - temp.arrive;
      served++;
    }
    if (wait_time > 0)
      wait_time--;
    sum_line += QueueItemCount(&line);
  }

  if (customers > 0)
  {
    printf("customers accepted: %ld\n", customers);
    printf("  customers served: %ld\n", served);
    printf("      turnaways: %ld\n", turnaways);
    printf("average queue size: %.2f\n", (double) sum_line / served);
    printf(" average wait time: %.2f minutes\n",
           (double) line_wait / served);
  }
  else
    puts("No customers!");
  EmptyTheQueue(&line);
  puts("Bye!");

  return 0;
}

bool newcustomer(double x)
{
  if (rand() * x / RAND_MAX < 1)
    return true;
  else
    return false;
}

Item customertime(long when)
{
  Item cust;

  cust.processtime = rand() % 3 + 1;
  cust.arrive = when;

  return cust;
}