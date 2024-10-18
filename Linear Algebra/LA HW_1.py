
import numpy as np

# Function for Gaussian Elimination
def gaussian_elimination(a, b):
    n = len(b)
    # Forward elimination
    for i in range(n):
        # Partial pivoting
        max_row = i + np.argmax(np.abs(a[i:n, i]))
        if max_row != i:
            a[[i, max_row]] = a[[max_row, i]]
            b[[i, max_row]] = b[[max_row, i]]
        # Eliminate column entries below pivot››
        for j in range(i+1, n):
            factor = a[j, i] / a[i, i]
            a[j, i:] -= factor * a[i, i:]
            b[j] -= factor * b[i]

    # Backward substitution
    x = np.zeros(n)
    for i in range(n-1, -1, -1):
        x[i] = (b[i] - np.dot(a[i, i+1:], x[i+1:])) / a[i, i]
    return x

# Function for Gauss-Jordan Elimination
def gauss_jordan_elimination(a, b):
    n = len(b)
    # Form augmented matrix
    aug_matrix = np.hstack([a, b.reshape(-1, 1)])
    
    # Forward elimination and partial pivoting
    for i in range(n):
        aug_matrix[i] = aug_matrix[i] / aug_matrix[i, i]
        for j in range(n):
            if i != j:
                aug_matrix[j] -= aug_matrix[i] * aug_matrix[j, i]

    # Extract solution
    return aug_matrix[:, -1]

# Example system of equations
A = np.array([[2, -1, 3],
              [1, 3, 2],
              [3, -1, -2]], dtype=float)
B = np.array([5, 13, -1], dtype=float)

# Gaussian Elimination
gaussian_solution = gaussian_elimination(A.copy(), B.copy())
print("Solution using Gaussian Elimination:", gaussian_solution)

# Gauss-Jordan Elimination
gauss_jordan_solution = gauss_jordan_elimination(A.copy(), B.copy())
print("Solution using Gauss-Jordan Elimination:", gauss_jordan_solution)
