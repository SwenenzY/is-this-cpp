# Before to start
When I see this, I was very shocked because I've never see this before and I never thought of it. You can look at this repo for more information about operator alternatives in CPP to enlarge your mind (:

## Code examples
So you are still using `&&` :thinking: You are just crazy, look at this alternative.

### && to 'and'
And yeah, I am using `<% %>` for `{ }` like [EJS](https://ejs.co/)
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
# Reference table
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

CPPReference has more detailed documentation, I'm writing this repo because I haven't seen it on github before.

*You can give me suggestions with PR or ISSUES for improving this repo.*

[Check out CPPReference!](https://en.cppreference.com/w/cpp/language/operator_alternative)

*This documentation is all tested on C+14 to C+21.*
<p align="right">Peace out 🖖</p>
