<h1 align=center> <b>Problem 8</b>


<h1 align=center>Flowchart</h1>

<h1 align=center>IPO Chart</h1>

<h1 align=center>Pseudo Code</h1>

```
1.	START

2.	INPUT n

3.	SET i to 0 

4.	WHILE (n!=0)
        SET x to n%10
        SET i to i+x 
        SET n to n/10 
5.	END WHILE

6.	PRINT i

7.	END 
```


<h1 align=center>Approach</h1>

The problem was to find the sum of the digits of a number. For this we need to take the mod of the number to get the last digit and save it into another variable, after that the number would be divided by 10, assuming it as integer division the decimal part would be ignored, and the new number is saved. This process id repeated until the number n becomes 0 at that time we will get the sum of the digits. 