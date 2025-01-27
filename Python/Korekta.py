d = int(input())
for _ in range(d):
    stas_win, stas_loss, wies_win, wies_loss, grz_win, grz_loss = map(int, input().split())
    total_games = stas_win + stas_loss
    print((stas_loss + wies_loss + grz_loss) - total_games, (stas_win + wies_win + grz_win) - total_games)