#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Password generator inspired by an exercise in
 * Dan Gookin's *Tiny C Projects*
 */

const char *adjectives[] = {
	"Amber", "Black", "Blue", "Brown", "Crimson", "Green",
	"Indigo", "Lemon", "Lilac", "Magenta", "Orange", "Pink",
	"Purple", "Red", "Scarlet", "Violet", "White", "Yellow"
};

const char *nouns[] = {
	"Aardvark", "Antelope", "Badger", "Bear", "Beaver", "Buffalo",
	"Bumfuzzle", "Bunghole", "Camel", "Cleek", "Dingus", "Dolphin",
	"Donkey", "Doddle", "Dollop", "Doozy", "Dove", "Dragonfly", "Eagle",
	"Elephant", "Falcon", "Ferret", "Finch", "Gibberish", "Giraffe",
	"Goose", "Gorilla", "Grouse", "Hamster", "Heron", "Herring",
	"Hogwash", "Horse", "Hound", "Hyena", "Jackal", "Jaguar", "Koala",
	"Lemur", "Leopard", "Llama", "Lobster", "Locust", "Louse", "Magpie",
	"Manatee", "Meerkat", "Moose", "Noob", "Octopus", "Otter", "Oyster",
	"Panther", "Parrot", "Pelican", "Penguin", "Pigeon", "Popple",
	"Possum", "Puffin", "Puggle", "Quail", "Rabbit", "Raccoon",
	"Ragamuffin", "Ragout", "Salmon", "Scorpion", "Skirl", "Snake",
	"Thing", "Tiger", "Titter", "Turtle", "Viper", "Widget", "Wolf",
	"Zebra"
};

const char symbol[] = "!@#$%^&*-+/?";

int main()
{
    int random_adjective, random_noun, random_symbol, number;
    srand((unsigned) time(NULL));
    random_adjective = rand() % (sizeof(adjectives) / sizeof(char *));
    random_noun = rand() % (sizeof(nouns) / sizeof(char *));
    number = rand() % 100;
    random_symbol = rand() % (sizeof(symbol) / sizeof(char));
    printf("%s%s%d%c\n", adjectives[random_adjective], nouns[random_noun],
           number, symbol[random_symbol]);
}
