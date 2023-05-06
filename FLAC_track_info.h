#pragma once

#include "FLAC/metadata.h"
#include <iostream>

struct FLAC_info {
    uint64_t hash;
    std::string title = "unknown title";
    std::string artist = "unknown artist";
    std::string album = "unknown album";
    std::string comment = "empty comment";
    std::string date = "00_00_00";
    std::string genre = "unknown genre";
    std::string album_artist = "unknown album_artist";
    //picture - ?????????
};


void read_flack_info(const char *path_to_file, FLAC_info *track_info);
void print_flack_info(FLAC_info *track_info);