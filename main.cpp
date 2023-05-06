#include "FLAC_track_info.h"


int main() {

    FLAC_info track_info;
    read_flack_info("/home/varvara/mipt/flac_reader/flac_tests/aesop.flac", &track_info);
    print_flack_info(&track_info);
    return 0;
}