import numpy as np
import matplotlib.pyplot as plt

def sierpinski_triangle(ax, points, depth):
    if depth == 0:
        triangle = plt.Polygon(points, edgecolor='black', facecolor='white')
        ax.add_patch(triangle)
    else:
        mid1 = (points[0] + points[1]) / 2
        mid2 = (points[1] + points[2]) / 2
        mid3 = (points[0] + points[2]) / 2
        
        sierpinski_triangle(ax, [points[0], mid1, mid3], depth - 1)
        sierpinski_triangle(ax, [mid1, points[1], mid2], depth - 1)
        sierpinski_triangle(ax, [mid3, mid2, points[2]], depth - 1)

def sierpinski_carpet(ax, x, y, size, depth):
    if depth == 0:
        ax.add_patch(plt.Rectangle((x, y), size, size, edgecolor='black', facecolor='white'))
    else:
        new_size = size / 3
        for dx in range(3):
            for dy in range(3):
                if dx == 1 and dy == 1:
                    continue 
                sierpinski_carpet(ax, x + dx * new_size, y + dy * new_size, new_size, depth - 1)

def fractal_dimension(N, S):
    return np.log(N) / np.log(S)

triangle_dim = fractal_dimension(3, 2)
carpet_dim = fractal_dimension(8, 3)

print(f"Sierpiński Triangle Fractal Dimension: {triangle_dim:.3f}")
print(f"Sierpiński Carpet Fractal Dimension: {carpet_dim:.3f}")

fig, axes = plt.subplots(1, 2, figsize=(12, 6))

ax1 = axes[0]
ax1.set_xlim(0, 1)
ax1.set_ylim(0, 1)
ax1.set_xticks([])
ax1.set_yticks([])
ax1.set_title("Sierpiński Triangle")

triangle_points = np.array([[0.5, 1], [0, 0], [1, 0]])
sierpinski_triangle(ax1, triangle_points, depth=5)

# Sierpiński Carpet
ax2 = axes[1]
ax2.set_xlim(0, 1)
ax2.set_ylim(0, 1)
ax2.set_xticks([])
ax2.set_yticks([])
ax2.set_title("Sierpiński Carpet")

sierpinski_carpet(ax2, 0, 0, 1, depth=4)

plt.show()
