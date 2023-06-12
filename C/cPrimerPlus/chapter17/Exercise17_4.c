// compile with the queue_17.9.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue_17.9.h"
#define MIN_PER_HR 60.0 // 1 hour = 60 minutes

bool newcustomer(double x);
Item customertime(long when);

int main(void)
{
  Queue line1;
  Queue line2;
  Item temp1; //the new customer data
  Item temp2; //the new customer data

  int hours; //simulation time
  int perhour; //number of customers per hour
  long cycle, cyclelimit; //cycle counter, cycle upper limit
  long turnaways1 = 0; //customer rejected because the queue is full
  long turnaways2 = 0;
  long customers1 = 0; //joined the queue
  long customers2 = 0;
  long served1 = 0; //served during the simulation
  long served2 = 0;
  long sum_line1 = 0; //cumulative line length
  long sum_line2 = 0;
  int wait_time1 = 0; //time until Sigmund is free
  int wait_time2 = 0;
  double min_per_cust; //average time between arrivals
  long line1_wait = 0; //cumulative time in line
  long line2_wait = 0;

  InitializeQueue(&line1);
  InitializeQueue(&line2);
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
      if (QueueIsFull(&line1))
        turnaways1++;
      else
      {
        customers1++;
        temp1 = customertime(cycle);
        EnQueue(temp1, &line1);
      }
    }
    if (newcustomer(min_per_cust))
    {
      if (QueueIsFull(&line2))
        turnaways2++;
      else
      {
        customers2++;
        temp2 = customertime(cycle);
        EnQueue(temp2, &line2);
      }
    }
    if (wait_time1 <= 0 && !QueueIsEmpty(&line1))
    {
      DeQueue(&temp1, &line1);
      wait_time1 = temp1.processtime;
      line1_wait += cycle - temp1.arrive;
      served1++;
    }
    if (wait_time1 > 0)
      wait_time1--;
    sum_line1 += QueueItemCount(&line1);
    if (wait_time2 <= 0 && !QueueIsEmpty(&line2))
    {
      DeQueue(&temp2, &line2);
      wait_time2 = temp2.processtime;
      line2_wait += cycle - temp2.arrive;
      served2++;
    }
    if (wait_time2 > 0)
      wait_time2--;
    sum_line2 += QueueItemCount(&line2);
  }
  puts("*******Queue1*******");
  if (customers1 > 0)
  {
    printf("customers1 accepted: %ld\n", customers1);
    printf("  customers1 served: %ld\n", served1);
    printf("      turnaways1: %ld\n", turnaways1);
    printf("average queue size: %.2f\n", (double) sum_line1 / served1);
    printf(" average wait time: %.2f minutes\n",
           (double) line1_wait / served1);
  }
  else
    puts("No customers!");
  puts("*******Queue2*******");
  if (customers2 > 0)
  {
    printf("customers2 accepted: %ld\n", customers2);
    printf("  customers2 served: %ld\n", served2);
    printf("      turnaways2: %ld\n", turnaways2);
    printf("average queue size: %.2f\n", (double) sum_line2 / served2);
    printf(" average wait time: %.2f minutes\n",
           (double) line2_wait / served2);
  }
  else
    puts("No customers!");
  EmptyTheQueue(&line1);
  EmptyTheQueue(&line2);
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