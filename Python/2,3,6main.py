def check_sequence(sequences):
    def find_min_ab():
        for i in range(1, 1001):
            if i % 6 == 0:
                return i
        return 1001
    
    results = []
    for s in sequences:
        i = 0
        ab = a = b = None
        
        while i < len(s):
            if s[i:i+2] == 'ab':
                if ab is None:
                    ab = find_min_ab()
                i += 2
            elif s[i] == 'a':
                if a is None and ab is not None:
                    a = ab + 1
                i += 1
            elif s[i] == 'b':
                if b is None:
                    if a is not None:
                        b = a + 1
                    else:
                        b = 1
                i += 1
        
        if b is not None and b <= 1000:
            if ab is not None and b - ab == len(s):
                results.append('tak')
            else:
                results.append('nie')
        else:
            results.append('nie')
    
    return results

# Przykład użycia
sequences = ['abab', 'bb', 'aa']
print(check_sequence(sequences))