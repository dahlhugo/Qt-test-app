#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);

	QWidget window;
	window.setFixedSize(720, 500);


	QPushButton button("Hello world!", &window);
	button.resize(200, 100);

	window.show();
	return QApplication::exec();
}
