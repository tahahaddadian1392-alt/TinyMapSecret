#include <Geode/Geode.hpp>

using namespace geode::prelude;

namespace TinyMapSecret {

    bool secretTriggered = false;

    void showNotNow(CCNode* parent) {
        if (!parent) return;

        auto label = CCLabelBMFont::create(
            "not now",
            "bigFont.fnt"
        );

        if (!label) return;

        label->setColor({255, 145, 0});
        label->setPosition(
            parent->getContentSize() / 2
        );

        parent->addChild(label, 9999);

        label->runAction(
            CCSequence::create(
                CCDelayTime::create(1.5f),
                CCFadeOut::create(0.3f),
                nullptr
            )
        );
    }

}
