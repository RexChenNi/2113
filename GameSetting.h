// GameSetting.h
#ifndef GAME_SETTING_H
#define GAME_SETTING_H

#include <map>
#include <string>
#include <vector>
#include <utility>

using namespace std;

class GameSetting {
public:
    // Public methods
    void initialize_game();
    void start_of_day();
    pair<char, char> selection_menu();
    void perform_action();
    void exploreIsland();
    void cookFood();
    void eatFood();
    void craftItem();
    void rest();
    void hunting();
    void attempt_escape();
    void print_bag();
    void nightEvent();
    string weather_ran();
    pair<int, int> deduction();
    int check_health();
    bool check_gun_bullet_blueprint();
    bool check_signal_flare_blueprint();
    bool check_armor_blueprint();
    void blueprint_list();
    void wildAnimalAttack();
    void poor_sleeping_quality();
    void delete_list(Node*& head); // Method declaration

private:
    int day;
    int HP;
    int Hunger;
    int Mental;
    int step_remains;
    map<string, int> bag;
    vector<string> blueprints;
    string weather;

    struct Node { // Declare Node struct within the class
        string name;
        Node* next;
    };

    void delete_list(Node*& head); // Method declaration
};

#endif // GAME_SETTING_H