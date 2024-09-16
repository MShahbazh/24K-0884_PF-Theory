<h1 align=center> <b>Problem 5</b>


<h1 align=center>Flowchart</h1>

<h1 align=center>IPO Chart</h1>

<h1 align=center>Pseudo Code</h1>

```
1.	START

2.	INPUT croptype, Moisture, Rainfall

3.	IF croptype==wheat AND Moisture<30% AND Rainfall >24 THEN 
                PRINT “Initiate Irrigation”

4.	ELSE IF croptype==wheat AND Moisture<25% AND Rainfall>24 THEN 
                PRINT “Initiate Irrigation”

5.	ELSE IF croptype==corn AND Moisture<40% 
                PRINT “Initiate Irrigation” 

6.	END IF 

7.	END 


```

<h1 align=center>Approach</h1>

As there are only three crops, with their own specific moisture levels, that is why three decision boxes with AND conditions are used. As the irrigation system is handled by a drone and only three crops are to be monitored that is why no need for ELSE statement. 
