#include "applicationSettings.h"

namespace mailMessages {
    std::string updateWorkScheduleMessage(const std::string &newPosition, const std::string &newShiftStart,
                                          const std::string &newShiftFinish, const std::string &newWorkingDays) {
        return "<!DOCTYPE html>\n"
               "<html lang=\"en\">\n"
               "\n"
               "\n"
               "<head>\n"
               "    <link href=\"https://fonts.cdnfonts.com/css/abyssinica-sil\" rel=\"stylesheet\">\n"
               "    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1\"/>\n"
               "\n"
               "</head>\n"
               "\n"
               "<body style=\"background: linear-gradient(to right, #7a8fff, #60e7ff);\n"
               "                          font-family: 'Abyssinica SIL', sans-serif; padding: 100px;\">\n"
               "<div class=\"main\"  style=\"background-color: #dcdcdc;\n"
               "            width: 400px;\n"
               "            height: 520px;\n"
               "            margin: 7em auto;\n"
               "            border-radius: 0.5em;\n"
               "            box-shadow: 0 11px 35px 2px rgba(0, 0, 0, 0.14);\">\n"
               "    <p class=\"sign\" align=\"center\" style=\"\n"
               "            padding-top: 30px;\n"
               "            color: #0c9d0e;\n"
               "            font-family: 'Abyssinica SIL', sans-serif;\n"
               "            font-weight: bold;\n"
               "            font-size: 29px;\">Update work schedule</p>\n"
               "    <p class=\"sign1\" align=\"center\" style=\"padding-top: 20px;\n"
               "            color: rgba(32, 32, 32, 0.66);\n"
               "            font-family: 'Abyssinica SIL', sans-serif;\n"
               "    font-weight: bold;\n"
               "    font-size: 21px;\n"
               "    margin: 30px;\" >Position: " + newPosition +
               "</p>\n"
               "    <p class=\"sign1\" align=\"center\" \n"
               "           style=\" color: rgba(32, 32, 32, 0.66);\n"
               "            font-family: 'Abyssinica SIL', sans-serif;\n"
               "    font-weight: bold;\n"
               "    font-size: 21px;\n"
               "    margin: 30px;\"> Shift start: " + newShiftStart +
               "</p>\n"
               "    <p class=\"sign1\" align=\"center\" \n"
               "           style=\" color: rgba(32, 32, 32, 0.66);\n"
               "            font-family: 'Abyssinica SIL', sans-serif;\n"
               "    font-weight: bold;\n"
               "    font-size: 21px;\n"
               "    margin: 30px;\"> Shift End: " + newShiftFinish +
               "</p>\n"
               "    <p class=\"sign1\" align=\"center\" \n"
               "           style=\" color: rgba(32, 32, 32, 0.66);\n"
               "            font-family: 'Abyssinica SIL', sans-serif;\n"
               "    font-weight: bold;\n"
               "    font-size: 21px;\n"
               "    margin: 30px;\"> Workdays: " + newWorkingDays +
               "</p>\n"
               "    <p class=\"sign1\" align=\"center\" \n"
               "           style=\" color: rgba(32, 32, 32, 0.66);\n"
               "            font-family: 'Abyssinica SIL', sans-serif;\n"
               "    font-weight: bold;\n"
               "    font-size: 21px;\n"
               "    margin: 30px;\"> 1 - mon, 2 - tue, ... , 5 - fri"
               "</p>\n"
               "</div>\n"
               "</body>\n"
               "</html>\n";
    }
}