
#include "YoutubeChannel.h"
#include "User.h"

int main() {

    YoutubeChannel techChannel;

    User u1("Pramod");
    User u2("Pradeep");
    User u3("David");
    User u4("Caprio");

    techChannel.subscribe(&u1);
    techChannel.subscribe(&u2);
    techChannel.subscribe(&u4);

    techChannel.uploadVideo("Observer Pattern Explained");

    techChannel.subscribe(&u3);
    techChannel.uploadVideo("Factory Pattern Explained");

    techChannel.unsubscribe(&u4);

    return 0;
}
