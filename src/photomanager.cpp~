#include "photomanager.h"
#include "settings.h"

#include <QtGui/QDropEvent>
#include <QtGui/QPainter>
#include <QtGui/QPrinter>
#include <QDebug>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QLabel>

#include <KConfigDialog>
#include <KStatusBar>

#include <KAction>
#include <KActionCollection>
#include <KStandardAction>

#include <KLocale>

#include "wallet.h"

photomanager::photomanager()
    : KXmlGuiWindow()
{

    mainWidget = new QWidget(this);
    mainVLayout = new QVBoxLayout(mainWidget);

    mainVLayout->addWidget(new QLabel("Enter your password", mainWidget));

    userPassword = new QLineEdit(mainWidget);
    userPassword->setEchoMode(QLineEdit::Password);
    mainVLayout->addWidget(userPassword);

    storeButton = new QPushButton("store in kwallet",mainWidget);
    connect(storeButton, SIGNAL(clicked()),this,SLOT(setToKWallet()));
    mainVLayout->addWidget(storeButton);

    result = new QLabel("",mainWidget);
    mainVLayout->addWidget(result);

    retrieveButton = new QPushButton("retrieve from kwallet",mainWidget);
    connect(retrieveButton, SIGNAL(clicked()),this,SLOT(getFromKWallet()));
    mainVLayout->addWidget(retrieveButton);

    result2 = new QLabel("",mainWidget);
    mainVLayout->addWidget(result2);

    opPassword = new QLabel("",mainWidget);
    mainVLayout->addWidget(opPassword);

    myWall = new Wallet();

    setCentralWidget(mainWidget);


    //this shows the UI
    setupGUI();
}

photomanager::~photomanager()
{
}

void photomanager::setToKWallet()
{
    qDebug() << "store clicked!";
    myWall->writePassword(userPassword->text());
    result->setText("password stored!");

}

void photomanager::getFromKWallet()
{
    qDebug() << "retrieve clicked";
    opPassword->setText(myWall->readPassword());
    result2->setText("password retrieved!");

}

#include "photomanager.moc"
