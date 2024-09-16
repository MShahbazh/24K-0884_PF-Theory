<h1 align=center> <b>Problem 4</b>


<h1 align=center>Flowchart</h1>

<h1 align=center>IPO Chart</h1>

<h1 align=center>Pseudo Code</h1>

```
1.	START

2.	INPUT the money mr bhoola have 

3.	SET bill to 0

4.	IF buy onion 
        INPUT the rate (per kg)
        INPUT the amount to buy (in kg) 
        SET price=amount*rate
        SET bill=bill+price
5.	END IF 

6.	IF buy apricot 
        INPUT the rate (per kg)
        INPUT the amount to buy (in kg) 
        SET price=amount*rate
        SET bill=bill+price
7.	END IF 

8.	IF buy grapes
        INPUT the rate (per kg)
        INPUT the amount to buy (in kg) 
        SET price=amount*rate
        SET bill=bill+price
9.	END IF 

10.	IF buy tomatoes 
        INPUT the rate (per kg)
        INPUT the amount to buy (in kg) 
        SET price=amount*rate
        SET bill=bill+price
11.	END IF 

12.	IF bill is greater than equal to money
        SET diff to money-price
            IF diff!=0
                OUTPUT give back diff 
            END IF 
13.	ELSE 
     PRINT “Not enough money to buy the groceries”
14.	END IF 

15.	END 

```

<h1 align=center>Approach</h1>

The problem includes to only use the 4 items stated in problem statement. The price for each item can be calculated by multiplying the rate per 1 kg to the quantity buying, then adding all the prices of each vegetable give bill, finally at the end comparing the bill to the money mr bhoola have, change will be given if any. And for the case of mot enough money the purchase will be declined