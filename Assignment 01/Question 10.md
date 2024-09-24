<h1 align=center> <b>Problem 10</b>


<h1 align=center>Flowchart</h1>

![Chart 10](https://github.com/user-attachments/assets/35c0520a-6592-40e1-b025-c57b4bf4781e)


<h1 align=center>IPO Chart</h1>

![IPO 10](https://github.com/user-attachments/assets/094d25a7-4f83-49b8-a214-29afaceba4c9)


<h1 align=center>Pseudo Code</h1>

```
1.	START

2.	INPUT n

3.	SET x=0 
4.	SET i=1

5.	WHILE n!=0 
            IF n%100==90
                x=x+i*9
                n=n/100
            ELSE 
                x=x+i*n%10
                n=n/10
            END IF 
6.	END WHILE

7.	i=i*10
8.	PRINT x

9.	END 


```

<h1 align=center>Approach</h1>
To solve this, we need to check every digit of the number. If there is a 90, the 0 will be removed. For this, we will have to separate each digit, multiply it by its numerical place, and then add them together. In this manner, all the 90 will be corrected, and we will obtain the corrected number.
