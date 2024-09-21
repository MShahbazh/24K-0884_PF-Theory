<h1 align=center> <b>Problem 13</b>


<h1 align=center>Flowchart</h1>

![Chart 13](https://github.com/user-attachments/assets/58ef2703-edf4-43f3-8c66-dda0d9bfd00b)


<h1 align=center>IPO Chart</h1>

![IPO 13](https://github.com/user-attachments/assets/fcc332bf-3e9f-4621-8c92-8452e080252b)


<h1 align=center>Pseudo Code</h1>

```
1.	START 

2.	INPUT x,y,z

3.	IF z>x && z>y
            PRINT “Cannot measure”
4.	ELSE IF z==x||z==y 
            PRINT “Can be measured”
5.	ELSE
            WHILE x==y 
                    IF x>y 
                        SET x=x-y
                    ELSE 
                        SET y=y-x
                    END IF 
            END WHILE 
            SET HCF=x
            IF z%HCF==0
                    PRINT “Can be measured”
            ELSE 
                    PRINT “Cannot be measured”
            END IF 
6.	END IF 

7.	END

```

<h1 align=center>Approach</h1>
The HCF of both jugs will decide whether the desired amount can be measured or not. 
