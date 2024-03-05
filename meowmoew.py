class NestedList:
    def __init__(self, elements):
        self.elements = elements

def calculate_sum(nested_list):
    total = 0
    for element in nested_list:
        if isinstance(element, list):
            total += calculate_sum(element)
        elif isinstance(element, (int, float)):
            total += element
    return total

TESTS = [
    (NestedList([[1, 2], [3], [4, 5, 6]]), 21),
    (NestedList([[[[-1], 3], -5], 6, 10]), 13),
    (NestedList([]), 0),
    (NestedList([[2.5, 2.5, [5.0]], 3.2]), 13.2)
]

for nested_list, expected_sum in TESTS:
    calculated_sum = calculate_sum(nested_list.elements)
    print(f"Calculated sum: {calculated_sum}, Expected sum: {expected_sum}")
