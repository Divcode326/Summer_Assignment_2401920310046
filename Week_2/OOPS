#include <iostream>
using namespace std;
namespace music {
    class Playable {
    public:
        virtual void play() = 0;   // Pure virtual function
        virtual ~Playable() {}
    };
    namespace string_instrument {
        class Veena : public Playable {
        public:
            void play() override {
                cout << "Playing Veena" << endl;
            }
        };
    }
    namespace wind {
        class Saxophone : public Playable {
        public:
            void play() override {
                cout << "Playing Saxophone" << endl;
            }
        };
    }
}
int main() {
    music::string_instrument::Veena veena;
    veena.play();
    music::wind::Saxophone saxophone;
    saxophone.play();
    music::Playable* p;

    p = &veena;
    p->play();

    p = &saxophone;
    p->play();

    return 0;
}
