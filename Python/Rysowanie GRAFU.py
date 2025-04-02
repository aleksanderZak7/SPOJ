def convert_to_dot(graph_type, edges):
    if graph_type in {'d', 'dw'}:
        dot_type = 'digraph'
        connector = '->'
    else:
        dot_type = 'graph'
        connector = '--'
    dot_representation = [f"{dot_type} {{"]
    for edge in edges:
        if len(edge) == 3:
            dot_representation.append(f"{edge[0]} {connector} {edge[1]} [label = {edge[2]}];")
        else:
            dot_representation.append(f"{edge[0]} {connector} {edge[1]};")
    dot_representation.append('}')
    return '\n'.join(dot_representation)

graphs = []
t = int(input())
for _ in range(t):
    edges = []
    graph_type = input()
    n = int(input())
    for _ in range(n):
        edge_data = input().split()
        edges.append(edge_data)
    graphs.append((graph_type, edges))
for graph_type, edges in graphs:
    print(convert_to_dot(graph_type, edges), '\n')