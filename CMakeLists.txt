add_library(flac STATIC FLAC_track_info.cpp)

find_package(Flac REQUIRED)

target_link_libraries(flac PRIVATE FLAC::FLAC++)
target_include_directories(flac PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


find_package(mp3_reader)