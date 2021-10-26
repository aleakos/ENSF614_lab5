
// #include <vector>
// #include <iostream>
// #include <iomanip>

// int main()
// {
//     typedef std::vector<int> row;
//     typedef std::vector<row> matrix;

//     int numRows = 3;
//     int numCols = 4;

//     matrix m;

//     m.resize(numRows);

//     for (int i = 0; i < m.size(); i++)
//         m.at(i).resize(numCols);

//     for (int i = 0; i < m.size(); i++)
//         for (int j = 0; j < m.at(i).size(); j++)
//         {
//             m.at(i).at(j) = i * j;
//             std::cout << std::setw(3) << m.at(i).at(j);
//         }
// }