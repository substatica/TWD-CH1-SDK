# The Walking Dead: Saints & Sinners Chapter 1 SDK

* Generate Visual Studio project files for Unreal 4.26.2
  * Right click on the .uproject file in File Explorer and select General Visual Studio project files
  * If this option doesn't show in File Explorer context menu, ensure that file associations are in place to open .uproject files with Epic Launcher
  * You can also try launching Unreal Editor and if it prompts to fix file associations, then do so and reboot
* Copy Wwise AkAudio Plugin files
  * https://www.audiokinetic.com/en/products/wwise/
  * Install Wwise 2019.2.11.7512.1949
  * Integrate Wwise into an empty Unreal 4.26.2 project (in Unreal Editor create an empty project, then in Wwise integrate the referenced version into that new project)
  * Copy contents of [EmptyUnrealProject]\Plugins\Wwise\ to [TWD-proj]\Plugins\EnginePlugins\Wwise\
* Build Visual Studio project
  * Open TWD.sln (solution file) in Visual Studio (2019 or higher), you may have to install additional components depending on your Visual Studio install
  * Right click on TWD in the Solution Explorer on the Right Side of Visual Studio and select Build
* Open TWD.uproject in Unreal Editor
