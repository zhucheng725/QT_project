#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <opencv4/opencv2/core.hpp>
#include <opencv4/opencv2/highgui/highgui.hpp>
#include <opencv4/opencv2/imgproc/imgproc.hpp>
#include <opencv4/opencv2/videoio/videoio.hpp>
using namespace cv;

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void checkCam();
    void readXml();
//    Mat processFrame(Mat& srcImage, Mat& srcImageClone);

private:
    Ui::Widget *ui_;
    QTimer *timer1_;
    VideoCapture cap_;
    Mat srcImage_;

    std::string ROI_Width_;
    std::string ROI_Height_;
    std::string DetectPoint_;
    std::string ROI_br_;
    std::string ROI_tl_;

    std::string circle_max_area_;
    std::string circle_min_area_;
    std::string circle_max_length_;
    std::string circle_min_length_;

//    const char* Distance_Thresh_;






private slots:
    void on_pushButton_1_clicked();// 开始按钮槽函数

    void button2_clicked();  // 关闭按钮槽函数

    void readFrame(); // 定时器触发的槽函数




};

#endif // WIDGET_H
