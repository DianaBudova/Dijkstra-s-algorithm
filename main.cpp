#include <iostream>
#include <climits>
using std::cout;
using std::endl;

const int size = 4;

void Dijkstra(int graph[size][size], int src);

int main()
{
	int graph[size][size] = { {0, 10, 3, 4},
                            {10, 0, 4, 0},
                            {3, 4, 0, 11},
                            {0, 0, 11, 0} };

	Dijkstra(graph, 3);

	return 0;
}

void Dijkstra(int graph[size][size], int src)
{
    if (src < 0 || src >= size)
        return;

    int temp[size][size];

    // Initialize first line
    ushort i = 0;
    for (i = 0; i < size; i++)
    {
        if (i == src)
        {
            temp[0][i] = 0;
            if (i == size - 1)
                break;
            for (ushort j = i + 1; j < size; j++)
                temp[0][j] = INT_MAX;
            break;
        }
        temp[0][i] = INT_MAX;
    }
    // Initialize other lines
    for (i = 1; i < size; i++) {
        for (ushort j = 0; j < size; j++) {
            temp[i][j] = INT_MAX;
        }
    }

    // print temp
    for (ushort i = 0; i < size; i++) {
        for (ushort j = 0; j < size; j++)
            cout << temp[i][j] << " ";
            cout << endl;
    }
}
