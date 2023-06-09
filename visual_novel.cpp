#include "visual_novel.h"
#include <iostream>
using namespace std;

void VisualNovel::run() {
    // Set up the scenes
    
    Scene scene1;
    scene1.dialogue = "I arrive at the house of my boyfriend. Hristo Botev. Also known as Botyo.";
    scene1.imagePath = "house_ui.png";
    scenes_.push_back(scene1);

    Scene scene2;
    scene2.dialogue = "I wanted discuss his newspaper and poetry. My least favourite one was Do moeto parvo libe. He obviously used me as inspiration.";
    scene2.imagePath = "house_ui.png";
    scenes_.push_back(scene2);

    Scene scene3;
    scene3.dialogue = "I knocked on the door. I wait for him to open and let me in.";
    scene3.imagePath = "house_ui.png";
    scenes_.push_back(scene3);

    Scene scene4;
    scene4.dialogue = "Oh! I didn't expect you to show today. How are you doing?";
    scene4.imagePath = "house_ui_botyo.png";
    scenes_.push_back(scene4);

    Scene scene5;
    scene5.dialogue = "I'm good, thank you! You posted your first newspaper Duma na balgarskite emigranti . Congratulations, Botyo!";
    scene5.imagePath = "house_ui_botyo.png";
    scenes_.push_back(scene5);

    Scene scene6;
    scene6.dialogue = "Thank you! It was so hard to write all those articles. And I finally have a place to post my poems."; 
    scene6.imagePath = "house_ui_botyo.png";
    scenes_.push_back(scene6);
    //before the newspaper he had to post them in spisanie playboy

    Scene scene7;
    scene7.dialogue = "Finally more people will read your beautiful poems. I wanted to discuss some of your poems. Specifically Do moeto parvo libe.";
    scene7.imagePath = "house_ui_botyo.png";
    scenes_.push_back(scene7);

    Scene scene8;
    scene8.dialogue = "O-oh. Y-yes about that. I'm sorry you had to find out like this, but it's better this way. *He looked sad*"; 
    scene8.imagePath = "house_ui_botyo.png";
    scenes_.push_back(scene8);
    // how do ppl talk to each other
    // do moeto parvo libe koeto se gurmna. i was sad and then i ate meatballs. meatball good. life good too.

   Scene scene9;
    scene9.dialogue = "We have been dating for 6 MONTHS! AND YOU BREAK UP WITH ME IN THE NEWSPAPER! HOW DARE YOU?!";
    scene9.imagePath = "house_ui_botyo.png";
    scenes_.push_back(scene9); 

    Scene scene10;
    scene10.dialogue = "I'm sorry! *He cried out* But I have to leave to fight in war for Independance tomorrow. IT WAS THE ONLY WAY.";
    scene10.imagePath = "house_ui_botyo.png";
    scenes_.push_back(scene10);

    Scene scene11;
    scene11.dialogue = "THE ONLY WAY? YOU COULD HAVE TALKED TO ME, WROTE ME A LETTER! LITERALLY ANYTHING! BUT YOU CHOSE TO BREAK UP WITH ME IN THE NEWSPAPER.";
    scene11.imagePath = "scene11.png";
    scenes_.push_back(scene11);
    // botev is based af
    // bro gotta make money for way, hes so real

    Scene scene12;
    scene12.dialogue = "I WROTE YOU A POEM AND YOU ARE COMPLAINING THAT I'M BREAKING UP WITH YOU? WOMAN, I WILL SERVE MY DUTY AS A MAN AND SAVE THIS COUNTRY";
    scene12.imagePath = "scene12.png";
    scenes_.push_back(scene12);
    // i didint think id ever write botev being lowkey misogynystic but look at what programming did to me


    Scene scene1;
    scene1.dialogue = "Welcome to the Visual Novel!";
    scene1.imagePath = "scene1.png";
    scenes_.push_back(scene1);

    Scene scene2;
    scene2.dialogue = "Choose an option:";
    scene2.imagePath = "scene2.png";
    scene2.choices = {
        {"Option A", 1},
        {"Option B", 2},
        {"Option C", 3}
    };
    scenes_.push_back(scene2);
    
    // Add more scenes as needed
    
    int sceneIndex = 0;
    while (sceneIndex < scenes_.size()) {
        const Scene& currentScene = scenes_[sceneIndex];
        displayScene(currentScene);
        
        if (currentScene.choices.empty()) {
            // End of the visual novel
            std::cout << "Thank you for playing the Visual Novel!" << std::endl;
            break;
        }
        
        int playerChoice = getPlayerChoice();
        if (playerChoice >= 0 && playerChoice < currentScene.choices.size()) {
            sceneIndex = currentScene.choices[playerChoice].nextIndex;
        } else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
}

void VisualNovel::displayScene(const Scene& scene) {
    std::cout << scene.dialogue << std::endl;
    // Code to display the image using the imagePath
}

int VisualNovel::getPlayerChoice() {
    int choice;
    std::cin >> choice; // hi
    return choice;
}

