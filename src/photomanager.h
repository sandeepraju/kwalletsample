#ifndef PHOTOMANAGER_H
#define PHOTOMANAGER_H


#include <KXmlGuiWindow>
#include <QDebug>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include "wallet.h"

class photomanagerView;
class QPrinter;
class KToggleAction;
class KUrl;

/**
 * This class serves as the main window for photomanager.  It handles the
 * menus, toolbars and status bars.
 *
 * @short Main window class
 * @author vvs <vvs@vvs.com>
 * @version 0.0
 */
class photomanager : public KXmlGuiWindow
{
    Q_OBJECT
public:
    /**
     * Default Constructor
     */
    photomanager();

    /**
     * Default Destructor
     */
    virtual ~photomanager();

private slots:
    void setToKWallet();
    void getFromKWallet();

public:
    QWidget* mainWidget;
    QVBoxLayout* mainVLayout;
    QLineEdit* userPassword;
    QPushButton* storeButton;
    QLabel* result;
    QPushButton* retrieveButton;
    QLabel* result2;
    QLabel* opPassword;
    Wallet* myWall;


};

#endif // _PHOTOMANAGER_H_
