def bfs(graph, start):
    visited, queue = set(), [start]
    while queue:
        vertex = queue.pop(0)
        if vertex not in visited:
            visited.add(vertex)
            queue.extend(graph[vertex] - visited)
    return visited


def dfs(graph, start, visited=None):
    if visited is None:
        visited = set()
    visited.add(start)
    for next in graph[start] - visited:
        dfs(graph, next, visited)
    return visited


def bfs_path(graph, start, end):
    queue = [(start, [start])]
    while queue:
        (vertex, path) = queue.pop(0)
        for next in graph[vertex] - set(path):
            if next == end:
                yield path + [next]
            else:
                queue.append((next, path + [next]))


def dfs_path(graph, start, end, path=None):
    if path is None:
        path = [start]
    if start == end:
        yield path
    for next in graph[start] - set(path):
        yield from dfs_path(graph, next, end, path + [next])

