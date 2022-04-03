#include "printer.h"

#include <iostream>

using namespace std;

void Printer::intro() {
  cout <<
R"(
     .______        ___   .___________.___________. __       _______      
     |   _  \      /   \  |           |           ||  |     |   ____|     
     |  |_)  |    /  ^  \ `---|  |----`---|  |----`|  |     |  |__        
     |   _  <    /  /_\  \    |  |        |  |     |  |     |   __|       
     |  |_)  |  /  _____  \   |  |        |  |     |  `----.|  |____      
     |______/  /__/     \__\  |__|        |__|     |_______||_______|     
                                                                          
                             ______    _______                            
                            /  __  \  |   ____|                           
                           |  |  |  | |  |__                              
                           |  |  |  | |   __|                             
                           |  `--'  | |  |                                
                            \______/  |__|                                
                                                                          
  ______     ___      .___  ___.  __          ___      .__   __. .__   __.
 /      |   /   \     |   \/   | |  |        /   \     |  \ |  | |  \ |  |
|  ,----'  /  ^  \    |  \  /  | |  |       /  ^  \    |   \|  | |   \|  |
|  |      /  /_\  \   |  |\/|  | |  |      /  /_\  \   |  . `  | |  . `  |
|  `----./  _____  \  |  |  |  | |  `----./  _____  \  |  |\   | |  |\   |
 \______/__/     \__\ |__|  |__| |_______/__/     \__\ |__| \__| |__| \__|
)";

}

void Printer::death() {
  cout <<
R"(
______ _____  ___ _____ _   _ 
|  _  \  ___|/ _ \_   _| | | |
| | | | |__ / /_\ \| | | |_| |
| | | |  __||  _  || | |  _  |
| |/ /| |___| | | || | | | | |
|___/ \____/\_| |_/\_/ \_| |_/

You succumb to the darkness of death...
Returning to the last saved state.
)";

}

void Printer::optionsFight() {
  cout << "Attack / Flee : ";
}

void Printer::optionsService() {
  cout << "Yes / No : ";
}

void Printer::ending() {
  cout <<
R"(
The clash of armour, swords, and shields
Ceased with a critical strike of your blade.
Your foe lies lifeless on the batlefield
Your foe, "Mordred, the Renegade".

The people of Camelot sing songs of your fight
"The slayer of Mordred - {Warrior} the "
None is stranger to your loyalty and might
bbla bla bla

Your feat is commended by ba bla
)";
}