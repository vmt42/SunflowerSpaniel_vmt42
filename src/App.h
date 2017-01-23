#ifndef SUNFLOWERSPANIEL_APP_H
#define SUNFLOWERSPANIEL_APP_H

#include <Falcon/GameIntefaces/IMainGame.h>
#include "GameplayScreen.h"


class App : public Falcon::IMainGame
{
public:
    App();
    ~App();

    void onInit() override;

    void addScreens() override;

    void onExit() override;

private:
    std::unique_ptr<GameplayScreen> m_gameplayScreen = nullptr;
};


#endif