#ifndef LASER_SERVICE_H_
#define LASER_SERVICE_H_

#define LED_SERVICE              "com.garani.lightec.api.LedService"
#define LASER_CONFIGURATION_TYPE   "org.amdatu.remote.admin.http"

typedef struct led_service led_service_t;

struct led_service {
    void *handle;
    int (*setState)(void *handle, int input, int *output);
};

#endif /* LASER_SERVICE_H_ */
