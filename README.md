# TWD-proj

* Generate Visual Studio project files for Unreal 4.26.2
  * Right click on the .uproject file in File Explorer and select General Visual Studio project files
  * If this option doesn't show in File Explorer context menu, ensure that file associations are in place to open .uproject files with Epic Launcher
  * You can also try launching Unreal Editor and if it prompts to fix file associations, then do so and reboot
* Copy Wwise AkAudio Plugin files
  * Install Wwise 2019.2.11.7512.1949
  * Integrate Wwise into an empty Unreal 4.26.2 project
  * Copy contents of [EmptyUnrealProject]\Plugins\Wwise\ to [TWD-proj]\Plugins\EnginePlugins\Wwise\
* Build Visual Studio project
* Open in Unreal
