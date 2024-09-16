<h1 align=center> <b>Problem 11</b>


<h1 align=center>Flowchart</h1>

<h1 align=center>IPO Chart</h1>

<h1 align=center>Pseudo Code</h1>

```
1.	START

2.	INPUT x,y

3.	WHILE (x!=y)
        IF (x>y) 
            SET x to x-y
        ELSE 
            SET y=y-x
        END IF 
4.	END WHILE

5.	SET HCF=x

6.	IF (HCF==1)
        PRINT “The numbers are co prime”
7.	ELSE 
        PRINT “The numbers are not co prime”
8.	END IF

9.	END 

```

<h1 align=center>Approach</h1>

Numbers whose HCF or GCD is 1 are called co-primes. HCF can be found by using a condition and initializing a while loop. At the last when we get the HCF a condition is added to whether the HCF is 1 or not, which will then tell whether the two numbers are co-prime based on the outcome of the condition. 