#include <stdio.h>

typedef enum {
  ACE = 1,
  TWO = 2,
  THREE = 3,
  FOUR = 4,
  FIVE = 5,
  SIX = 6,
  SEVEN = 7,
  EIGHT = 8,
  NINE = 9,
  TEN = 10,
  JACK = 10,
  QUEEN = 10,
  KING = 10,
} card_value;

typedef struct {
  char *name;
  card_value cv;
} card;

int main(void) {
  int deck_count = 2;

  card ace = {"ace", ACE};
  card two = {"two", TWO};
  card three = {"three", THREE};
  card four = {"four", FOUR};
  card five = {"five", FIVE};
  card six = {"six", SIX};
  card seven = {"seven", SEVEN};
  card eight = {"eight", EIGHT};
  card nine = {"nine", NINE};
  card ten = {"ten", TEN};
  card jack = {"jack", JACK};
  card queen = {"queen", QUEEN};
  card king = {"king", KING};

  card card_types[13] = {ace,   two,  three, four, five,  six, seven,
                         eight, nine, ten,   jack, queen, king};

  card deck[52 * deck_count];
  int deck_length = sizeof deck / sizeof(card);
  int card_count = 0;

  for (int i = 0, j = 0; i < deck_length; i++) {
    deck[i] = card_types[j];
    card_count++;

    if (card_count % (4 * deck_count) == 0) {
      j++;
    }
  }

  int card_num = 52;
  printf("%s is card %d in the deck", deck[card_num - 1].name, card_num);
}
