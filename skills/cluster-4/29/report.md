#  Skill Name: Security in Connected Systems

Author: Chen-Yu Chang

Date: 2020-11-02
-----

## Summary
There is no code in this skill.

### Security Weakness
The weaknesses of our devices (client, local network, internet, server, node.js, ESP32) can be categorized into the followings. First, the communication of the UDP between microcontroller and server is single direction transmission, so there is no method to distinguish the legitimacy of the message transmitted. This makes the attacker has a chance to forge messages that are considered legitimate and steal the information from it. Next, there are possibilities that there are several thread controlling one LED. When it is called many times, the memory will be occupied too much, which cause the speed of processing to slow down a lot. Last, when there are several microcontroller once, it is hard to differentiate from them. Therefore, as there are many users using the same system, all of them have the access to the data transmitted.

### Attack Methods
There are several methods of attacking. First, man-in-the-middle attack is one way. It is a cyberattack where the attacker secretly relays and possibly alters the communications between two parties who believe that they are directly communicating with each other. A MITM attack can succeed only when the attacker impersonates each endpoint sufficiently well to satisfy their expectations. Next, denial of service attack is another common attack. Dos attack occurs when legitimate users are unable to access information systems, devices, or other network resources due to the actions of a malicious cyber threat actor. Services affected may include email, websites, and online accounts that rely on the affected computer or network. It is accomplished by flooding the targeted host or network with traffic until the target cannot respond or simply crashes, preventing access for legitimate users. Furthermore, sometimes it can cause attack when users load data from an unknown endpoint. Malware is another common cyberattack. Malware breaches a network through a vulnerability, typically when a user clicks a dangerous link or email attachment that then installs risky software. Last, SQL injection is also an attack when an attacker inserts malicious code into a server that uses SQL and forces the server to reveal information it normally would not.


### Ways to Mitigate
For all kinds of attack, there are ways to mitigate and prevent from happening. The way to avoid man-in-the-middle attack is to establish some certificate and public key agreement protocol, which is able to make sure the message is genuine. For denial of service attack, we can avoid by only connecting one thread to blink the LED, and restart every time the massage is received. We could increase the time between each message so that the microcontroller will only process one message at a time, which solve the problem of processing too many messages at a time. Furthermore, we can solve the problem of unknown endpoint database by making the system more secured by including the database and having the server perform queries to fetch data when a certain ID is connected so that when typing the address of the endpoint, it will not show the data to all the users. By preventing Malware, we can only allow the authorized devices, which are pre-approved only should be allowed to connect to main systems. Last, to prevent from SQL injection attack, the validation process is aimed at verifying whether or not the type of input submitted by a user is allowed. Only the value which passes the validation can be processed. Parameterized queries are also a means of pre-compiling a SQL statement so that you can then supply the parameters in order for the statement to be executed. This method makes it possible for the database to recognize the code and distinguish it from input data.

## Source

Man-in-the-middle Attack:

https://en.wikipedia.org/wiki/Man-in-the-middle_attack

Denial of Service Attack:

https://us-cert.cisa.gov/ncas/tips/ST04-015

Common Cyberattack:

https://www.cisco.com/c/en/us/products/security/common-cyberattacks.html#~how-cyber-attacks-work

Malware Mitigation:

https://gradesfixer.com/free-essay-examples/best-practice-to-employ-to-mitigate-malware-effects-on-a-machine/

SQL Injection Attack:

https://www.ptsecurity.com/ww-en/analytics/knowledge-base/how-to-prevent-sql-injection-attacks/

-----
