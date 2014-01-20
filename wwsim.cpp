#include <cstdlib>
#include <iostream>
//here it is
//i'll show an invalid number then a correct number
//there it is

using namespace std;

int main(void)
{
    cout <<"welcome to defcon scenario simulator dev-beta version 0.0.1.0 codename 'beta-charlie'" <<endl;
    int defcon;
    int score;
    score=0;
    char name;
    char change;
    cout << "The Current state of our security is 5 (the best) dont let it get down to 1 (the worst) " <<endl; 
    defcon = 5;
    system("PAUSE");
           cout << "the North Koreans have developed a long-range balistic missile that can hit as far Austin,Texas" <<endl;
           cout << "your base is located at Washington DC, there aren't any civilians in that area, and no military bases either" <<endl;
           cout << "do you want to change the security level" <<endl;
           cout << "type Y/n"  <<endl;
           cin  >> change;
           if (change == 'Y' || change == 'y')
           {
              cout << "what do you want to change it to" <<endl;
              cin  >> defcon;
              }
           else
           
               system("PAUSE");
               cout << "ready" <<endl;
              
               
               
           if  (defcon <= 1 )
           {
               score = 0;
               cout << " YOU MONSTER YOU HAVE JUST STARTED WORLD WAR III!" <<endl;
               cout << "GAME OVER" <<endl;
               cout << "your score was" <<endl <<score;
               system("PAUSE");
               return EXIT_SUCCESS;
               } 
          else
          
              if (defcon >= 6 )
              {
                 cout << "invalid number" <<endl;
                 cout << "please reenter the number, remember it can only be between 1-5 " <<endl;
                 cin  >> defcon;
              }
              else
              {}
                 if  (defcon <= 1 || defcon >= 6 )
               {
               score = 0;
               cout << " YOU MONSTER YOU HAVE JUST STARTED WORLD WAR III!" <<endl;
               cout << "GAME OVER" <<endl;
               cout << "your score was" <<endl <<score;
               system("PAUSE");
               return EXIT_SUCCESS;
               }
          
              else
                  {   
              score + 1;
               
               cout << "Germany has been reoccupied by the Nazi party once again" <<endl;
               cout << "this time they are very pregudice against non arians and some arians without blonde hair and/or blue eyes" <<endl;
               cout << "the outcasts take refuge in colorado tofeel like home" <<endl;
               cout << "the north koreans are poised to attack the hottest location on a heatmap in range of thier bombs" <<endl;
               cout << "the refugees would have to move to the shelter in the chyenne mountains and live there until the north korean bomb threat is done with " <<endl;
               cout << "do you want to change the security level" <<endl;
           cout << "type Y/n"  <<endl;
           cin  >> change;
           }
           if (change == 'Y' || change == 'y')
           {
              cout << "what do you want to change it to" <<endl;
              cin  >> defcon;
            if (defcon <= 1)
               {
               cout << "Game over" <<endl;
               cout << "score" <<endl <<score;
               }
           else 
           {}
                if (defcon >= 6)
                {
                  cout << "invalid number remember olnly 1 - 5" <<endl;
                  cin  >> defcon;}
                  }
                       
                   else
                {
                    cout << "ready?" <<endl;
                    system("PAUSE");
                }    
                if (defcon <= 1 || defcon >= 6)
                  {
                             cout << "Game over" <<endl;
               cout << "score" <<endl <<score;
               system("PAUSE");
               return EXIT_SUCCESS ;    
                                  }   
                                  
                
              
           else if (defcon <= 5)
           {
               score + 1;
               cout << "ready" <<endl;
               system("PAUSE");
           
           }
            cout << "the neo nazis have teamed up with the north koreans create the 'two point comm system' and have just taken all of europe. north korea has deployed 100,0000 troops" <<endl;
            cout << "they are able to hit all of the us ... BUT you have deployed troops and have occupied neo nazia (germany) and have restored control throughout the continent" <<endl;
            cout << "the 100,000 north korean troops have moved and are now in Elpaso, Texas" <<endl;
            cout << "the paths of the soldiers appear heading to maine" <<endl;
            cout << "they are armed with heavy artillery and carry 50 high capacity magazines a person" <<endl;
            cout << "do you want to change the security level" <<endl;
            cout << "type Y/n"  <<endl;
            cin  >> change;
           if (change == 'Y' || change == 'y')
           {
              cout << "what do you want to change it to" <<endl;
              cin  >> defcon;
            if (defcon <= 1)
               {
               cout << "Game over" <<endl;
               cout << "score" <<endl <<score;
               }
           else 
           {}
                if (defcon >= 6)
                {
                  cout << "invalid number remember olnly 1 - 5" <<endl;
                  cin  >> defcon;}
                  }
                       
                   else
                {
                    cout << "ready?" <<endl;
                    system("PAUSE");
                }    
                if (defcon <= 1 || defcon >= 6)
                  {
                             cout << "Game over" <<endl;
               cout << "score" <<endl <<score;
               system("PAUSE");
               return EXIT_SUCCESS ;    
                                  }   
                                  
                
              
           else
           {
               score + 1;
               system("PAUSE");
           }
          cout << "the north korean soldiers have captured maine and are moving down to your location" <<endl;
          cout << "you have launched missiles but they have been intercepted" <<endl;
          cout << "you have sent 100 soldiers every hour" <<endl;
          cout << "your efforts and draftable troops have been exsausted"<<endl;
               
           
           //this is the code for a defcon scenario simulator
    system("PAUSE");
    return EXIT_SUCCESS;
}
