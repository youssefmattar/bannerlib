# bannerlib

This C++ library output text banners for windows cmd or linux terminal or you can compile it any where you want.

This lib now can output capital english letters (work in progress to add more letters)

This lib has two functions which are

printmultiple(int count , char character) which prints multiple chars in one line.

for example printmultiple(3, '=');
the output will be: === 

The second function which is 
  printBanner(const char text[]);
  or
  printBanner(char* text);
  
 you can choose what you want according to your needs;
 
 for example 
 
 printBanner("hi");
 
 will output something like this
 
![example](https://user-images.githubusercontent.com/70612293/183226968-08d99fb8-b2b5-4475-853a-5ea7b5ad6c25.JPG)

you can use cmd arguments too as the example in my programs main.
  
  
