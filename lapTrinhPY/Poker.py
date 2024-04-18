
import random
class Card:
    rank_names = [None,"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"]
    suit_names = ["Hearts","Diamonds","Clubs","Spades"]

    def __init__(self, rank=3, suit=3):
        self.rank = rank
        self.suit = suit

    def __str__(self):
        return "%s of %s" % (self.rank_names[self.rank], self.suit_names[self.suit])

class Deck:
    def __init__(self):
        self.cards = []
        for i in range(1,14):
            for j in range(4):
                card = Card(i,j)
                self.cards.append(card)

    def __str__(self):
        res = []
        for item in self.cards:
            res.append(str(item))
        return "\n".join(res)

    def shuffle(self):
        random.shuffle(self.cards) 
        return self
        
    def draw(self):
        return self.cards.pop(0)

class Hand:

    def __init__(self,deck):
        self.cards = []
        for item in range (3):
            card = deck.draw()
            self.cards.append(card)

deck = Deck()
deck_new = deck.shuffle()
hand = Hand(deck_new)
for item in hand.cards:
    print(item)


# # deck.shuffle()
# print(deck)
# card_draw = deck_new.draw()
# print(card_draw)

# # random.shuffle(deck.cards) 
# for item in deck.shuffle():
#     print(item)

