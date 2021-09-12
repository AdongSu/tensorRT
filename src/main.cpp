
#include <stdio.h>
#include <string.h>
#include <common/ilogger.hpp>
#include <functional>

int app_yolo();
int app_alphapose();
int app_fall_recognize();
int app_retinaface();
int app_arcface();
int app_arcface_video();
int app_arcface_tracker();
int app_scrfd();
int app_high_performance();
int app_lesson();
int app_plugin();    

void test_all(){
    app_yolo();
    app_alphapose();
    app_fall_recognize();
    app_retinaface();
    app_arcface();
    app_arcface_video();
    app_arcface_tracker();
    app_scrfd();
    app_plugin();
    INFO("test done.");
}

int main(int argc, char** argv){

    const char* method = "yolo";
    if(argc > 1){
        method = argv[1];
    }

    if(strcmp(method, "yolo") == 0){
        app_yolo();
    }else if(strcmp(method, "alphapose") == 0){
        app_alphapose();
    }else if(strcmp(method, "fall_recognize") == 0){
        app_fall_recognize();
    }else if(strcmp(method, "retinaface") == 0){
        app_retinaface();
    }else if(strcmp(method, "arcface") == 0){
        app_arcface();
    }else if(strcmp(method, "arcface_video") == 0){
        app_arcface_video();
    }else if(strcmp(method, "arcface_tracker") == 0){
        app_arcface_tracker();
    }else if(strcmp(method, "scrfd") == 0){
        app_scrfd();
    }else if(strcmp(method, "high_perf") == 0){
        app_high_performance();
    }else if(strcmp(method, "lesson") == 0){
        app_lesson();
    }else if(strcmp(method, "plugin") == 0){
        app_plugin();
    }else if(strcmp(method, "test_all") == 0){
        test_all();
    }else{
        printf("Unknow method: %s\n", method);
        printf(
            "Help: \n"
            "    ./pro method[yolo、alphapose、fall、retinaface、arcface、arcface_video、arcface_tracker]\n"
            "\n"
            "    ./pro yolo\n"
            "    ./pro alphapose\n"
            "    ./pro fall\n"
        );
    }
    return 0;
}
