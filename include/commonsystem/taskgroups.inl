enum TaskGroups {
FrameBegin = 0,
SteamThread0,
SteamThread1,
SteamThread2,
SteamThread3,
SteamThread4,
SteamThread5,
SystemStep,
ResStep,
PadStep,
GameFlowStep,
EndShiftWorldPosition,
GameMan,
TaskLineIdx_Sys,
TaskLineIdx_Test,
TaskLineIdx_NetworkFlowStep,
TaskLineIdx_InGame_InGameStep,
TaskLineIdx_InGame_InGameStayStep,
MovieStep,
RemoStep,
TaskLineIdx_InGame_MoveMapStep,
FieldArea_EndWorldAiManager,
EmkSystem_Pre,
EmkSystem_ConditionStatus,
EmkSystem_Post,
EventMan,
FlverResDelayDelectiionBegin,
TaskLineIdx_InGame_FieldAreaStep,
TaskLineIdx_InGame_TestNetStep,
TaskLineIdx_InGame_InGameMenuStep,
TaskLineIdx_InGame_TitleMenuStep,
TaskLineIdx_InGame_CommonMenuStep,
TaskLineIdx_FrpgNet_Sys,
TaskLineIdx_FrpgNet_Lobby,
TaskLineIdx_FrpgNet_ConnectMan,
TaskLineIdx_FrpgNet_Connect,
TaskLineIdx_FrpgNet_Other,
SfxMan,
FaceGenMan,
FrpgNetMan,
NetworkUserManager,
SessionManager,
BlockList,
LuaConsoleServer,
RmiMan,
ResMan,
SfxDebugger,
REMOTEMAN,
Geom_WaitActivateFade,
Geom_UpdateDraw,
Grass_BatchUpdate,
Grass_ResourceLoadKick,
Grass_ResourceLoad,
Grass_ResourceCleanup,
WorldChrMan_Respawn,
WorldChrMan_Prepare,
ChrIns_CalcUpdateInfo_PerfBegin,
ChrIns_CalcUpdateInfo,
ChrIns_CalcUpdateInfo_PerfEnd,
WorldChrMan_PrePhysics,
WorldChrMan_CalcOmissionLevel_Begin,
WorldChrMan_CalcOmissionLevel,
WorldChrMan_CalcOmissionLevel_End,
WorldChrMan_ConstructUpdateList,
WorldChrMan_ChrNetwork,
ChrIns_Prepare,
ChrIns_NaviCache,
ChrIns_AILogic_PerfBegin,
ChrIns_AILogic,
ChrIns_AILogic_PerfEnd,
AI_SimulationStep,
ChrIns_PreBehavior,
ChrIns_PreBehaviorSafe,
GeomModelInsCreatePartway_Begin,
HavokBehavior,
GeomModelInsCreatePartway_End,
ChrIns_BehaviorSafe,
ChrIns_PrePhysics_Begin,
ChrIns_PrePhysics,
ChrIns_PrePhysics_End,
NetFlushSendData,
ChrIns_PrePhysicsSafe,
ChrIns_RagdollSafe,
ChrIns_GarbageCollection,
GeomModelInsCreate,
AiBeginCollectGabage,
WorldChrMan_Update_RideCheck,
InGameDebugViewer,
LocationStep,
LocationUpdate_PrePhysics,
LocationUpdate_PrePhysics_Parallel,
LocationUpdate_PrePhysics_Post,
LocationUpdate_PostCloth,
LocationUpdate_PostCloth_Parallel,
LocationUpdate_PostCloth_Post,
LocationUpdate_DebugDraw,
EventCondition_BonfireNearEnemyCheck,
HavokWorldUpdate_Pre,
RenderingSystemUpdate,
HavokWorldUpdate_Post,
ChrIns_PreCloth,
ChrIns_PreClothSafe,
HavokClothUpdate_Pre_AddRemoveRigidBody,
HavokClothUpdate_Pre_ClothModelInsSafe,
HavokClothUpdate_Pre_ClothModelIns,
HavokClothUpdate_Pre_ClothManager,
CameraStep,
DrawParamUpdate,
GetNPAuthCode,
SoundStep,
HavokClothUpdate_Post_ClothManager,
HavokClothUpdate_Post_ClothModelIns,
HavokClothVertexUpdateFinishWait,
ChrIns_PostPhysics,
ChrIns_PostPhysicsSafe,
CSDistViewManager_Update,
HavokAi_SilhouetteGeneratorHelper_Begin,
WorldChrMan_PostPhysics,
GameFlowInGame_MoveMap_PostPhysics_0,
HavokAi_SilhouetteGeneratorHelper_End,
DmgMan_Pre,
DmgMan_ShapeCast,
DmgMan_Post,
GameFlowInGame_MoveMap_PostPhysics_1_Core0,
GameFlowInGame_MoveMap_PostPhysics_1_Core1,
GameFlowInGame_MoveMap_PostPhysics_1_Core2,
MenuMan,
WorldChrMan_Update_BackreadRequestPre,
ChrIns_Update_BackreadRequest,
WorldChrMan_Update_BackreadRequestPost,
HavokAi_World,
WorldAiManager_BeginUpdateFormation,
WorldAiManager_EndUpdateFormation,
GameFlowInGame_TestNet,
GameFlowInGame_InGameMenu,
GameFlowInGame_TitleMenu,
GameFlowInGame_CommonMenu,
GameFlowFrpgNet_Sys,
GameFlowFrpgNet_Lobby,
GameFlowFrpgNet_ConnectMan,
GameFlowFrpgNet_Connect,
GameFlowStep_Post,
ScaleformStep,
FlverResDelayDelectiionEnd,
Draw_Pre,
GraphicsStep,
DebugDrawMemoryBar,
DbgMenuStep,
DbgRemoteStep,
PlaylogSystemStep,
ReviewMan,
ReportSystemStep,
DbgDispStep,
DrawStep,
DrawBegin,
GameSceneDraw,
AdhocDraw,
DrawEnd,
Draw_Post,
SoundPlayLimitterUpdate,
BeginShiftWorldPosition,
FileStep,
FileStepUpdate_Begin,
FileStepUpdate_End,
Flip,
DelayDeleteStep,
AiEndCollectGabage,
RecordHeapStats,
FrameEnd,
SIZE
};