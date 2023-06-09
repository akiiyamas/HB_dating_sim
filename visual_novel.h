#ifndef VISUAL_NOVEL_H
#define VISUAL_NOVEL_H

#include <string>
#include <vector>

// Structure for representing a choice
struct Choice {
    std::string text;
    int nextIndex;
};

// Structure for representing a visual novel scene
struct Scene {
    std::string dialogue;
    std::string imagePath;
    std::vector<Choice> choices;
};

// Class representing the visual novel
class VisualNovel {
public:
    void run();
    
private:
    void displayScene(const Scene& scene);
    int getPlayerChoice();
    
    std::vector<Scene> scenes_;
};

#endif
