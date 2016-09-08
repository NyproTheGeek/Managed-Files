#ifndef MESH_H
#define MESH_H

#include <QList>
#include <QString>
#include <array>

class Mesh
{
public:
    Mesh();
    QString name;
    QList<std::array<float, 4>> vertices; // vertexPosition||vertexUV
    QList<std::array<int, 3>> indices;
    QList<std::array<float, 3>> meshSeamVertices;  // vertexPosition||influence
    QList<std::array<int, 3>> meshSeamVertexIndices;
    std::array<float, 8> abstractMeshVertices;
    std::array<int, 6> abstractMeshVertexIndices;
};

#endif // MESH_H
