#include <windows.h>
#include <cstdio>
void YoutubeVideo() {
    const char* youtubeURL = "https://www.youtube.com/watch?v=xvFZjo5PgG0";
    HINSTANCE result = ShellExecuteA(NULL, "open", youtubeURL, NULL, NULL, SW_SHOWNORMAL);

    if ((intptr_t)result > 32) {
        printf("YouTube URL opened successfully.\n");
    } else {
        printf("Error opening YouTube URL. Error code: %ld\n", (long)result);
    }
}
int main() {
    YoutubeVideo();
    return 0;
}
