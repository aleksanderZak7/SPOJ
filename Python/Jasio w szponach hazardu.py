def valide_score(bets, goal_count):
    correct_predictions = 0
    for match, bet in bets.items():
        home, away = match.split(' - ')
        home_goals = goal_count.get(home, 0)
        away_goals = goal_count.get(away, 0)
        if home_goals > away_goals:
            result = '1'
        elif home_goals < away_goals:
            result = '2'
        else:
            result = '0'
        if result in bet:
            correct_predictions += 1
    print('TAK' if correct_predictions == len(bets) else f'NIE {correct_predictions}/{len(bets)}')

n = int(input())
for _ in range(n):
    m = int(input())
    bets = {}
    for i in range(m):
        match, bet = input().rsplit(' ', 1)
        bets[match] = bet
    q = int(input())
    goal_count = {}
    for _ in range(q):
        team = input()
        goal_count[team] = goal_count.get(team, 0) + 1
    valide_score(bets, goal_count)