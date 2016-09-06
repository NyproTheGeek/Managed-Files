// 06/09/16
// Arrays as Template Parameters
map<int, string[2]> names;
names[0][0] = "ada";
names[0][1] = "ariana";
names[1][0] = "bob";
names[1][1] = "bradley";
// Or Better
map<int, array<string, 2>> names;
names[0][0] = "ada";
names[0][1] = "ariana";
names[1][0] = "bob";
names[1][1] = "bradley";


// 01/09/16
// Read File Line By Line
file.open(fileName, ios::in | ios::out);
string content = "";
while(getline(file, content)){
    cout << content << endl;
}

// Read File Charcater By Character
file.open(fileName, ios::in | ios::out);
char ch;
while(file >> noskipws >> ch){
    cout << ch;
}

// Back to the Beginning of A File After Reading
file.clear();
file.seekg(0, ios::beg);
