//25/07/16
// getting random value
// RAND_MAX is usually 2^15 -1 = 32767.
 qsrand(QDateTime::currentDateTime().toTime_t());
 int random = qrand() % maxRange;

// getting a hash value
    QString(QCryptographicHash::hash(myString.toUtf8(),QCryptographicHash::Sha3_224).toHex())

// Get DateTime day, month and year as Int
// This is the only way I know of. Dunno why a helper function
// wasn't provided, given one can use date for hashing
    QDateTime currDateTime = QDateTime::currentDateTime();
    qDebug() << currDateTime.toString();
    int currYear = currDateTime.toString("yyyy").toInt();
    int currMonth = currDateTime.toString("MM").toInt();
    int currDay = currDateTime.toString("dd").toInt();
    qDebug() << QString("Year: %1, Month: %2, Day: %3").arg(currYear).arg(currMonth).arg(currDay);

// 14/06/16
// QString is mutable
QString str = "Hello";
str.append(" World!");
str.prepend("Greeting: ");
str.remove(15, 7);

// to add and create a folder in a specified directory
QDir dir(projDir);
dir.mkdir(projName); 
dir.rmdir(projName);

// check for any type
template<class T>
bool isType(QString s){
    std::istringstream iss(s.toStdString());
    T f;
    iss >> std::noskipws >> f; // noskipws considers leading whitespace invalid
    // Check the entire string was consumed and if either failbit or badbit is set
    return iss.eof() && !iss.fail();
}


// convert QString to std::string
QString::toStdString
// Won't lose Unicode properties


// get a directory from File Explorer
QString dir = QFileDialog::getExistingDirectory(
        this,
        tr("Open Directory")
        ,"/home"
        ,QFileDialog::DontUseNativeDialog|QFileDialog::ShowDirsOnly|QFileDialog::DontResolveSymlinks
    );


// get a file from File Explorer
QString fileName = 
	QFileDialog::getOpenFileName(this, tr("Open File"),
        "/home",
        tr("Images (*.png *.xpm *.jpg);;Text files (*.txt);;XML files (*.xml)"));
// use getOpenFileNames(...) to get multiple files


// check if a directory exist
QDir dir(projDir);
if(!dir.exists()){
    addError(0);
}


// check if a file exist
QFileInfo file(projPath);
if(file.isFile() && file.exists()){
    addError(1);
}


// change background color or set style
statusFrame->setStyleSheet("background-color:red;");


// set font family, size, width, italic
QFont f( "Arial", 5, QFont::Thin, true);
pathLabel->setFont(f);


// set size policy
QSizePolicy sp2(QSizePolicy::Expanding, QSizePolicy::Fixed);
nameField->setSizePolicy(sp2);


// shared and weak pointers for breaking cyclic ref
shared_ptr<Dog> p1 = make_shared<Dog>("Bingo");
p1->bark();

shared_ptr<Dog> p2(new Dog [3], [](Dog *p) {delete [] p;});
p2.get();

weak_ptr<Dog> p3;
p3.lock()->p2

// A Search Dialog
#include "MainWindow.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QDialog>
#include <QLineEdit>
#include <QSpinBox>
#include <QCheckBox>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDialog *window = new QDialog;
    window->setWindowTitle("Find");

    QPushButton *findButton = new QPushButton("Find Next");
    QPushButton *closeButton = new QPushButton("Close");
    QLabel *findLabel = new QLabel("Find: ");
    QLineEdit *searchBox = new QLineEdit("Type Here");
    QCheckBox *caseCheckBox = new QCheckBox("Match Case");
    QCheckBox *backwardCheckBox = new QCheckBox("Search Backward");

    findLabel->setBuddy(searchBox);

    QHBoxLayout *topLeft = new QHBoxLayout;
    QVBoxLayout *bottomLeft = new QVBoxLayout;
    QVBoxLayout *left = new QVBoxLayout;
    QVBoxLayout *right = new QVBoxLayout;
    QHBoxLayout *main = new QHBoxLayout;

    topLeft->addWidget(findLabel);
    topLeft->addWidget(searchBox);
    bottomLeft->addWidget(caseCheckBox);
    bottomLeft->addWidget(backwardCheckBox);
    left->addLayout(topLeft);
    left->addLayout(bottomLeft);
    right->addWidget(findButton);
    right->addWidget(closeButton);
    right->addStretch();
    main->addLayout(left);
    main->addLayout(right);

    window->setLayout(main);

    window->show();

    return a.exec();
}

// Nested Splitter
#include <QApplication>
#include <QDialog>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPlainTextEdit>
#include <QSplitter>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDialog *window = new QDialog;
    window->setWindowTitle("Find");

    QPlainTextEdit *textArea1 = new QPlainTextEdit;
    QPlainTextEdit *textArea2 = new QPlainTextEdit;
    QPlainTextEdit *textArea3 = new QPlainTextEdit;

    QSplitter *split1 = new QSplitter(Qt::Horizontal);
    QSplitter *split2 = new QSplitter(Qt::Vertical);

    split1->addWidget(textArea1);
    split1->addWidget(textArea2);
    split2->addWidget(split1);
    split2->addWidget(textArea3);

    QHBoxLayout *layout = new QHBoxLayout;

    layout->addWidget(split2);

    window->setLayout(layout);

    window->show();

    return a.exec();
}
