# Grocery-Store-Simulation

#Task

Write a C++ program to simulate the check-out lines at a grocery store. The QUEUE should be implemented using 
a CIRCULAR-BASED ARRAY. Your program should accept five COMMAND-LINE ARGUMENTS as follows:
a.exe duration expectedarrival servicetime numberofqueues verbosemode
For example, a call of:
a.exe 60 1.8 4.2 3 1
would mean:
(1) The simulation would run for 60 minutes.
(2) Every minute, an average of 1.8 customers would look to check out (based on Poisson distribution with 
a minimum of 0 customers arriving).
(3) The  average  time  to  check  out  would  be  4.2  minutes  (based  on  Poisson  distribution  with  a  minimum 
check-out time of 1 minute).
(4) There would be 3 lines (queues) open for check-out.
(5) Verbose mode is on (1=on, 0=off). Verbose mode means that clock ticks would be displayed, along with 
all  activity  (new  customers  looking  to  check  out,  customers  that  have  finished  checking  out).  In  either 
case, final summary statistics (mean wait time, maximum wait time) should be displayed.
If  the  program  does  not  provide  the  correct  number  of  arguments,  or  the  values  are  not  valid,  an  appropriate 
message should be displayed, and the program should simply exit.

A sample output:

![Screenshot (35)](https://user-images.githubusercontent.com/68082619/169068422-9545026b-9ed6-42ca-8fb2-8b8fa770aea1.png)

