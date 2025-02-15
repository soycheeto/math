#write a program that generates fractals using the last two and the last digit of your USN as parameters. Execute your code and determine the fractal dimensions. Submit your implementation along with the computed results.

import numpy as np
import matplotlib.pyplot as plt
def sierpinski_triangle(points, depth):
    if depth == 0:
        triangle = plt.Polygon(points)
        plt.gca().add_patch(triangle)
    else:
        mid1 = (points[0] + points[1]) / 2
        mid2 = (points[1] + points[2]) / 2
        mid3 = (points[0] + points[2]) / 2
        sierpinski_triangle([points[0], mid1, mid3], depth - 1)
        sierpinski_triangle([mid1, points[1], mid2], depth - 1)
        sierpinski_triangle([mid3, mid2, points[2]], depth - 1)
plt.figure(figsize=(6, 6))
plt.xlim(0, 1)
plt.ylim(0, 1)
triangle_points = np.array([[0.5, 1], [0, 0], [1, 0]])
sierpinski_triangle(triangle_points, depth=5)
plt.show()