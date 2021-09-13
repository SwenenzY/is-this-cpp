// dont paste this code to vs have 2 main's compiler %100 give error for you
// Example 1 
int main( )
<%
   auto username = "swenenzy";
   auto year = 2021;
   // Look at this i'm using 'and' instead of && very strange right?
   if ( username == "swenenzy" and year == 2021 ) <%
	   printf( "both sides are equal" );
   %>
%>
// Example 2
int main( )
<%
   auto username = "swenenzy";
   auto year = 2021;
   if ( username == "swenenzy" or year == 2023 ) <%
	   printf( "one out of both correct\n" );
   %>
%>
