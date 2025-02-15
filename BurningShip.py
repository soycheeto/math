import numpy as np
import matplotlib.pyplot as plt

def burning_ship_fractal(xmin, xmax, ymin, ymax, width, height, max_iter):
    x = np.linspace(xmin, xmax, width)
    y = np.linspace(ymin, ymax, height)
    X, Y = np.meshgrid(x, y)
    C = X + 1j * Y
    Z = np.zeros_like(C, dtype=np.complex64)
    fractal = np.zeros(C.shape, dtype=np.uint8)
    
    for i in range(max_iter):
        mask = np.abs(Z) < 2
        Z[mask] = (np.abs(Z[mask].real) + 1j * np.abs(Z[mask].imag)) ** 2 + C[mask]
        fractal[mask] = i
    
    return fractal

def plot_fractal(fractal):
    plt.figure(figsize=(10, 10))
    plt.imshow(fractal, cmap='inferno', extent=[-2, 1, -2, 1])
    plt.colorbar()
    plt.title("Burning Ship Fractal")
    plt.show()

def fractal_dimension(N, S):
    return np.log(N) / np.log(S)

if __name__ == "__main__":
    fractal = burning_ship_fractal(-2, 1, -2, 1, 800, 800, 100)
    plot_fractal(fractal)
    N = 100 
    S = 2   
    dim = fractal_dimension(N, S)
    print(f"Fractal Dimension: {dim}")
