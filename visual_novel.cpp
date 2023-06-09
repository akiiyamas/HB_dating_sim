#include "visual_novel.h"
#include <iostream>

void VisualNovel::run() {
    // Set up the scenes
    
    Scene scene1;
    scene1.dialogue = "I arrive at the house of my best friend. Hristo Botev. Also known as Botyo.";
    scene1.imagePath = "scene1.png";
    scenes_.push_back(scene1);

    Scene scene2;
    scene2.dialogue = "I wanted discuss his newspaper and poetry. My favourite poem was Do moeto parvo libe. He obviously used me as inspiration.";
    scene2.imagePath = "scene2.png";
    scenes_.push_back(scene2);

    Scene scene3;
    scene3.dialogue = "I knocked on the door. I wait for him to open and let me in.";
    scene3.imagePath = "scene3.png";
    scenes_.push_back(scene3);

    Scene scene4;
    scene4.dialogue = "Oh! I didn't expect you to show today. How are you doing today?";
    scene4.imagePath = "scene4.png";
    scenes_.push_back(scene4);

    Scene scene5;
    scene5.dialogue = "I'm good, thank you! You posted your first newspaper Duma na balgarskite emigranti . Congratulations, Botyo!";
    scene5.imagePath = "scene5.png";
    scenes_.push_back(scene5);

    Scene scene6;
    scene6.dialogue = "Thank you! It was so hard to write all those articles. And I finally have a place to post my poems."; 
    scene6.imagePath = "scene6.png";
    scenes_.push_back(scene6);
    //before the newspaper he had to post them in spisanie playboy

    Scene scene7;
    scene7.dialogue = "Finally more people will read your beautiful poems. I wanted to discuss some of your poems. Specifically Do moeto parvo libe.";
    scene7.imagePath = "scene7.png";
    scenes_.push_back(scene7);


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
    std::cin >> choice;
    return choice;
}

