def mean(a):
    # a must be acceptable by len
    assert len(a) > 0
    # a must be acceptable by sum
    return sum(a) / len(a)
