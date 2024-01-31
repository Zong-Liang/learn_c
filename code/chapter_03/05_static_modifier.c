#include <stdio.h>

void Click() {
    static int click_times = 0;
    click_times = click_times + 1;
    printf("the current click times: %d\n", click_times);
}

int main() {
    Click();
    Click();
    Click();
    Click();
    Click();
    return 0;
}
