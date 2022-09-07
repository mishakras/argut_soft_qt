#ifndef MOUSE_WINDOW_H
#define MOUSE_WINDOW_H

#include <QWidget>
#include <QMouseEvent>
namespace Ui {
class Mouse_window;
}

class Mouse_window : public QWidget
{
    Q_OBJECT
public:
    explicit Mouse_window(QWidget *parent = nullptr);
    ~Mouse_window();

public: signals:
    void sendData(int x, int y);

private:
    void mouseMoveEvent(QMouseEvent *moveevent) override;
    Ui::Mouse_window *ui;
};

#endif // MOUSE_WINDOW_H
