//CS36 - Program #39
//Name : Chatura Ahangama

/* NOTES
#STRINGS
-array of characters
char name[5]="RUTH";

strings can do 
name[0] = 'M';

cannot do
name1 = name2;
if(name1>name2)
*/

/* NOTES 
STRING FUNCTIONS - need string.h
1.STRCPY - string copy
strcpy(name1,name2);
-copy name2 to name1

2.STRNCPY
-strncpy(name1,name2,10);
-copy the first n chars of name2 to name1

3.STRCAT - concate(join)
s1 = "Joe Blow"
s2 = "Is a dork"
strcat(s1,s2);
-join s1 and s2 together
 s1 will be "joe Blowis a dork"

 strcat(s1," ");
 srtcat(s1,s2);
 ->"Joe Blow is a dork"

4.STRNCAT
strncat(s1,s2,5);
-concatenate first 5 chars of s2 to end of s1
->"Joe Blowis a "

5.STRCMP - string compare
"SPOT">"MUTH"
"SPOT"<"spot"
strcmp(name1.name2);
returns 0 if name1==name2
returns pos if name1>name2
returns neg if name1<name2

if(strcmp(name1,name2)==0)
	printf("Same Name");
else
	printf("different");

6.STRNCMP - compare fist n chars

7.STRLEN - string length
char name[20] = "MUTH";
int l = strlen(name);
l = 4
*/







