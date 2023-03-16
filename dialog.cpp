#include "dialog.h"
#include "ui_dialog.h"

#include <filesystem>
#include <fstream>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    std::filesystem::path path = std::filesystem::current_path() / "file.txt";

    std::ofstream ofs(path);
    ofs << "Миру мир!\n";
    ofs.close();
}

