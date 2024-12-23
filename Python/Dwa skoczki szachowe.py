def chess_position_to_coordinates(pos):
    column, row = pos
    x = ord(column) - ord('a') + 1
    y = int(row)
    return x, y

def is_valid_move(pos1, pos2):
    KNIGHT_MOVES = ((2, 1), (2, -1), (-2, 1), (-2, -1), (1, 2), (1, -2), (-1, 2), (-1, -2))
    x1, y1 = chess_position_to_coordinates(pos1)
    x2, y2 = chess_position_to_coordinates(pos2)
    for dx, dy in KNIGHT_MOVES:
        if (x1 + dx, y1 + dy) == (x2, y2):
            return 'TAK'
    return 'NIE'

knight1, knight2 = input().split()
print(is_valid_move(knight1, knight2))