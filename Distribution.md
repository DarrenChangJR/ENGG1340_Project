Three files to be done: Community service, Bandits and final boss:
Comunity service: Aidan
Bandits: Darren (3 lvl easy, medium, hard) bandits general about is 3x (x = 1 for easy x = 2 for medium ...) DMM
Final boss: both

**In main folder (Where game runs):**
* struct for player 
  - consist of  Random crit
  - random dodge
  - character information and items

* Game flow
- Introduction of the story -> enrol into training camp
- Community Service part -> give the user some task and they are able to choose if they would like to do it or not -> Helping with Chruch activities -> Since the country is facing lack of food, so need to help with harvesting -> Patrol town and then notice elderly and children. Random generator for different community service out of 4 choose 2.
- (Transition) Suddenly while your are helping an children or elderly some robbers rob a nearby stall
- Bandits parts -> promoted to task on more demanding and higher responsibility task eg escorting a noble person -> Personal guard of morded
- If they fail to defeat bandits / final boss then they will restart at last done community service.
- Notice morded is acting sussss in the preparation of The Battle of Camlann.
- (Final Boss stage)
- You have been told to help participate in the battle of Camlann. (Figthing .......) Suddenly you realized that morded is planning to kill the king. Then you fight morder ....
-  End

**Functions to be created**
* game introduction: Aidan
  - Enter name 
  - Scenes
  - goal / motives ( explain the whole story of the young boy/ girl .....)
  - etc
 
* Game Ending: Darren
  - If player loss or win
  - win = game end (Bla bla bla have join the round table)
  - loss = repeat at last done communtiy service
  - story ending
  - bla bla bla
  
* Responses by character
  - Yes / No to doing activities (Main file) ( Community service)
  - Attack / Flee (Main file) (Final boss and bandits)

* File section for loading and current progress
  - Using fstream and for loop and if condition to check the current status

* Function to store current character info
  - Array to store player health, items, attack dmg, luck


** Character Array (Details) **
* Health [Double]
* Damage [Double]
* Luck/crit chance [int] (so when crit chance increase we increase a variable call crit then when randomising we take our total random - crit to get the number we random in.)
* Items (Elixir) stored using a vector
* Experience (XP lvl 1-5 lvl) (Increase Experience by holy blessing) [Double]

Extra stuff:
https://emojicombos.com/knight
https://www.newgrounds.com/art/view/moopseal/ascii-knight
