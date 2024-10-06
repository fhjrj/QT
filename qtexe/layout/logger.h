#ifndef LOGGER_H
#define LOGGER_H

#include <QDialog>
#include <memory>
using  namespace std;
namespace Ui {
class logger;
}
class Login;
class logger : public QDialog
{
    Q_OBJECT

public:
    explicit logger(QWidget *parent = nullptr);
    ~logger();
    void set_login(const weak_ptr<Login>& _loginn);
    void slog_reginst();

private:
    Ui::logger *ui;
    std::weak_ptr<Login> _login;
};

#endif // LOGGER_H
