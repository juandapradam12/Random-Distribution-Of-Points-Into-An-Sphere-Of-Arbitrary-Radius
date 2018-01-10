from mpl_toolkits.mplot3d import Axes3D
import matplotlib.pyplot as plt
from matplotlib import cm
from matplotlib.ticker import LinearLocator, FormatStrFormatter
import numpy as np

Puntos = np.loadtxt('Puntos.dat')

X = Puntos[:,0]
Y = Puntos[:,1]
Z = Puntos[:,2]

fig = plt.figure()
ax = fig.gca(projection='3d')

ax.scatter(X, Y, Z, linewidth=0.2, antialiased=True)
ax.set_xlim3d(-2.0,2.0)
ax.set_ylim3d(-2.0,2.0)
ax.set_zlim3d(-2.0,2.0)

plt.savefig("Esfera.png")

plt.show()



