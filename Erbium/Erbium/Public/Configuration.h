#pragma once

struct FConfiguration
{
    static inline auto Playlist = L"/Game/Gav/Levels/GM_1v1/Playlist_DefaultSolo_Respawn.Playlist_DefaultSolo_Respawn";
    static inline auto MaxTickRate = 30.f;
    static inline auto bLateGame = true;
    static inline auto LateGameZone = 0; // starting zone
    static inline auto bLateGameLongZone = true; // zone doesnt close for a long time
    static inline auto bEnableCheats = true;
    static inline auto SiphonAmount = 200; // set to 0 to disable
    static inline auto bInfiniteMats = true;
    static inline auto bInfiniteAmmo = true;
    static inline auto bForceRespawns = false; // build your client with this too!
    static inline auto bJoinInProgress = true;
    static inline auto bAutoRestart = true;
    static inline auto bKeepInventory = true;
    static inline auto Port = 7777;
    static inline constexpr auto bEnableIris = true; 
    static inline constexpr auto bGUI = true;
    static inline constexpr auto bCustomCrashReporter = true;
    static inline constexpr auto bUseStdoutLog = false;
    static inline constexpr auto WebhookURL = ""; // fill in if you want status to send to a webhook
};
