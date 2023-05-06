#include "FLAC_track_info.h"


int main() {

    FLAC_info track_info = read_flac_info("/home/varvara/mipt/flac_reader/flac_tests/aesop.flac");
    print_flac_info(&track_info);
    return 0;
}