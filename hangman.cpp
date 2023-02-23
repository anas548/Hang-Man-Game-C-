#include<iostream>
#include<string>// string library
using namespace std;
 int playgame(string word) // function
{ int misses=0; 
  int exposed=0;
  string display=word;
  for(int i=0;i< display.length();i++)  // display.lenght= lenght of the word it is a defined function
  
  	display[i]='*';
  	while(exposed<word.length()&&misses<7) // exposed words are less than word lenght and while misses are less than 7 misses are 0
  	{   cout<<"Miss"<<misses<<":"; // output the misses
  		cout<<"Enter a letter in word:";
  		cout<<display<<" : ";// display * to total numbers of word 
  		char response;
  		cin>>response;
  		bool duplicate=false;// if user enter duplicate word
  		bool goodguess= false;
  		 for(int i=0;i<word.length();i++)
  		 
  		 	if(response==word[i]){
			   
  		 	 if(display[i]==word[i]){
  		 		cout<<response <<"is already in the word.\n";// when duplicate word is entered
  		 		duplicate= true;
  		 		break;
			   }
			   else{
			   
			   display[i]= word[i];// change * to to word given if matched
  		 	exposed++; // when word matched increment exposed 
  		 	   goodguess= true;}			   
}
			    if(duplicate==true)
			   {
			   
			   continue;}// if user enter duplicate word skip the next line 
			    if(goodguess!= true)
			    {
				misses++;// if guess is not right
			    cout<<response<<" is not in the word.\n ";// this part will be skiped if user enter duplicate word
			   }
		   
	  } if(misses<7){// only display the world if user guessed the world
	  
	  cout<<"Yes, word was "<<word<<"."<<endl;}
	  return misses;
  }
 	
int main()// main function
{  

	cout<<"You missed "<<playgame("anas")	;// the word which you want to be guessed
	cout<<" Times to guess the word ."<<endl;
}
