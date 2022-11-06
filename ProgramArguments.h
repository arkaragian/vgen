#include <string>

/**
 * A class that holds the program options
 */
class ProgramOptions {
 private:
 public:
  int Width       = 720;  //<! Width of the video
  int Height      = 576;  //<! Height of the video
  int FPS         = 30;   //<! The frames per second
  int secDuration = 5;    //<! The video duration in teems of seconds
  std::string filename =
      "Video.avi";  //<! The filename where the video will be written;
};
