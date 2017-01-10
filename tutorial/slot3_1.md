# Hands-on "Modernization of an application using Intel Advisor - Part 1" #

* This Hands-on is based on chapter 24 (“Profiling-Guided Optimization”) - “High Performance Parallelism Pearls” book;

* This chapter exploits the use of Intel® VTune Amplifier XE reports to understand where to apply optimization on matrix transposition.

## Speedup Estimation Analysis ##

* Intel® Advisor XE is a shared memory threading designing and prototyping tool for C, C++, C# and Fortran;
* This tool provides a mechanism called annotation which is used to inform the regions of the code which can be parallelized. Based on such annotations a model is built in order to compare the performance scaling of different threading designs without the cost and disruption of implementation;
* In this part of Hands-on you will execute the following steps in order to perform threading prototyping:
	* Create project;
	* Survey data: Discover opportunities for parallelization;
	* Annotate sources: include annotations on source code to check scalability;
	* Check suitability: evaluate the performance of annotated loops in different architectures and frameworks.


______

**1.** Create Advisor Project

* Execute Intel Advisor on terminal: 

```
advixe-gui
```

* Create new Advisor project:
	* Name: TP
	* Application: ~/hands-on/Pearl/1/runme-CPU
	* Application parameters: 3000 100
	* Source Folder: ~/hands-on/Pearl/1/

______

**Step 1.**

![slot3_1_fig1](img/slot3_1_fig1.png)

______

**Step 2.**

![slot3_1_fig2](img/slot3_1_fig2.png)

______

**Step 3.**

![slot3_1_fig3](img/slot3_1_fig3.png)

______

**Step 4.**

![slot3_1_fig4](img/slot3_1_fig4.png)

______


