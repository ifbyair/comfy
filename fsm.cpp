// Abstarct objects for HVAC project FSM
#include <stdio.h>

enum states { FSM_START, FSM_CHOOSE_NW, FSM_WIFI_PWD, FSM_RETRY_NW };

class ComfyAction {
    public:
        int (*action)();
        ComfyAction();
        ~ComfyAction();
    private:
};

class ComfyState {
    public:
        int id;
        ComfyAction actions[];
        ComfyState();
        ~ComfyState();
    private:
};

int main(){
    printf("Zhopa\n");
}
