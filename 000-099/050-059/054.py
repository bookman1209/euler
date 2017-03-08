# Python version 3.4.3

def card_value(value):
    d = {'A': 14, 'K': 13, 'Q': 12, 'J': 11, 'T':10}
    if value.isalpha():
        return d[value]
    else:
        return int(value)

def is_consecutive(sorted_hand_values):
    return sorted_hand_values == [14, 13, 12, 11, 10] or \
           (len(set(sorted_hand_values)) == 5 and \
            sorted_hand_values[0] - sorted_hand_values[4] == 4)

def evaluate_hand(c1, c2, c3, c4, c5):
    """
    Input: 5 strings which represents each card
    Output: Kind of hand, highest cards
    """
    hand_values = list(map(lambda x: card_value(x), [ c1[0], c2[0], c3[0], c4[0], c5[0] ]))
    hand_values.sort(reverse = True)
    hand_suits = [ c1[1], c2[1], c3[1], c4[1], c5[1] ]
    # Check Royal Flush
    if hand_values == [14, 13, 12, 11, 10] and len(set(hand_suits)) == 1:
        return (9, 14)
    # Check Straight Flush
    if is_consecutive(hand_values) and len(set(hand_suits)) == 1:
        return (8, hand_values[0])
    # Check Four of a Kind
    if len(set(hand_values[:4])) == 1 or len(set(hand_values[1:])) == 1:
        return (7, hand_values[2])
    # Check Full House
    if (len(set(hand_values[:2])) == 1 and len(set(hand_values[2:])) == 1) or \
       (len(set(hand_values[:3])) == 1 and len(set(hand_values[3:])) == 1):
        return (6, hand_values[2])
    # Check Flush
    if len(set(hand_suits)) == 1:
        return (5, hand_values[0])
    # Check Straight
    if is_consecutive(hand_values):
        return (4, hand_values[0])
    # Check Three of a Kind
    if len(set(hand_values[:3])) == 1 or \
       len(set(hand_values[1:4])) == 1 or \
       len(set(hand_values[2:])) == 1:
        return (3, hand_values[2])
    # Check Two Pairs
    if hand_values[0] == hand_values[1]:
        if hand_values[2] == hand_values[3]:
            return (2, hand_values[0], hand_values[2], hand_values[4])
        if hand_values[3] == hand_values[4]:
            return (2, hand_values[0], hand_values[3], hand_values[2])
    if hand_values[1] == hand_values[2] and hand_values[3] == hand_values[4]:
        return (2, hand_values[1], hand_values[3], hand_values[0])
    # Check One Pair
    if hand_values[0] == hand_values[1]:
        return (1, hand_values[0], hand_values[2], hand_values[3], hand_values[4])
    if hand_values[1] == hand_values[2]:
        return (1, hand_values[1], hand_values[0], hand_values[3], hand_values[4])
    if hand_values[2] == hand_values[3]:
        return (1, hand_values[2], hand_values[0], hand_values[1], hand_values[4])
    if hand_values[3] == hand_values[4]:
        return (1, hand_values[3], hand_values[0], hand_values[1], hand_values[2])
    # Check High Card
    return tuple([0] + hand_values)

def main():
    f = open("054data.txt", 'r')
    count = 0
    for line in f:
        hands = line.split()
        p1 = hands[:5]
        p2 = hands[5:]
        p1_value = evaluate_hand(p1[0], p1[1], p1[2], p1[3], p1[4])
        p2_value = evaluate_hand(p2[0], p2[1], p2[2], p2[3], p2[4])
        if p1_value > p2_value:
            count += 1
    f.close()
    print("Answer:", count)

main()
