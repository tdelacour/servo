// -- WARNING -- WARNING -- WARNING -- WARNING -- WARNING -- WARNING --
//
// THE CONTENTS OF THIS FILE IS GENERATED BY CODE AND
// ANY MODIFICATIONS WILL BE OVERWRITTEN
//
// -- WARNING -- WARNING -- WARNING -- WARNING -- WARNING -- WARNING --

// %BANNER_BEGIN%
// ---------------------------------------------------------------------
// %COPYRIGHT_BEGIN%
//
// Copyright (c) 2018 Magic Leap, Inc. All Rights Reserved.
// Use of this file is governed by the Creator Agreement, located
// here: https://id.magicleap.com/creator-terms
//
// %COPYRIGHT_END%
// ---------------------------------------------------------------------
// %BANNER_END%

// %SRC_VERSION%: 1

#pragma once

#include <SpawnedSceneBase.h>
#include <SpawnedSceneHandlers.h>

#include <lumin/node/LineNode.h>
#include <lumin/node/QuadNode.h>
#include <lumin/ui/node/UiButton.h>
#include <lumin/ui/node/UiPanel.h>
#include <lumin/ui/node/UiTextEdit.h>

namespace scenes {

  namespace Servo2D {
  
    namespace externalNodes {
      extern const std::string contentPanel;
      extern const std::string content;
      extern const std::string backButton;
      extern const std::string fwdButton;
      extern const std::string urlBar;
      extern const std::string laser;
    } 

    struct SpawnedScene : public SpawnedSceneBase {
      SpawnedScene(const SceneDescriptor& sceneDescriptor, lumin::Node* root);
      ~SpawnedScene();
      lumin::ui::UiPanel* contentPanel;
      lumin::QuadNode* content;
      lumin::ui::UiButton* backButton;
      lumin::ui::UiButton* fwdButton;
      lumin::ui::UiTextEdit* urlBar;
      lumin::LineNode* laser;
    };  

    SpawnedSceneBase* createSpawnedScene(const SceneDescriptor& sceneDescriptor, lumin::Node* root);
    SpawnedSceneHandlers* createSpawnedSceneHandlers(SpawnedSceneBase& spawnedScene);

    extern const SceneDescriptor descriptor; 
  }
}

