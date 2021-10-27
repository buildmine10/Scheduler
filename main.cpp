#include <iostream>
#include "Class.h"
#include "Schedule.h"

int main() {
    Schedule schedule;
    Class AML2070{"AML 2070", {}, {}};
    Class ENC1101{"ENC 1101", {}, {}};
    Class ENC1102{"ENC 1102", {"ENC 1101"}, {}};
    Class MAC2311{"MAC 2311", {}, {}};
    Class PSY2012{"PSY 2012", {}, {}};

    schedule.addPassedClasses({AML2070, ENC1101, ENC1102, MAC2311, PSY2012});

    Class COP3504{"COP 3504", {}, {}};
    Class PHY2048{"PHY 2048", {}, {}};
    Class MAC2312{"MAC 2312", {"MAC 2311"}, {}};
    Class SLS1102{"SLS 1102", {}, {}};

    schedule.addClasses({COP3504, PHY2048, MAC2312, SLS1102});
    schedule.printValidity();
    schedule.nextSemester();



    return 0;
}
