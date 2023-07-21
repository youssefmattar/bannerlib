# bannerlib

This C library output text banners for windows cmd or linux terminal or you can compile it any where you want.

This lib now can output capital english letters only (work in progress to add more letters)

unfortunately the library can only print in one line till now :)

This lib has two functions which are

printmultiple(int count , char character) which prints multiple chars in one line.

for example: 

printmultiple(3, '=');

the output will be: === 

The second function which is 
  printBanner(char* text);
  
 you can choose what you want according to your needs;
 
 for example 
 
 printBanner("hello");
 
 will output something like this
 
![hello](https://user-images.githubusercontent.com/70612293/183314065-04af78ea-87f8-40fb-a743-d564a5fd80cc.JPG)


you can use cmd arguments too as the example in my programs main.
  
  
