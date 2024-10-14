import time

def main_file():

	name = input("Enter the file name: ")
	file = open(name, "r")

	start = time.perf_counter()
	line = file.readline()
	pars = line.split()
	numnodes = (int)(pars[0])
	numedges = (int)(pars[1])
	
	print(numnodes, numedges)
	
	"""g = Graph(numnodes)"""
	
	for i in range(numedges):
		row = file.readline()
		lista = row.split()
		city = int(lista[0])
		goal = int(lista[1])
		weight = int(lista[2])
		print(city, goal, weight)
		
		"""add_edge(g, city, goal, weight)"""
		
	last = file.readline()
	liste = last.split()
	destination = int(liste[0])
	print(destination)	
	
	
"""class Graph:

	def _init_(self,numedges):
		self.numedges = numedges
		self.adj_list = [[] for x in range(0,numedges+1)]
		self.pred = [0 for x in range [0,numedges+1]]
		self.dist = [INF for x in range(0,numedges+1)]
		
		
		
def add_edge(g,x,y,wght=0):
	
	g.adj_list[x].append((x,y,wght))
	g.adj_list[y].append((y,x,wght))
	
	
def dijkstra(g, s):

	for i in range(g.numedges+1):
		g.dist[i] = 0
		g.pred[i] = 0
		
	g.dist[s] = INF
	
	queue = [i for i in range(1,g.numedges+1)]
	
	while queue:
		max = 0
		maxnode = 0
		for x in queue:
			if g.dist[x] > max:
				max = g.dist[x]
				maxnode = x
		
		queue.remove(maxnode)
		
		for edge in g.adj_list[maxnode]:
			naapuri = edge[1]
			paino = edge[2]"""
		
		
	


	
main_file()