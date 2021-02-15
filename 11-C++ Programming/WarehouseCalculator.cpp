// warehouse calculator 

    #include <iostream>
using namespace std;

/* This program will be useful to storekeepers working in the warehouse. If you need to give the goods not boxes, and pieces (as indicated in the consignment note), then the program will help you calculate how many full boxes should be issued, and how many things to add. 

To do this, you need to know:
1 total number of pieces to be issued (indicated on the invoice) =a
2 how many pieces are contained in the box (indicated on the box) =b */

   int main()
{
   int a, b;
   int result1;
   int result2;
   
 /* Enter these two values. And get the result */  
       
        cin >> a;
        cin >> b;    
        
    result1 = a / b; 
    result2 = a % b;
    
         if (a % b == 0)  {
      cout << "Oh, fine! Just give full:\n" << result1 << " boxe(s)" << endl;}
       
        else {
      cout << "Please, give full:\n" << result1 << " boxe(s)," << endl << "and do not forget to add:\n" << result2 << "  pieces" << endl;
        }
        cout << "  Always happy to help YOU! \n HAVE A GOOD DAY!" << endl;
}  

/* This is my first program. I hope that not the last one ))). Please write what you think about it. I will be very interested to hear your opinion. And sorry for my english))) */
