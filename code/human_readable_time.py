def make_readable(seconds):
    string = ""
    for i in range(2, -1, -1):
        string+="%02d" % ((seconds/60**i),)+":"
        seconds%=60**i

    return string[:-1]
