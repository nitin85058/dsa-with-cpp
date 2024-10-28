
# for i in range(0,5):
#         for j in range(1, i + 1):
#             print(j)
#         print("**")
#         for j in range(i, 0, -1):
#             print(j)
#         print()

def print_pattern(n):
    for i in range(n//2 + 1):
        print("1" * (i == 0), end="")
        print("*" * (2 * i), end="")
        print("1" * (i == 0))
    
    for i in range(n//2 - 1, -1, -1):
        print("1" * (i == 0), end="")
        print("*" * (2 * i), end="")
        print("1" * (i == 0))

# Define the size based on the given pattern (9 for 9 characters across)
print_pattern(5)
    
    

