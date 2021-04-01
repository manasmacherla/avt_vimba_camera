#include <avt_vimba_camera/ptp_status_observer.h>
#include <avt_vimba_camera/avt_vimba_api.h>

#include <ros/ros.h>
#include <ros/console.h>

#include <signal.h>

namespace avt_vimba_camera {

    // PtpStatusObserver::PtpStatusObserver( CameraPtr vimba_camera_ptr ) {
    //     vimba_camera_ptr_ = vimba_camera_ptr;
    // }

    // PtpStatusObserver::PtpStatusObserver();
    void PtpStatusObserver::FeatureChanged ( const FeaturePtr &feature ) {
        if ( feature != NULL ) {
            VmbError_t res;
            std::string strName("Ptp status change");
            res = feature ->GetDisplayName(strName);
            std::cout << "Event " << strName << " occurred" << std::endl;
        }
    }

}

