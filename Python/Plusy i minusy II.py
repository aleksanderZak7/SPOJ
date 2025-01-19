def calculate_grades(activity):
    stack = []
    grades = []
    for char in activity:
        if stack and stack[-1] != char:
            stack.pop()
        else:
            stack.append(char)
            if len(stack) == 3:
                grades.append('5' if char == '+' else '1')
                stack.clear()
    return ' '.join(grades) if grades else 'BRAK'

print(calculate_grades(input()))