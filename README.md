# Before to start
First time i saw this i very shocked cuz i never see this before in cpp. This repo for see difference and resize your mind.

## Code examples;

Still are u using && ? You're crazy just look at this.

### && to 'and';
And yes i am  using <%%> too { } like a ejs [*Click and see*](https://ejs.co/)
```cpp
int main( )
<%
   auto username = "swenenzy";
   auto year = 2021;
   // Look at this i'm using 'and' instead of && very strange right?
   if ( username == "swenenzy" and year == 2021 ) <%
	   printf( "both sides are equal" );
   %>
%>
```
![image_1](https://media.discordapp.net/attachments/864772219610726410/886998398127972362/unknown.png?width=1253&height=472)
### || to 'or';
Why not?
```cpp
int main( )
<%
   auto username = "swenenzy";
   auto year = 2021;
   if ( username == "swenenzy" or year == 2023 ) <%
	   printf( "one out of both correct\n" );
   %>
%>
```
![image_2](https://media.discordapp.net/attachments/864772219610726410/887000071093227520/unknown.png)
### How about includes?
You can use includes like this syntax.
```cpp
%:include <iostream>
```
# Refence table
| Primary  |  Alternative  |
|:--------:|:-------------:|
|  &&      |  and          |
|  &=      |  and_eq       |
|  &       |  bitand       |
|  \|      |  bitor        |
|  ~       |  compl        |
|  !       |  not          |
|  !=      |  not_eq       |
|  \|\|    |  or           |
|  \|=     |  or_eq        |
|  ^       |  xor          |
|  ^=      |  xor_eq       |
|  {       |  <%           |
|  }       |  %>           |
|  [       |  <:           |
|  ]       |  :>           |
|  #       |  %:           |
|  ##      |  %:%:         |

Cppreference has more detailed documentation, I'm writing this repo because I haven't seen it on github before

*Give me suggestion for improve.*

Link : [operator_alternative](https://en.cppreference.com/w/cpp/language/operator_alternative)

*Tested on c+14 to c+21.*
