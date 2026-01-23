#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Password generator inspired by an exercise in
 * Dan Gookin's *Tiny C Projects*
 */

const char *color_word[] = {
    "Amber", "Black", "Brown", "Crimson", "Green",
    "Indigo", "Lilac", "Magenta", "Orange", "Pink",
    "Purple", "White", "Yellow"
};

const char *animal_word[] = {
"Antelope", "Badger", "Bear", "Beaver", "Buffalo",
"Camel", "Dolphin", "Donkey", "Dove", "Dragonfly",
"Eagle", "Elephant", "Falcon", "Ferret", "Finch",
"Giraffe", "Goose", "Gorilla", "Grouse", "Hamster",
"Heron", "Herring", "Horse", "Hound", "Hyena",
"Jackal", "Jaguar", "Koala", "Lemur", "Leopard",
"Llama", "Lobster", "Locust", "Louse", "Magpie",
"Manatee", "Meerkat", "Moose", "Octopus", "Otter",
"Oyster", "Panther", "Parrot", "Pelican", "Penguin",
"Pigeon", "Possum", "Puffin", "Quail", "Rabbit",
"Raccoon", "Salmon", "Scorpion", "Tiger", "Turtle",
"Viper", "Zebra"
};

const char symbol[] = "!@#$%^&*-+/?";

const char *thing_word[] = {
"Thing", "Widget", "Doddle", "Bumfuzzle", "Erf", "Titter", "Cleek",
"Noob", "Skirl", "Dollop", "Popple", "Bunghole", "Ragamuffin",
"Puggle", "Gibberish", "Dingus", "Hogwash", "Doozy", "Ragout"
};

int main()
{
    int random_color, random_animal, random_symbol, random_thing, number;
    srand((unsigned) time(NULL));
    random_color = rand() % (sizeof(color_word) / sizeof(char *));
    random_animal = rand() % (sizeof(animal_word) / sizeof(char *));
    number = rand() % 100;
    random_symbol = rand() % (sizeof(symbol) / sizeof(char));
    random_thing = rand() % (sizeof(thing_word) / sizeof(char *));
    printf("%s%s%d%c%s\n", color_word[random_color], animal_word[random_animal],
           number, symbol[random_symbol], thing_word[random_thing]);
}
