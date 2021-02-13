
#include <iostream>
#include <string>
using namespace std;
void frequency(char string[],int size); //functions declaration
void print_decryption();

int main() {
	
	const int length=1000; //size of string
 	char string[length] = "lrvmnir bpr sumvbwvr jx bpr lmiwv yjeryrkbi jx"
	 " qmbm wi bpr xjvni mkd ymibrut jx irhx wi bpr riirkvr jx ymbinlmtmipw"
	 " utn qmumbr dj w ipmhh but bj rhnvwdmbr bpr yjeryrkbi jx bpr qmbm mvvjudwko"
	 " bj yt wkbrusurbmbwjk lmird jk xjubt trmui jx ibndt wb wi kjb mk rmit bmiq"
	 " bj rashmwk rmvp yjeryrkb mkd wbi iwokwxwvmkvr mkd ijyr ynib urymwk nkrashmwkrd"
	 " bj ower m vjyshrbr rashmkmbwjk jkr cjnhd pmer bj lr fnmhwxwrd mkd wkiswurd bj"
	 " invp mk rabrkb bpmb pr vjnhd urmvp bpr ibmbr jx rkhwopbrkrd ywkd vmsmlhr jx"
	 " urvjokwgwko ijnkdhrii ijnkd mkd ipmsrhrii ipmsr w dj kjb drry ytirhx bpr xwkmh"
	 " mnbpjuwbt lnb yt rasruwrkvr cwbp qmbm pmi hrxb kj djnlb bpmb bpr xjhhjcwko wi"
	 " bpr sujsru msshwvmbwjk mkd wkbrusurbmbwjk w jxxru yt bprjuwri wk bpr pjsr bpmb"
	 " bpr riirkvr jx jqwkmcmk qmumbr cwhh urymwk wkbmvb" ;
	 
    frequency(string,length);  //functions call
	print_decryption();
	  
  	return 0;
}

void frequency(char string[],int size){
	
	int i = 0, j,count=0, letters[26] = {};       // initilazing variables and array that will store the letter-frequency 
    double frequencies=0.0;                          // in order to display frequencies as a double because in int it will be just 0 for every letter
    
    while (string[i] != '\0') {			   //check every char until the end
      if (string[i] >='a' && string[i] <= 'z') {  //check all letters in string from a to z
         j = string[i]-'a';		         //stores  frequencies of these letters
          letters[j]++;    		        //increment frequences of letters
      }
      	i++;				      //increment loop
      	count++;		             //count all letters
      		if (string [i]==' ')
      		count--;		   //decrement if it is  space
   }
    
 
  cout<<"Letters"<<"\t"<<"Times"<<"\t "<<"  Frequencies"<<endl;
  
   for (i = 0; i < 26; i++){
   frequencies =static_cast<double>(letters[i]) / (double)(1.0 * count); //convert integer to double
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(4);                                                   //to reduce frequency to 4 precisions number
   cout<<" "<<char(i + 'a')<<" : \t"<< letters[i] <<"\t : \t"<< frequencies <<endl; //print results in the table format
}
   cout<<"Sum of all letters : "<<count<<endl;
}
// for(int i = 0; str[i] != '\0'; i++)
// 	{
// 		freq[str[i]]++;
    
//         count++;							  //count all letters
//       		if (str [i]==' ')
//       		count--;						//decrement if it is  space
// 	}
	

// 	for(int i = 0; i < 256; i++)
// 	{
// 		if(freq[i] != 0)
// 		{
// 			cout << (char)i << "" << freq[i] << endl;
// 		}
// 	}
//         cout<<"size"<< count<<endl;
// 	}


void print_decryption(){
	cout<<endl<<"Decrypted text :"
		<<endl<<"\nBecause the practice of the basic movements of kata is the focus and mastery of self is the essence of "
		"matsubayashi ryu karate do I shall try to elucidate the movements on the kata according to my "
		"interpretation based on forty years of study it is not an easy task to explain each movement and " 
		"its significance and some must remain unexplained to give a complete explanation one would " 
		"have to be qualified and inspired to such an extent that he could reach the state of enlightened " 
		"mind capable of recognizing soundless sound and shapeless shape I do not deem myself the final "
		"authority but my experience with kata has left no doubt that the following is the proper "
		"application and interpretation I offer my theories in the hope that essence of Okinawan "
		"karate will remain intact.";
}
