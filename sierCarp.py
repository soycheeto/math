import matplotlib.pyplot as plt
def sierpinski_carpet(x, y, size, depth):
    if depth == 0:
        plt.gca().add_patch(plt.Rectangle((x, y), size, size))
    else:
        new_size = size / 3
        for dx in range(3):
            for dy in range(3):
                if dx == 1 and dy == 1:
                    continue
                sierpinski_carpet(x + dx * new_size, y + dy * new_size, new_size, depth - 1)
plt.figure(figsize=(6, 6))
plt.xlim(0, 1)
plt.ylim(0, 1)
sierpinski_carpet(0, 0, 1, depth=4)
plt.show()