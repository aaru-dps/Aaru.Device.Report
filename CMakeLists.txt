cmake_minimum_required(VERSION 3.9)
project(Aaru_Device_Report C)

set(CMAKE_C_STANDARD 90)

find_package(LibXml2)

include_directories(${LIBXML2_INCLUDE_DIR})

add_executable(Aaru_Device_Report main.c scsi.c scsi.h main.h ata.h ata.c atapi.c atapi.h atapi_report.c atapi_report.h identify_decode.c identify_decode.h scsi_report.c scsi_report.h inquiry_decode.c inquiry_decode.h scsi_mode.h scsi_mode.c mmc_report.c mmc_report.h cdrom_mode.h ssc_report.c ssc_report.h ata_report.c ata_report.h)
target_link_libraries(Aaru_Device_Report ${LIBXML2_LIBRARIES})