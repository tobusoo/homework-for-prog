import sys
from PySide6.QtWidgets import QApplication, QMainWindow
from ui.ui_main import Ui_MainWindow
import check_ip
import ui.resources


class CheckSite(QMainWindow):
    def __init__(self):
        super(CheckSite, self).__init__()
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)

        self.ui.btn_check.clicked.connect(self.get_ip)

    def get_ip(self):
        try:
            data = check_ip.get_ip_by_hostname(self.ui.line_site.text())
            self.ui.label_IP.setText("Ip address:\n" + data[0])
            self.ui.label_loaing_time.setText("Loading time:\n" + data[1] + " sec")
            self.ui.label_country.setText("Server country:\n" + data[2])
            self.ui.label_city.setText("Server city:\n" + data[3])
        except KeyError:
            self.ui.label_IP.setText("Ip address:\n" + "None")
            self.ui.label_loaing_time.setText("Loading time:\n" + "None")
            self.ui.label_country.setText("Server country:\n" + "None")
            self.ui.label_city.setText("Server city:\n" + "None")


if __name__ == '__main__':
    app = QApplication(sys.argv)

    window = CheckSite()
    window.show()

    sys.exit(app.exec())
