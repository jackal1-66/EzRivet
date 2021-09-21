import sys
from PyQt5.QtWidgets import QWidget, QApplication
#export QT_DEBUG_PLUGINS = 1 to show warnings 

class Window(QWidget):
    def __init__(self):
        super().__init__()

def main():
    app = QApplication([])
    window = Window()
    window.show()
    sys.exit(app.exec())

if __name__ == "__main__":
    main()    