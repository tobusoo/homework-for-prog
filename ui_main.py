# -*- coding: utf-8 -*-

################################################################################
## Form generated from reading UI file 'main.ui'
##
## Created by: Qt User Interface Compiler version 6.3.2
##
## WARNING! All changes made in this file will be lost when recompiling UI file!
################################################################################

from PySide6.QtCore import (QCoreApplication, QDate, QDateTime, QLocale,
    QMetaObject, QObject, QPoint, QRect,
    QSize, QTime, QUrl, Qt)
from PySide6.QtGui import (QBrush, QColor, QConicalGradient, QCursor,
    QFont, QFontDatabase, QGradient, QIcon,
    QImage, QKeySequence, QLinearGradient, QPainter,
    QPalette, QPixmap, QRadialGradient, QTransform)
from PySide6.QtWidgets import (QApplication, QHBoxLayout, QLabel, QLineEdit,
    QMainWindow, QPushButton, QSizePolicy, QVBoxLayout,
    QWidget)


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        if not MainWindow.objectName():
            MainWindow.setObjectName(u"MainWindow")
        MainWindow.resize(667, 400)
        MainWindow.setMinimumSize(QSize(0, 0))
        icon = QIcon()
        icon.addFile(u":/icons/icon.ico", QSize(), QIcon.Normal, QIcon.Off)
        icon.addFile(u":/icons/icon.ico", QSize(), QIcon.Active, QIcon.On)
        icon.addFile(u":/icons/icon.ico", QSize(), QIcon.Selected, QIcon.On)
        MainWindow.setWindowIcon(icon)
        MainWindow.setStyleSheet(u"QWidget {\n"
"    background-color: #F2F8FD;\n"
"    color: black;\n"
"    font-family: Verdana;\n"
"    font-size: 16pt;\n"
"    margin: 10px;\n"
"}\n"
"\n"
"QPushButton {\n"
"    border: 2px solid #D7E1E9;\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border: 4px solid #7AB1FF;\n"
"    border-radius: 5px;\n"
"}\n"
"")
        MainWindow.setIconSize(QSize(24, 24))
        self.centralwidget = QWidget(MainWindow)
        self.centralwidget.setObjectName(u"centralwidget")
        self.centralwidget.setMinimumSize(QSize(0, 0))
        self.verticalLayout_3 = QVBoxLayout(self.centralwidget)
        self.verticalLayout_3.setObjectName(u"verticalLayout_3")
        self.verticalLayout_2 = QVBoxLayout()
        self.verticalLayout_2.setObjectName(u"verticalLayout_2")
        self.btn_icon = QPushButton(self.centralwidget)
        self.btn_icon.setObjectName(u"btn_icon")
        self.btn_icon.setEnabled(False)
        sizePolicy = QSizePolicy(QSizePolicy.Minimum, QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.btn_icon.sizePolicy().hasHeightForWidth())
        self.btn_icon.setSizePolicy(sizePolicy)
        self.btn_icon.setStyleSheet(u"QPushButton {\n"
"	border: none;\n"
"}")
        icon1 = QIcon()
        icon1.addFile(u":/icons/web-icon.svg", QSize(), QIcon.Normal, QIcon.Off)
        self.btn_icon.setIcon(icon1)
        self.btn_icon.setIconSize(QSize(100, 100))
        self.btn_icon.setCheckable(False)

        self.verticalLayout_2.addWidget(self.btn_icon)

        self.lineEdit = QLineEdit(self.centralwidget)
        self.lineEdit.setObjectName(u"lineEdit")
        self.lineEdit.setEnabled(False)
        sizePolicy1 = QSizePolicy(QSizePolicy.Preferred, QSizePolicy.Fixed)
        sizePolicy1.setHorizontalStretch(0)
        sizePolicy1.setVerticalStretch(0)
        sizePolicy1.setHeightForWidth(self.lineEdit.sizePolicy().hasHeightForWidth())
        self.lineEdit.setSizePolicy(sizePolicy1)
        self.lineEdit.setStyleSheet(u"QLineEdit {\n"
"	border: none;	\n"
"	margin: 0;\n"
"}")

        self.verticalLayout_2.addWidget(self.lineEdit)


        self.verticalLayout_3.addLayout(self.verticalLayout_2)

        self.horizontalLayout = QHBoxLayout()
        self.horizontalLayout.setObjectName(u"horizontalLayout")
        self.line_site = QLineEdit(self.centralwidget)
        self.line_site.setObjectName(u"line_site")
        sizePolicy2 = QSizePolicy(QSizePolicy.Minimum, QSizePolicy.Maximum)
        sizePolicy2.setHorizontalStretch(0)
        sizePolicy2.setVerticalStretch(0)
        sizePolicy2.setHeightForWidth(self.line_site.sizePolicy().hasHeightForWidth())
        self.line_site.setSizePolicy(sizePolicy2)
        self.line_site.setStyleSheet(u"QLineEdit {\n"
"    border: 2px solid #D7E1E9;\n"
"	border-radius: 5px;\n"
"    margin: 0;\n"
"    font-size: 20pt;\n"
"}\n"
"")
        self.line_site.setMaxLength(30)
        self.line_site.setAlignment(Qt.AlignCenter)

        self.horizontalLayout.addWidget(self.line_site)

        self.btn_check = QPushButton(self.centralwidget)
        self.btn_check.setObjectName(u"btn_check")
        sizePolicy3 = QSizePolicy(QSizePolicy.Maximum, QSizePolicy.Maximum)
        sizePolicy3.setHorizontalStretch(0)
        sizePolicy3.setVerticalStretch(0)
        sizePolicy3.setHeightForWidth(self.btn_check.sizePolicy().hasHeightForWidth())
        self.btn_check.setSizePolicy(sizePolicy3)
        self.btn_check.setStyleSheet(u"QPushButton {\n"
"	background-color: transparent;\n"
"	margin-right: 0;\n"
"	margin-left: 0;\n"
"	padding: 5px;\n"
"}")
        self.btn_check.setCheckable(True)

        self.horizontalLayout.addWidget(self.btn_check)


        self.verticalLayout_3.addLayout(self.horizontalLayout)

        self.layout_ip = QHBoxLayout()
        self.layout_ip.setObjectName(u"layout_ip")
        self.label_IP = QLabel(self.centralwidget)
        self.label_IP.setObjectName(u"label_IP")
        sizePolicy4 = QSizePolicy(QSizePolicy.Minimum, QSizePolicy.Minimum)
        sizePolicy4.setHorizontalStretch(0)
        sizePolicy4.setVerticalStretch(0)
        sizePolicy4.setHeightForWidth(self.label_IP.sizePolicy().hasHeightForWidth())
        self.label_IP.setSizePolicy(sizePolicy4)
        self.label_IP.setAlignment(Qt.AlignCenter)

        self.layout_ip.addWidget(self.label_IP)

        self.label_loaing_time = QLabel(self.centralwidget)
        self.label_loaing_time.setObjectName(u"label_loaing_time")
        self.label_loaing_time.setAlignment(Qt.AlignCenter)

        self.layout_ip.addWidget(self.label_loaing_time)


        self.verticalLayout_3.addLayout(self.layout_ip)

        self.layout_locale = QHBoxLayout()
        self.layout_locale.setObjectName(u"layout_locale")
        self.label_country = QLabel(self.centralwidget)
        self.label_country.setObjectName(u"label_country")
        self.label_country.setAlignment(Qt.AlignCenter)

        self.layout_locale.addWidget(self.label_country)

        self.label_city = QLabel(self.centralwidget)
        self.label_city.setObjectName(u"label_city")
        self.label_city.setAlignment(Qt.AlignCenter)

        self.layout_locale.addWidget(self.label_city)


        self.verticalLayout_3.addLayout(self.layout_locale)

        MainWindow.setCentralWidget(self.centralwidget)

        self.retranslateUi(MainWindow)

        QMetaObject.connectSlotsByName(MainWindow)
    # setupUi

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(QCoreApplication.translate("MainWindow", u" Check site", None))
        self.btn_icon.setText("")
        self.lineEdit.setText(QCoreApplication.translate("MainWindow", u"\u0412\u0432\u0435\u0434\u0438\u0442\u0435 url \u0430\u0434\u0440\u0435\u0441 \u0441\u0430\u0439\u0442\u0430:", None))
        self.line_site.setText("")
        self.btn_check.setText(QCoreApplication.translate("MainWindow", u"check", None))
        self.label_IP.setText(QCoreApplication.translate("MainWindow", u"Ip address:", None))
        self.label_loaing_time.setText(QCoreApplication.translate("MainWindow", u"Loading time: ", None))
        self.label_country.setText(QCoreApplication.translate("MainWindow", u"Server's country", None))
        self.label_city.setText(QCoreApplication.translate("MainWindow", u"Server's city: ", None))
    # retranslateUi

