def swap_case(s):

    s = list(s)

    for i in range(len(s)):
        if (s[i] >= 'a' and s[i] <= 'z'):
            s[i] = s[i].upper()
        else:
            s[i] = s[i].lower()

    s = ''.join(str(j) for j in s)
    return s
