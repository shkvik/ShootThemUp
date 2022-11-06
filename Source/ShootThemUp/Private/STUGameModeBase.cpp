// Game Shoot Up Game


#include "STUGameModeBase.h"

ASTUGameModeBase::ASTUGameModeBase()
{
	DefaultPawnClass = ASTUGameModeBase::StaticClass();

	//Class responsed player controller
	PlayerControllerClass = ASTUPlayerController::StaticClass();
}
