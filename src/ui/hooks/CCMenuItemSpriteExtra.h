#pragma once

#ifndef MYCCMENUITEMSPRITEEXTRA_H
#define MYCCMENUITEMSPRITEEXTRA_H

#include <Geode/Geode.hpp>
#include <Geode/modify/CCMenuItemSpriteExtra.hpp>

class $modify(MyCCMenuItemSpriteExtra, CCMenuItemSpriteExtra){

    struct Fields {
        cocos2d::SEL_MenuHandler m_buttonCallback;
        CCObject* m_buttonTarget;
    };

    bool init(cocos2d::CCNode* p0, cocos2d::CCNode* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3){
        m_fields->m_buttonCallback = p3;
        m_fields->m_buttonTarget = p2;
        return CCMenuItemSpriteExtra::init(p0, p1, p2, p3);
    }
};

#endif