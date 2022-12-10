enum class ECharacterStat {
    SpareStatPoints = 0,
    GlobalLevel = 1,
    GlobalXP = 2,
    Age = 3,
    PendantCharges = 4,
    PendantChargesRefill = 5,
    PendantChargesLimit = 6,
    DemoTrials = 7,
    CurrentComboKills = 8,
    MaxComboKills = 9,
    CurrentComboXp = 10,
    MaxComboXp = 11,
    DeathCounter = 12,
    XPMultiplier = 13,
    Score = 14,
    DeathCounterMax = 15,
    GameDifficulty = 16,
    CheatsUnlockPoints = 17,
    Count = 18,
    None = 19,
    ECharacterStat_MAX = 20,
};

enum class ESCAICombatRolesChangeReason {
    AIDeath = 0,
    AITakenDown = 1,
    Script = 2,
    BehaviorChanged = 3,
    AlertLevelChanged = 4,
    MCDominationGaugeChanged = 5,
    MCTraversalPerformed = 6,
    MCRush = 7,
    MCFall = 8,
    AttackTicketTimeout = 9,
    ESCAICombatRolesChangeReason_MAX = 10,
};

enum class ESCAICombatRoles {
    None = 0,
    DirectOpponent = 1,
    IndirectOpponent = 2,
    NonOpponent = 3,
    ESCAICombatRoles_MAX = 4,
};

enum class InputAction {
    AttackLight = 0,
    AttackLightHold = 1,
    AttackLightAlt = 2,
    AttackHeavy = 3,
    AttackHeavyHold = 4,
    AttackHeavyAlt = 5,
    Guard = 6,
    Dodge = 7,
    Rush = 8,
    Parry = 9,
    Avoid = 10,
    Absorb = 11,
    Move = 12,
    LockMove = 13,
    MoveInterrupt = 14,
    GuardInterrupt = 15,
    Look = 16,
    Lock = 17,
    TargetSwitch = 18,
    DesignateTarget = 19,
    Cancel = 20,
    SheatheDropWeapon = 21,
    Action = 22,
    DodgeMove = 23,
    DodgeReorientation = 24,
    MenuRemove = 25,
    MenuCancel = 26,
    AttackDetailsCancel = 27,
    ParrySelection = 28,
    AvoidSelection = 29,
    PlayCombo = 30,
    QuadrantChange = 31,
    DrawWeapon = 32,
    NextMenuPage = 33,
    PreviousMenuPage = 34,
    SpectatorMove = 35,
    SpectatorLook = 36,
    SpectatorLock = 37,
    SpectatorDebug = 38,
    VerticalStrafe = 39,
    ChangeCameraSpeed = 40,
    ChangeCameraFOV = 41,
    ChangeCameraDamping = 42,
    InGameMenu = 43,
    UseItemRight = 44,
    UseItemLeft = 45,
    DropItem = 46,
    LaunchEmote = 47,
    ResetQuadrant = 48,
    DebugMenu = 49,
    FlyMode = 50,
    MenuEdit = 51,
    MenuRename = 52,
    MenuPreview = 53,
    StopTraining = 54,
    MenuCopy = 55,
    MenuPaste = 56,
    CancelMatchmaking = 57,
    MenuAction = 58,
    MenuActionHold = 59,
    DismissRequest = 60,
    MenuToggleStats = 61,
    Revive = 62,
    Vanish = 63,
    MenuNavigation = 64,
    MouseLook = 65,
    MouseWheelSelection = 66,
    StanceMode = 67,
    MenuStartTraining = 68,
    MenuQuadrantChange = 69,
    MenuToggleOverview = 70,
    MenuStanceSelectionQuadrantChange = 71,
    DrunkenAttack = 72,
    DrunkenAttackPerfect = 73,
    DrunkenAttackSelection = 74,
    SpeedUpFlyMode = 75,
    TutorialList = 76,
    NextTutorialPage = 77,
    PreviousTutorialPage = 78,
    TutorialAction = 79,
    TutorialCancel = 80,
    SkipCinematic = 81,
    TrainingNextWeapon = 82,
    TrainingPrevWeapon = 83,
    TrainingEdit = 84,
    MenuActionTertiary = 85,
    MenuActionSecondary = 86,
    EmoteWheelSelectForEdition = 87,
    StanceBL = 88,
    StanceBR = 89,
    StanceFL = 90,
    StanceFR = 91,
    AI_SpecialAttack = 92,
    MenuDownSpectateNext = 93,
    MenuDownSpectatePrevious = 94,
    TakedownMode = 95,
    TakedownValidation = 96,
    PushObject = 97,
    PickUpObject = 98,
    ThrowObject = 99,
    ThrowFromPickUp = 100,
    DropObject = 101,
    ContextualActionObject = 102,
    ThrowContextualObject = 103,
    ShowMovableInteractions = 104,
    HideMovableInteractions = 105,
    Grab = 106,
    PushFromGrab = 107,
    Traversal = 108,
    AttackLightBackFront = 109,
    AttackLightFrontFront = 110,
    AttackLightFront = 111,
    AttackHeavyBackFront = 112,
    AttackHeavyFrontFront = 113,
    AttackHeavyFront = 114,
    DeflectGrab = 115,
    AttackKnockdown = 116,
    AttackKnockdownHold = 117,
    AttackGrab = 118,
    PrepFocus = 119,
    PrepFocusHold = 120,
    LaunchFocusExecution = 121,
    ParryFromDown = 122,
    DialogSentence0 = 123,
    DialogSentence1 = 124,
    DialogSentence2 = 125,
    NextAltMenuPage = 126,
    PreviousAltMenuPage = 127,
    FallInterrupt = 128,
    AIDash = 129,
    TestAction1 = 130,
    TestAction2 = 131,
    TestAction3 = 132,
    TestAction4 = 133,
    TestAction5 = 134,
    TestAction6 = 135,
    TestAction7 = 136,
    TestAction8 = 137,
    TestAction9 = 138,
    TestAction10 = 139,
    TestActionAxis1 = 140,
    TestActionAxis2 = 141,
    TestActionAxis3 = 142,
    TestActionAxis4 = 143,
    TestActionAxis5 = 144,
    LightRushAttack = 145,
    DizzyReduction = 146,
    Resume = 147,
    AddKey = 148,
    RemoveKey = 149,
    EditCamera = 150,
    SelectLeftKey = 151,
    SelectRightKey = 152,
    TimelineMoveBackward = 153,
    TimelineMoveForward = 154,
    Scrub = 155,
    CounterGrab = 156,
    SpectatorExit = 157,
    FocusVitalPointSelection = 158,
    EditorSpecialMenu = 159,
    DodgeAttack = 160,
    AttackLightGuard = 161,
    AttackHeavyGuard = 162,
    ReplayExport = 163,
    ReplayMenu = 164,
    PushbackCancel = 165,
    CameraSettings = 166,
    ApplySettings = 167,
    ReplayTimelineMode = 168,
    MenuActionSecondaryHold = 169,
    Disengage = 170,
    CameraZoom = 171,
    CameraRoll = 172,
    CycleUIMode = 173,
    HeavyRushAttack = 174,
    Taunt = 175,
    HideUI = 176,
    TakeScreenshot = 177,
    LeaveMode = 178,
    ApplyFocus = 179,
    ParryInterrupt = 180,
    AddSpeedKey = 181,
    AddCut = 182,
    GuardInterruptNoParry = 183,
    RemoveCut = 184,
    MoveKeyLeft = 185,
    MoveKeyRight = 186,
    MoveKey = 187,
    SelectCurrentKey = 188,
    TimelineZoom = 189,
    Undo = 190,
    Redo = 191,
    CharacterSettings = 192,
    ResetRoll = 193,
    MenuOptions = 194,
    MenuLeft = 195,
    MenuRight = 196,
    TutorialInput = 197,
    BulletTime = 198,
    BulletTimeFocus = 199,
    StopRecording = 200,
    SelectKey = 201,
    JumpBounds = 202,
    ReplayQuit = 203,
    NavigationMode = 204,
    BlendType = 205,
    CameraType = 206,
    Count = 207,
    None = 208,
    InputAction_MAX = 209,
};

enum class EDebugMovableState {
    TooFar = 0,
    Blocked = 1,
    HasTarget = 2,
    NotUsable = 3,
    NoTarget = 4,
    EDebugMovableState_MAX = 5,
};

enum class EKnockbackBehavior {
    Regular = 0,
    PullTowardInstigator = 1,
    PushOppositeToInstigator = 2,
    Count = 3,
    None = 4,
    EKnockbackBehavior_MAX = 5,
};

enum class EFightingState {
    OutOfFight = 0,
    InFight = 1,
    Counter_Hit = 2,
    KnockedDown = 3,
    Dizzy = 4,
    Pushed = 5,
    Avoided = 6,
    StructureBroken = 7,
    Parried = 8,
    Count = 9,
    None = 10,
    EFightingState_MAX = 11,
};

enum class EAttackPowers {
    Light = 0,
    Medium = 1,
    Strong = 2,
    Count = 3,
    None = 4,
    EAttackPowers_MAX = 5,
};

enum class EHitType {
    Barehands = 0,
    Weapon_Blunt = 1,
    Weapon_Cut = 2,
    Weapon_Claw = 3,
    None = 4,
    EHitType_MAX = 5,
};

enum class EHittedReaction {
    Hit = 0,
    Action = 1,
    None = 2,
    EHittedReaction_MAX = 3,
};

enum class EAttackMovementType {
    Thrust = 0,
    Horizontal = 1,
    Vertical = 2,
    Grab = 3,
    Count = 4,
    None = 5,
    EAttackMovementType_MAX = 6,
};

enum class EAttackTarget {
    High = 0,
    Mid_1 = 1,
    Mid_2 = 2,
    Low = 3,
    Count = 4,
    None = 5,
    EAttackTarget_MAX = 6,
};

enum class EAttackOrigin {
    Left = 0,
    Middle = 1,
    Right = 2,
    Up = 3,
    Down = 4,
    Count = 5,
    None = 6,
    EAttackOrigin_MAX = 7,
};

enum class EIKAnimTargetTypes {
    Target = 0,
    Target_Alt = 1,
    Count = 2,
    None = 3,
    EIKAnimTargetTypes_MAX = 4,
};

enum class EDebugTargetState {
    Valid = 0,
    TooClose = 1,
    TooFar = 2,
    NoTarget = 3,
    EDebugTargetState_MAX = 4,
};

enum class EThrowableState {
    AtRest = 0,
    AtRestOnBreakable = 1,
    StreamedOut = 2,
    IsBeingSnapped = 3,
    IsBeingSnappedWithCol = 4,
    FlyingFreely = 5,
    FlyingToTarget = 6,
    MissedTarget = 7,
    HasHitFloor = 8,
    HasHitChara = 9,
    HasHitCharaNoBounce = 10,
    FallingOffCluster = 11,
    PickedUp = 12,
    Dropped = 13,
    BrokenWithLastThrowAllowed = 14,
    Destroyed = 15,
    Cinematic = 16,
    None = 17,
    EThrowableState_MAX = 18,
};

enum class EHeight {
    High = 0,
    Mid = 1,
    Low = 2,
    Count = 3,
    None = 4,
    EHeight_MAX = 5,
};

enum class EBounceType {
    SimpleBounce = 0,
    BounceBackToInstigator = 1,
    GoThrough = 2,
    EBounceType_MAX = 3,
};

enum class EOnDestructibleDamageType {
    FromObject = 0,
    FromCharacter = 1,
    AlwaysBreakOnHit = 2,
    Custom = 3,
    EOnDestructibleDamageType_MAX = 4,
};

enum class EDropReason {
    Death = 0,
    Knockdown = 1,
    FromInput = 2,
    FromHit = 3,
    Disarm = 4,
    Broke = 5,
    Default = 6,
    EDropReason_MAX = 7,
};

enum class EAlertedReason {
    None = 0,
    HitReceived = 1,
    RunningAway = 2,
    TooClose = 3,
    Detection = 4,
    TimerElapsed = 5,
    CharacterSeenFighting = 6,
    SeenHittedByProjectile = 7,
    DeadBody = 8,
    Script = 9,
    Dialog = 10,
    SeenAttacking = 11,
    SeenPickingUpWeapon = 12,
    SeenRushing = 13,
    SeenPerformingTraversal = 14,
    DialogRepyTimerElapsed = 15,
    EAlertedReason_MAX = 16,
};

enum class EGlobalBehaviors {
    Idle = 0,
    Suspicious = 1,
    Surprised = 2,
    Alerted = 3,
    Abandoning = 4,
    Friendly = 5,
    Count = 6,
    None = 7,
    EGlobalBehaviors_MAX = 8,
};

enum class EFXMaterials {
    GuardBreak = 0,
    Absorb = 1,
    Interrupt = 2,
    Cancel = 3,
    Parry = 4,
    SuccessfullAvoid = 5,
    Spawn = 6,
    Unbreakable = 7,
    ShadowAvoid = 8,
    SharpImpact = 9,
    Count = 10,
    None = 11,
    Invalid = 12,
    EFXMaterials_MAX = 13,
};

enum class EControllerNature {
    Player = 0,
    AI = 1,
    None = 2,
    EControllerNature_MAX = 3,
};

enum class ERelationshipTypes {
    Enemy = 0,
    Fight = 1,
    Object = 2,
    Neutral = 3,
    Coop = 4,
    Ally = 5,
    Count = 6,
    None = 7,
    ERelationshipTypes_MAX = 8,
};

enum class InputContext {
    BasicGameplay = 0,
    Menu = 1,
    CustomDataOnly = 2,
    Spectator = 3,
    FlyMode = 4,
    Empty = 5,
    Cinematic = 6,
    StartupMenu = 7,
    PhotoModeMenu = 8,
    ReplayEditorMenu = 9,
    FocusMode = 10,
    BulletTime = 11,
    Count = 12,
    Invalid = 13,
    InputContext_MAX = 14,
};

enum class EOrderType {
    Attack = 0,
    Dodge = 1,
    ParryVictim = 2,
    Hitted = 3,
    Guard = 4,
    Avoided = 5,
    FreezeFrame = 6,
    WeaponAction = 7,
    TakedownInstigator = 8,
    TakedownVictim = 9,
    KnockedDown = 10,
    Dizzy = 11,
    Pushed = 12,
    PlayAnim = 13,
    Parry = 14,
    GrabInstigator = 15,
    GrabVictim = 16,
    FightingStateRecovery = 17,
    DownBeforeStandup = 18,
    Standup = 19,
    UseMovable = 20,
    ThrowObject = 21,
    PushObject = 22,
    PickUpObject = 23,
    DropObject = 24,
    PushInstigator = 25,
    PushVictim = 26,
    FallFromPushed = 27,
    FallReception = 28,
    FallGetUp = 29,
    Reaction = 30,
    IdleExit = 31,
    Traversal = 32,
    StructureBroken = 33,
    AttackEnvInstigator = 34,
    AttackEnvVictim = 35,
    SwapWeaponHand = 36,
    Fidget = 37,
    FallOnSlope = 38,
    PrepFocus = 39,
    SynchronizedAttackInstigator = 40,
    SynchronizedAttackVictim = 41,
    WallJumpEntry = 42,
    WallJumpAttack = 43,
    ParryInstigator = 44,
    TraversalClimb = 45,
    ParryFromDown = 46,
    DeflectSBInstigator = 47,
    AnimSync = 48,
    TraversalCinematic = 49,
    RagingBull = 50,
    Avoid = 51,
    FallOnSlopeRecovery = 52,
    Dash = 53,
    FallOnSlopeEntry = 54,
    AttackActionGeneric = 55,
    ChargeBuildUp = 56,
    OpeningDoor = 57,
    HittedGeneric = 58,
    TraversalPush = 59,
    TraversalPushInstigator = 60,
    TraversalDropDown = 61,
    RainDash = 62,
    Incapacipated = 63,
    Jiggle = 64,
    Deflected = 65,
    Taunt = 66,
    PlayBlendSpace = 67,
    TargetReactionBlendSpace = 68,
    MoveToWithPhysWalking = 69,
    Count = 70,
    None = 71,
    EOrderType_MAX = 72,
};

enum class ELimbs {
    LeftArm = 0,
    RightArm = 1,
    LeftLeg = 2,
    RightLeg = 3,
    Count = 4,
    None = 5,
    ELimbs_MAX = 6,
};

enum class EInstigatorType {
    Item = 0,
    Character = 1,
    Fall = 2,
    EInstigatorType_MAX = 3,
};

enum class EQuadrantTypes {
    FrontLeft = 0,
    FrontRight = 1,
    BackRight = 2,
    BackLeft = 3,
    Count = 4,
    None = 5,
    EQuadrantTypes_MAX = 6,
};

enum class EGuardType {
    None = 0,
    Guard = 1,
    Deflect = 2,
    Count = 3,
    EGuardType_MAX = 4,
};

enum class EImpactType {
    Hit = 0,
    Fall = 1,
    Suicide = 2,
    Fake = 3,
    Hurt = 4,
    KnockDown = 5,
    Push = 6,
    Dizzy = 7,
    Action = 8,
    Count = 9,
    None = 10,
    EImpactType_MAX = 11,
};

enum class EAvoidType {
    Duck = 0,
    Jump = 1,
    LeftSide = 2,
    RightSide = 3,
    Dodge = 4,
    AllHitAvoid = 5,
    DrunkenSouth = 6,
    Count = 7,
    None = 8,
    EAvoidType_MAX = 9,
};

enum class EItemPowers {
    Snatch = 0,
    SharpImpact = 1,
    Unbreakable = 2,
    ShadowAvoid = 3,
    EItemPowers_MAX = 4,
};

enum class EMoveStatus {
    Exploration = 0,
    Combat = 1,
    Count = 2,
    None = 3,
    EMoveStatus_MAX = 4,
};

enum class EFallLevel {
    Light = 0,
    Medium = 1,
    Heavy = 2,
    Count = 3,
    None = 4,
    EFallLevel_MAX = 5,
};

enum class EFightingCharacterBPComponents {
    BPStatsComponent = 0,
    DeathImpactForce = 1,
    EFightingCharacterBPComponents_MAX = 2,
};

enum class EDangerStates {
    Safe = 0,
    Warning = 1,
    Danger = 2,
    Count = 3,
    None = 4,
    EDangerStates_MAX = 5,
};

enum class EEquipmentSlot {
    ElbowArmor = 0,
    ShoulderArmor = 1,
    UnderTop = 2,
    OverTop = 3,
    Gloves = 4,
    Belt = 5,
    Trousers = 6,
    Shoes = 7,
    Hair = 8,
    Weapon = 9,
    Item = 10,
    Count = 11,
    FullSet = 12,
    Temporary = 13,
    None = 14,
    EEquipmentSlot_MAX = 15,
};

enum class ECameraTeleportationRotationBehavior {
    None = 0,
    ResetToOwnerForward = 1,
    KeepRotationLocalToOwner = 2,
    ECameraTeleportationRotationBehavior_MAX = 3,
};

enum class EFidgetMirroringTypes {
    Always = 0,
    FirstFrame = 1,
    FirstFrameAndStopOnMirror = 2,
    Never = 3,
    NeverAndStopOnMirror = 4,
    EFidgetMirroringTypes_MAX = 5,
};

enum class EPredictionBehavior {
    Current = 0,
    Prediction = 1,
    Both = 2,
    Count = 3,
    None = 4,
    EPredictionBehavior_MAX = 5,
};

enum class EALBinaryOperation {
    SET = 0,
    AND = 1,
    OR = 2,
    EALBinaryOperation_MAX = 3,
};

enum class EALPriority {
    Default = 0,
    BlockingFightingState = 1,
    Prediction = 2,
    TutorialTestInput = 3,
    EALPriority_MAX = 4,
};

enum class EFactionsEnums {
    Faction1 = 0,
    Faction2 = 1,
    Faction3 = 2,
    Faction4 = 3,
    Faction5 = 4,
    TMP_Neutral = 5,
    Count = 6,
    EFactionsEnums_MAX = 7,
};

enum class EAlertLevel {
    Normal = 0,
    Suspicious = 1,
    Alert = 2,
    Count = 3,
    EAlertLevel_MAX = 4,
};

enum class EFirstSpawnMethod {
    AtTheBeginning = 0,
    WithATimer = 1,
    OnAnEvent = 2,
    Count = 3,
    Invalid = 4,
    EFirstSpawnMethod_MAX = 5,
};

enum class EPatrolLaunchMethod {
    AtSpawn = 0,
    OnAnEvent = 1,
    EPatrolLaunchMethod_MAX = 2,
};

enum class EAIArchetype {
    None = 0,
    Servant = 1,
    Grunt = 2,
    Flashkick = 3,
    BigGuy = 4,
    Bodyguard = 5,
    Firedisciple = 6,
    Fajar = 7,
    Sean = 8,
    Kuroki = 9,
    Fengjie = 10,
    Yang = 11,
    EAIArchetype_MAX = 12,
};

enum class EOrderState {
    None = 0,
    Starting = 1,
    Processing = 2,
    Stopped = 3,
    Cancelled = 4,
    Count = 5,
    EOrderState_MAX = 6,
};

enum class EMcDominationGaugeSteps {
    Negative = 0,
    Neutral = 1,
    Positive = 2,
    PositivePlus = 3,
    Count = 4,
    None = 5,
    EMcDominationGaugeSteps_MAX = 6,
};

enum class EAlertLevelThreshold {
    LowerBoundNoClamp = 0,
    UpperBoundNoClamp = 1,
    LowerBound = 2,
    UpperBound = 3,
    EAlertLevelThreshold_MAX = 4,
};

enum class EFirstWaveSpawnMethod {
    BeginPlay = 0,
    OnEnemyEntersVolume = 1,
    Manually = 2,
    EFirstWaveSpawnMethod_MAX = 3,
};

enum class EApplyDamageOnWeaponType {
    Always = 0,
    Never = 1,
    OnFirstHit = 2,
    OnLastHit = 3,
    Count = 4,
    EApplyDamageOnWeaponType_MAX = 5,
};

enum class EWeaponOrientationConstraint {
    NoConstraint = 0,
    Normal = 1,
    Fakie = 2,
    Count = 3,
    EWeaponOrientationConstraint_MAX = 4,
};

enum class EWeaponBlendSpaceComputeTime {
    AtOrderStart = 0,
    OnOrderUpdate = 1,
    CustomComputeTime = 2,
    Count = 3,
    EWeaponBlendSpaceComputeTime_MAX = 4,
};

enum class EBlendSpaceParamComputeType {
    DistanceFromTarget = 0,
    Count = 1,
    EBlendSpaceParamComputeType_MAX = 2,
};

enum class EWeaponAnimType {
    AnimSequence = 0,
    BlendSpace = 1,
    Count = 2,
    EWeaponAnimType_MAX = 3,
};

enum class EAttackStates {
    BuildUp = 0,
    Strike = 1,
    Release = 2,
    InterStrike = 3,
    Count = 4,
    None = 5,
    EAttackStates_MAX = 6,
};

enum class EActionType {
    LockMove = 0,
    Takedown = 1,
    NormalAttack = 2,
    Grab = 3,
    Throwable = 4,
    ThrowableFromPickUp = 5,
    Pushable = 6,
    VirtualTarget = 7,
    PushToward = 8,
    FrontFrontLightAttack = 9,
    BackFrontLightAttack = 10,
    FrontLightAttack = 11,
    FrontFrontHeavyAttack = 12,
    BackFrontHeavyAttack = 13,
    FrontHeavyAttack = 14,
    KnockdownAttack = 15,
    Focus = 16,
    PrepFocus = 17,
    PushVictim = 18,
    Avoid = 19,
    LockCamToEnter = 20,
    LockCamToExit = 21,
    RushAttack = 22,
    RunningOrderTarget = 23,
    FocusVitalPoint = 24,
    DodgeAttack = 25,
    PushbackCharacters = 26,
    RushAttackHeavy = 27,
    Count = 28,
    None = 29,
    EActionType_MAX = 30,
};

enum class EChargeCapEndReason {
    CapValidated = 0,
    InterruptedOnPurpose = 1,
    Interrupted = 2,
    InterruptedDuringExtraTime = 3,
    Count = 4,
    EChargeCapEndReason_MAX = 5,
};

enum class EHitDismissReason {
    None = 0,
    Deflect = 1,
    ParryToAction = 2,
    DefenseNotifyState = 3,
    InvulnerabilityOrderService = 4,
    ParryToHitOrderService = 5,
    TakedownOrGrab = 6,
    StructureBrokenOnParry = 7,
    DizzyOnParry = 8,
    FocusValidated = 9,
    Parry = 10,
    Avoid = 11,
    Dodge = 12,
    Traversal = 13,
    EHitDismissReason_MAX = 14,
};

enum class EMovableType {
    Pushable = 0,
    Throwable = 1,
    Count = 2,
    EMovableType_MAX = 3,
};

enum class EDefenseTactics {
    Invalid = 0,
    Guard = 1,
    Dodge = 2,
    ParryDeflect = 3,
    AttackAsDefense = 4,
    TraversalEvasion = 5,
    Avoid = 6,
    Count = 7,
    EDefenseTactics_MAX = 8,
};

enum class EAIDefendedAttackType {
    ComboAttack = 0,
    Throwable = 1,
    SynchAttack = 2,
    Count = 3,
    None = 4,
    EAIDefendedAttackType_MAX = 5,
};

enum class EAIContextualDefenseType {
    Default = 0,
    Throwable = 1,
    FromGround = 2,
    Count = 3,
    EAIContextualDefenseType_MAX = 4,
};

enum class EEnemyPresenceKnownType {
    Known = 0,
    Unknown = 1,
    EEnemyPresenceKnownType_MAX = 2,
};

enum class EJoinDialogActors {
    All = 0,
    PrimarySpeaker = 1,
    SecondarySpeaker = 2,
    DialogInvolvedActors = 3,
    None = 4,
    EJoinDialogActors_MAX = 5,
};

enum class EAIAttackTicketJokerSituation {
    TargetTraversal = 0,
    TargetTakedown = 1,
    TargetDodge = 2,
    TargetHitted = 3,
    CandidateAttacking = 4,
    TargetThrowsObject = 5,
    TargetPerformsFocusAttack = 6,
    TargetPerformsLastManTakedown = 7,
    TargetPerformsKnockdownAttack = 8,
    TargetRushing = 9,
    TargetRevive = 10,
    TargetKnockedDown = 11,
    TargetGettingUp = 12,
    TargetPushedBack = 13,
    TargetDizzy = 14,
    MCDominationGoesPositive = 15,
    MCDominationGoesNegative = 16,
    Count = 17,
    None = 18,
    EAIAttackTicketJokerSituation_MAX = 19,
};

enum class ERunType {
    Vanilla = 0,
    ModifiersOnly = 1,
    CheatsOnly = 2,
    CheatsAndModifiers = 3,
    ERunType_MAX = 4,
};

enum class EDownState {
    Down = 0,
    StandingUp = 1,
    WaitingForRespawn = 2,
    DownNoRespawn = 3,
    Death = 4,
    DeathWaitingRespawn = 5,
    DeathRespawn = 6,
    DeathNoRespawn = 7,
    Count = 8,
    None = 9,
    EDownState_MAX = 10,
};

enum class EScoreComparisonType {
    GreaterThanOrEquals = 0,
    LessThanOrEquals = 1,
    Count = 2,
    EScoreComparisonType_MAX = 3,
};

enum class ESequentialLoopRule {
    LoopOnAllInSameOrder = 0,
    LoopOnLast = 1,
    ESequentialLoopRule_MAX = 2,
};

enum class EHardpointActivationRule {
    Sequential = 0,
    Random = 1,
    EHardpointActivationRule_MAX = 2,
};

enum class EAttackMirroringMethod {
    BasedOnQuadrantToTarget = 0,
    BasedOnLeftFootSyncMarker = 1,
    BasedOnRightFootSyncMarker = 2,
    EAttackMirroringMethod_MAX = 3,
};

enum class EPendingttackXPType {
    DefenseAttack = 0,
    OffenseAttack = 1,
    Num = 2,
    EPendingttackXPType_MAX = 3,
};

enum class EWeightCategory {
    Light = 0,
    Normal = 1,
    Heavy = 2,
    Overweight = 3,
    Count = 4,
    None = 5,
    EWeightCategory_MAX = 6,
};

enum class EEarnXPInstigator {
    AI = 0,
    PLAYER = 1,
    GAMEMODE = 2,
    EEarnXPInstigator_MAX = 3,
};

enum class EStatsWeaponComputingMethod {
    Normal = 0,
    ForceEquippedWeapon = 1,
    PreventWeapon = 2,
    EStatsWeaponComputingMethod_MAX = 3,
};

enum class EAttackLearningState {
    Unknown = 0,
    Learning = 1,
    Unlocked = 2,
    MentoringUnlocked = 3,
    Count = 4,
    None = 5,
    EAttackLearningState_MAX = 6,
};

enum class ECharacterProgressionRewardTypes {
    Grab = 0,
    Takedown = 1,
    Count = 2,
    None = 3,
    ECharacterProgressionRewardTypes_MAX = 4,
};

enum class ECharacterProgressionRewardConditions {
    Level = 0,
    Tutorial = 1,
    School_Level = 2,
    Absolver = 3,
    Gleam = 4,
    GleamLvl = 5,
    GameModeLvl = 6,
    Count = 7,
    None = 8,
    ECharacterProgressionRewardConditions_MAX = 9,
};

enum class EPendantUpdate {
    IncrementSuccessfulPendantNotFull = 0,
    IncrementSuccessfulPendantFull = 1,
    IncrementFailedPendantFull = 2,
    EPendantUpdate_MAX = 3,
};

enum class ESubFightingState {
    None = 0,
    SuperDizzy = 1,
    ESubFightingState_MAX = 2,
};

enum class ELookAtType {
    Actor = 0,
    Pos = 1,
    Melee = 2,
    Count = 3,
    None = 4,
    ELookAtType_MAX = 5,
};

enum class ECameraLockAlgorithms {
    LockOnTarget = 0,
    FollowingOwnerMovement = 1,
    FramingContainer = 2,
    Count = 3,
    None = 4,
    ECameraLockAlgorithms_MAX = 5,
};

enum class ECameraMirrorManagementType {
    UseSpring = 0,
    UseBlender = 1,
    DirectValue = 2,
    Count = 3,
    None = 4,
    ECameraMirrorManagementType_MAX = 5,
};

enum class ECameraTransitionState {
    None = 0,
    BlendIn = 1,
    FullyBlended = 2,
    BlendOut = 3,
    Count = 4,
    ECameraTransitionState_MAX = 5,
};

enum class EJoinMethod {
    Default = 0,
    Password = 1,
    Invite = 2,
    EJoinMethod_MAX = 3,
};

enum class EActivityWantedState {
    Started = 0,
    StartedThenEnded = 1,
    Ended = 2,
    None = 3,
    EActivityWantedState_MAX = 4,
};

enum class EPushObstacleReaction {
    WallSplash = 0,
    ObstacleDestructionByHitbox = 1,
    Ignore = 2,
    Hit = 3,
    EPushObstacleReaction_MAX = 4,
};

enum class EUIInputModes {
    Controller = 0,
    Mouse = 1,
    Count = 2,
    None = 3,
    EUIInputModes_MAX = 4,
};

enum class EMenuEnum {
    InGameMenu = 0,
    InGameEquipment = 1,
    InGameCombatDeck = 2,
    InGameInventory = 3,
    InGameStatus = 4,
    InGameOption = 5,
    InGameQuit = 6,
    CombatDeckTraining = 7,
    CombatDeckStanceSelection = 8,
    CombatDeckStanceEdition = 9,
    CombatDeckAttackSelection = 10,
    EndGameMenu = 11,
    AltarMenu = 12,
    DownMenu = 13,
    GameModeSelectionMenu = 14,
    StartupMenu = 15,
    InGameSocial = 16,
    InGameGraphicOptions = 17,
    CreateSchool = 18,
    SchoolMenu = 19,
    LoadCheckpointMenu = 20,
    InGameInputsMapping = 21,
    Credits = 22,
    GameplayOptionMenu = 23,
    LootBoxMenu = 24,
    ShopMenu = 25,
    DeathMenu = 26,
    EndDemoMenu = 27,
    DemoPreStartMenu = 28,
    SoundOptionsMenu = 29,
    CombosMenu = 30,
    PressStartMenu = 31,
    CoreOptionsMenu = 32,
    SelectGenderMenu = 33,
    CityView = 34,
    DetectiveBoard = 35,
    HideoutSnapshotSelection = 36,
    Remapping = 37,
    ReplayMenu = 38,
    LoadSaveMenu = 39,
    NewGameMenu = 40,
    DisplayOptionsMenu = 41,
    LanguageOptionsMenu = 42,
    InvestigationBoard = 43,
    CheatMenu = 44,
    ReplayManagementMenu = 45,
    Outfit = 46,
    ArenaMain = 47,
    ArenaOutro = 48,
    Training_ModeSelection = 49,
    Count = 50,
    None = 51,
    EMenuEnum_MAX = 52,
};

enum class ECycleDirection {
    Next = 0,
    Previous = 1,
    None = 2,
    ECycleDirection_MAX = 3,
};

enum class EGameModeTypes {
    Mode1v1 = 0,
    Mode3v3 = 1,
    ModePVEMine = 2,
    Count = 3,
    None = 4,
    EGameModeTypes_MAX = 5,
};

enum class ECoopGameModeAnswerStatus {
    None = 0,
    YesOnTheWay = 1,
    Yes = 2,
    No = 3,
    Leader = 4,
    Count = 5,
    ECoopGameModeAnswerStatus_MAX = 6,
};

enum class EGameOptionTypes {
    CameraSpeed = 0,
    MusicVolume = 1,
    SoundEffectsVolume = 2,
    VibrationStrength = 3,
    CameraShake = 4,
    MouseSensitivity = 5,
    CameraAcceleration = 6,
    DialogVolume = 7,
    LookInvertXAxis = 8,
    LookInvertYAxis = 9,
    FocusMechanicOnToggle = 10,
    TextureQuality = 11,
    ShadowQuality = 12,
    ViewDistanceQuality = 13,
    EffectsQuality = 14,
    PostProcessQuality = 15,
    FoliageQuality = 16,
    AntiAliasingQuality = 17,
    ScreenPercentage = 18,
    VSync = 19,
    Gamma = 20,
    WindowMode = 21,
    HideHud = 22,
    HideClueVfxs = 23,
    ActivateGameplaySFX = 24,
    BackgroundDialogOpacity = 25,
    HUDColorPreset = 26,
    HUDFraming = 27,
    HighConstrastEnabled = 28,
    MonoOnly = 29,
    MasterVolume = 30,
    AdvancedVibrationEnabled = 31,
    HUDSize = 32,
    HUDOffsetX = 33,
    HUDOffsetY = 34,
    ShowSubtitles = 35,
    DLSSEnabled = 36,
    BrokenUIDarkMode = 37,
    UIDarkMode = 38,
    AudioOutput = 39,
    CameraAnimDrivenSurrounding = 40,
    Count = 41,
    None = 42,
    EGameOptionTypes_MAX = 43,
};

enum class EWGGameFlowMapOption {
    UseGameDifficulty = 0,
    EWGGameFlowMapOption_MAX = 1,
};

enum class EWorldTravelLoadSaveStrategy {
    Nothing = 0,
    SaveOnly = 1,
    LoadOnly = 2,
    SaveThenLoad = 3,
    EWorldTravelLoadSaveStrategy_MAX = 4,
};

enum class EVirtualAction {
    None = 0,
    Virtual_Accept = 1,
    Virtual_Back = 2,
    EVirtualAction_MAX = 3,
};

enum class ECaptureInputStep {
    ActionStep = 0,
    AxisXLeftStep = 1,
    AxisXRightStep = 2,
    AxisYUpStep = 3,
    AxisYDownStep = 4,
    Count = 5,
    ECaptureInputStep_MAX = 6,
};

enum class EPushableState {
    Stopped = 0,
    Moving = 1,
    Falling = 2,
    OnRail = 3,
    OnRailFalling = 4,
    Bouncing = 5,
    Destroyed = 6,
    None = 7,
    EPushableState_MAX = 8,
};

enum class ETraversalEntryType {
    None = 0,
    Above = 1,
    Below = 2,
    Climb = 3,
    Cine = 4,
    Push = 5,
    PushClose = 6,
    DropDown = 7,
    Count = 8,
    ETraversalEntryType_MAX = 9,
};

enum class ESimpleAxisSide {
    PositiveAxis = 0,
    NegativeAxis = 1,
    BothSides = 2,
    None = 3,
    ESimpleAxisSide_MAX = 4,
};

enum class EKnockbackReorientationBehaviour {
    ReorientToAttacker = 0,
    ReorientToImpact = 1,
    InvertReorientToImpact = 2,
    ReorientToImpactNormal = 3,
    None = 4,
    EKnockbackReorientationBehaviour_MAX = 5,
};

enum class ESpeedState {
    V0 = 0,
    V1 = 1,
    V2 = 2,
    V3 = 3,
    Count = 4,
    None = 5,
    ESpeedState_MAX = 6,
};

enum class EReplayKeyFadeType {
    Off = 0,
    ToBlack = 1,
    FromBlack = 2,
    Count = 3,
    Invalid = 4,
    EReplayKeyFadeType_MAX = 5,
};

enum class EReplayKeyCutType {
    None = 0,
    In = 1,
    Out = 2,
    Count = 3,
    Invalid = 4,
    EReplayKeyCutType_MAX = 5,
};

enum class EReplayKeyCameraFocus {
    None = 0,
    Manual = 1,
    Target = 2,
    Count = 3,
    Invalid = 4,
    EReplayKeyCameraFocus_MAX = 5,
};

enum class EReplayKeyCameraMeshFading {
    Ignored = 0,
    Enabled = 1,
    Disabled = 2,
    Count = 3,
    Invalid = 4,
    EReplayKeyCameraMeshFading_MAX = 5,
};

enum class EReplayKeyCameraMode {
    Gameplay = 0,
    Custom = 1,
    Disabled = 2,
    Count = 3,
    Invalid = 4,
    EReplayKeyCameraMode_MAX = 5,
};

enum class EReplayKeyTransition {
    Linear = 0,
    EaseOut = 1,
    EaseIn = 2,
    EaseInEaseOut = 3,
    Step = 4,
    Count = 5,
    Invalid = 6,
    EReplayKeyTransition_MAX = 7,
};

enum class EReplayKeyIndexUpdateReason {
    KeyMoved = 0,
    KeyInserted = 1,
    Count = 2,
    Invalid = 3,
    EReplayKeyIndexUpdateReason_MAX = 4,
};

enum class EReplayableDestructibleState {
    Unspawned = 0,
    Spawned = 1,
    Destroyed = 2,
    EReplayableDestructibleState_MAX = 3,
};

enum class EReplayCameraMode {
    Navigation = 0,
    LockedVirtualCam = 1,
    Count = 2,
    Invalid = 3,
    EReplayCameraMode_MAX = 4,
};

enum class EReplayFeedbackEvent {
    RecordingReachedTimeLimit = 0,
    RecordingMinimalTimeNotReached = 1,
    RecordingComplete = 2,
    RecordingError = 3,
    RecordingReachedMaxSize = 4,
    NotEnoughSpace = 5,
    Count = 6,
    Invalid = 7,
    EReplayFeedbackEvent_MAX = 8,
};

enum class EReplayStopRecordingReason {
    None = 0,
    Manual = 1,
    SizeLimit = 2,
    TimeLimit = 3,
    SequenceStarted = 4,
    PlayerTeleported = 5,
    Count = 6,
    Invalid = 7,
    EReplayStopRecordingReason_MAX = 8,
};

enum class EReplayKeyTypeFlag {
    None = 0,
    TimeDilation = 1,
    EReplayKeyTypeFlag_MAX = 2,
};

enum class EActionMouseButtons {
    Left = 0,
    Right = 1,
    None = 2,
    EActionMouseButtons_MAX = 3,
};

enum class EControllerIconAxisTypes {
    Horizontal = 0,
    Vertical = 1,
    HorizontalAndVertical = 2,
    Diagonal = 3,
    Back = 4,
    Front = 5,
    Left = 6,
    Right = 7,
    Count = 8,
    None = 9,
    EControllerIconAxisTypes_MAX = 10,
};

enum class EMenuTransitions {
    Push = 0,
    Pop = 1,
    Count = 2,
    None = 3,
    EMenuTransitions_MAX = 4,
};

enum class EWidgetLifeCycle {
    ReleaseOnPop = 0,
    NeverReleased = 1,
    EWidgetLifeCycle_MAX = 2,
};

enum class ESocialRequest {
    Coop = 0,
    StopFight = 1,
    PlayGameMode_1V1_Coop = 2,
    PlayGameMode_3V3_Coop = 3,
    PlayGameMode_PvE_Coop = 4,
    Count = 5,
    None = 6,
    ESocialRequest_MAX = 7,
};

enum class EEmoteAction {
    RequestCoop = 0,
    AcceptCoop = 1,
    StopCoop = 2,
    DeclareFight = 3,
    RequestStopFight = 4,
    StopFight = 5,
    Refuse = 6,
    RequestPlayGameMode_1V1_Coop = 7,
    RequestPlayGameMode_3V3_Coop = 8,
    AcceptPlayGameModeCoop = 9,
    RefusePlayGameModeCoop = 10,
    RequestPlayGameMode_PvE_Coop = 11,
    Count = 12,
    None = 13,
    EEmoteAction_MAX = 14,
};

enum class EMappableFieldScaleTypes {
    PositiveScale = 0,
    NegativeScale = 1,
    Count = 2,
    None = 3,
    EMappableFieldScaleTypes_MAX = 4,
};

enum class ERemappingAllowedInputTypes {
    KeyboardMouse = 0,
    Gamepad = 1,
    Both = 2,
    Count = 3,
    None = 4,
    ERemappingAllowedInputTypes_MAX = 5,
};

enum class EAbsorbFeedbackTypes {
    Normal = 0,
    Super = 1,
    EAbsorbFeedbackTypes_MAX = 2,
};

enum class EArchetypeType {
    Default = 0,
    Weaker = 1,
    Stronger = 2,
    EArchetypeType_MAX = 3,
};

enum class EAIAttackBehaviorState {
    None = 0,
    Cancelled = 1,
    MoveToTarget = 2,
    PrepareAttack = 3,
    PrepareAttackAction = 4,
    PrepareAttackFollowup = 5,
    Attacking = 6,
    EAIAttackBehaviorState_MAX = 7,
};

enum class EComboEndReason {
    Finished = 0,
    TicketOverride = 1,
    ComboStartFailed = 2,
    BehaviorCancelled = 3,
    MoveToTargetFailed = 4,
    RangeBlockedTimeout = 5,
    Defending = 6,
    WeaponBroke = 7,
    WeaponDropped = 8,
    Parried = 9,
    IsStun = 10,
    PunishableAvoided = 11,
    ComboAssetChanged = 12,
    Custom = 13,
    EComboEndReason_MAX = 14,
};

enum class EAIJokerBehaviorAgainstAttacks {
    Ignore = 0,
    CancelAttacksInMoveToState = 1,
    CancelAttackMidComboDeferred = 2,
    CancelAttacksInAnyStateDeferred = 3,
    CancelAttacksMidComboInstant = 4,
    CancelAttacksInAnyStateInstant = 5,
    EAIJokerBehaviorAgainstAttacks_MAX = 6,
};

enum class EComboAIConditionGroupOperator {
    AND = 0,
    OR = 1,
    EComboAIConditionGroupOperator_MAX = 2,
};

enum class EWallJumpAttackParameter {
    ValidAngleMin = 0,
    ValidAngleMax = 1,
    DistToWallJumpPointMin = 2,
    DistToWallJumpPointMax = 3,
    Count = 4,
    None = 5,
    EWallJumpAttackParameter_MAX = 6,
};

enum class EDefenseNeededTestResult {
    Yes = 0,
    No_Instigator_Will_Hit_First = 1,
    No_Incoming_Hit = 2,
    No_Target_Attack_Data = 3,
    No_AlreadyDefended = 4,
    No_Uknown_Reason = 5,
    EDefenseNeededTestResult_MAX = 6,
};

enum class EAIFidgetTypes {
    Idle = 0,
    JoinDialog = 1,
    Confrontation = 2,
    Combat = 3,
    NearDeath = 4,
    Count = 5,
    None = 6,
    EAIFidgetTypes_MAX = 7,
};

enum class ELateralMovementDirection {
    Left = 0,
    Right = 1,
    None = 2,
    Count = 3,
    ELateralMovementDirection_MAX = 4,
};

enum class EAIChangeToIndirectRoleStates {
    Down = 0,
    Dizzy = 1,
    Pushed = 2,
    StructureBroken = 3,
    Parried = 4,
    Grabbed = 5,
    Count = 6,
    None = 7,
    EAIChangeToIndirectRoleStates_MAX = 8,
};

enum class EAIGameplayStates {
    None = 0,
    Idle = 1,
    Block = 2,
    Dodge = 3,
    Parry = 4,
    Down = 5,
    Dizzy = 6,
    Pushed = 7,
    Attacking = 8,
    StructureBroken = 9,
    Parried = 10,
    Grabbed = 11,
    Blocked = 12,
    Traversal = 13,
    EAIGameplayStates_MAX = 14,
};

enum class EAIInfluenceTest {
    Superior = 0,
    Inferior = 1,
    Range = 2,
    Match = 3,
    EAIInfluenceTest_MAX = 4,
};

enum class EAIJiggleBehavior {
    None = 0,
    JiggleMove = 1,
    JiggleAnim = 2,
    Count = 3,
    EAIJiggleBehavior_MAX = 4,
};

enum class EAimIKSolverType {
    Quaternion = 0,
    NoRoll = 1,
    EAimIKSolverType_MAX = 2,
};

enum class EAIPaceTypes {
    CloseToEnemy = 0,
    FarFromEnemy = 1,
    Attacking = 2,
    Count = 3,
    EAIPaceTypes_MAX = 4,
};

enum class EAIPhaseLevelSequenceTransform {
    Target = 0,
    SituationActor = 1,
    EAIPhaseLevelSequenceTransform_MAX = 2,
};

enum class EAIPhaseNodeType {
    None = 0,
    Death = 1,
    Abandon = 2,
    EAIPhaseNodeType_MAX = 3,
};

enum class EBossKillingWay {
    Kill = 0,
    Spare = 1,
    EBossKillingWay_MAX = 2,
};

enum class EAIPhaseTransitionEvents {
    SwitchPhase = 0,
    EAIPhaseTransitionEvents_MAX = 1,
};

enum class EAIPositioningOption {
    AllowObstaclesBetweenAgentAndTarget = 0,
    FilterPositionsWithValidPath = 1,
    Count = 2,
    EAIPositioningOption_MAX = 3,
};

enum class EPendingGenerationTaskToLaunch {
    None = 0,
    CreateCandidates = 1,
    GenerationTaskAroundEnemyIfNeeded = 2,
    EPendingGenerationTaskToLaunch_MAX = 3,
};

enum class ESanctuaryCharacterStatus {
    None = 0,
    FrozenBySanctuary = 1,
    AssignedToSanctuary = 2,
    ESanctuaryCharacterStatus_MAX = 3,
};

enum class EStartWaveType {
    Automatic = 0,
    OnAnEvent = 1,
    EStartWaveType_MAX = 2,
};

enum class EWeaponTicketStatus {
    Dormant = 0,
    NotUsable = 1,
    InCooldown = 2,
    Owned = 3,
    Available = 4,
    EWeaponTicketStatus_MAX = 5,
};

enum class EAnalogInputReferenceDirection {
    UpdateWithInputDir = 0,
    UpdateWithInputVelocity = 1,
    UpdateWithActorForward = 2,
    UpdateWithInputForward = 3,
    EAnalogInputReferenceDirection_MAX = 4,
};

enum class EAngleComputeMethod {
    SelfToTargetOnTargetForward = 0,
    SelfToTargetOnSelfForward = 1,
    EAngleComputeMethod_MAX = 2,
};

enum class ESnapType {
    NoOvershoot = 0,
    Linear = 1,
    Stretched = 2,
    ESnapType_MAX = 3,
};

enum class EAnimTrackByBone {
    Refbox = 0,
    EAnimTrackByBone_MAX = 1,
};

enum class EScoringType {
    CombatPoints = 0,
    Age = 1,
    BestTime = 2,
    Count = 3,
    EScoringType_MAX = 4,
};

enum class ETargetingReaction {
    Guard = 0,
    Deflect = 1,
    Dodge = 2,
    Hit = 3,
    Attack = 4,
    Grab = 5,
    Throwable = 6,
    Count = 7,
    ETargetingReaction_MAX = 8,
};

enum class EAttackFilterSpecialAbilities {
    None = 0,
    Parry = 1,
    Avoid = 2,
    Absorb = 3,
    GuardBreak = 4,
    Interrupt = 5,
    EAttackFilterSpecialAbilities_MAX = 6,
};

enum class EAttackSlot {
    Regular = 0,
    Alternative = 1,
    Count = 2,
    None = 3,
    EAttackSlot_MAX = 4,
};

enum class EAttackSortingMethods {
    ID = 0,
    Damage = 1,
    CurrentDamage = 2,
    None = 3,
    EAttackSortingMethods_MAX = 4,
};

enum class EAlternativeAttackTypes {
    Stun = 0,
    Knockdown = 1,
    Pushback = 2,
    AerialAvoid = 3,
    GroundedAvoid = 4,
    Count = 5,
    None = 6,
    EAlternativeAttackTypes_MAX = 7,
};

enum class EMainAttackTypes {
    Light = 0,
    Heavy = 1,
    Count = 2,
    None = 3,
    EMainAttackTypes_MAX = 4,
};

enum class EAttackWoO {
    Cancel = 0,
    Combo = 1,
    Count = 2,
    None = 3,
    EAttackWoO_MAX = 4,
};

enum class EAttributeScales {
    S = 0,
    A = 1,
    B = 2,
    C = 3,
    D = 4,
    E = 5,
    Count = 6,
    None = 7,
    EAttributeScales_MAX = 8,
};

enum class EAvoidFeedbackTypes {
    Normal = 0,
    Super = 1,
    Shadow = 2,
    EAvoidFeedbackTypes_MAX = 3,
};

enum class EAvoidLaunchMethod {
    EndOfStrike = 0,
    WhenHitHappen = 1,
    EAvoidLaunchMethod_MAX = 2,
};

enum class EAvoidTrackingTypes {
    TrueTarget = 0,
    FakeTarget = 1,
    None = 2,
    EAvoidTrackingTypes_MAX = 3,
};

enum class EEnvironmentalInteractionTypes {
    None = 0,
    Takedown = 1,
    Push = 2,
    Count = 3,
    EEnvironmentalInteractionTypes_MAX = 4,
};

enum class EMessageReason {
    None = 0,
    LeashMaxDistanceReached = 1,
    LevelDesignCollision = 2,
    Count = 3,
    Invalid = 4,
    EMessageReason_MAX = 5,
};

enum class ECameraAnimDrivenComputationMethod {
    ClosestAngle = 0,
    ClosestDistance = 1,
    Random = 2,
    AlwaysFirst = 3,
    Count = 4,
    ECameraAnimDrivenComputationMethod_MAX = 5,
};

enum class ECameraAnimDrivenSetupStatus {
    Invalid = 0,
    PendingComputation = 1,
    PendingLaunch = 2,
    Initialized = 3,
    ECameraAnimDrivenSetupStatus_MAX = 4,
};

enum class EWakeUpStep {
    JustSleeping = 0,
    Sleeping = 1,
    JustTryingToWakeUp = 2,
    TryingToWakeUp = 3,
    EWakeUpStep_MAX = 4,
};

enum class ECameraDataModifierTickBehavior {
    FullyBlended = 0,
    TransitionInOrFullyBlended = 1,
    Always = 2,
    Count = 3,
    None = 4,
    ECameraDataModifierTickBehavior_MAX = 5,
};

enum class EDeadZoneStatus {
    InSafeZone = 0,
    InFarDeadZone = 1,
    InNearDeadZone = 2,
    EDeadZoneStatus_MAX = 3,
};

enum class ECameraNodeTypes {
    CameraNode = 0,
    CameraNodeBlender = 1,
    CameraMixerNode = 2,
    AnimDrivenCameraNode = 3,
    Count = 4,
    ECameraNodeTypes_MAX = 5,
};

enum class ECameraService {
    Comfort = 0,
    Collision = 1,
    Following = 2,
    CollisionCircle = 3,
    FulcrumOffset = 4,
    LookAtService = 5,
    PitchRestingService = 6,
    DeadZoneRepulsionService = 7,
    MirrorCursorManagementService = 8,
    CameraCollisionSideService = 9,
    MirrorCursorMeleeService = 10,
    SleepingService = 11,
    Fade = 12,
    LockOnTarget = 13,
    LockFollowing = 14,
    LockFraimingContainer = 15,
    Count = 16,
    Invalid = 17,
    ECameraService_MAX = 18,
};

enum class ECameraTrackingMode {
    PlayerRootComponent = 0,
    PlayerPelvisBone = 1,
    PlayerCamJoint = 2,
    ECameraTrackingMode_MAX = 3,
};

enum class EUpdateAngleMode {
    Both = 0,
    OnlyEnd = 1,
    EUpdateAngleMode_MAX = 2,
};

enum class ECaptureControllerTypes {
    None = 0,
    Gamepad = 1,
    Keyboard = 2,
    Count = 3,
    ECaptureControllerTypes_MAX = 4,
};

enum class EInterruptionBehavior {
    StopOrderAndRecover = 0,
    SwapOrderAnimation = 1,
    ApplyHitOrRecoverFightingState = 2,
    EInterruptionBehavior_MAX = 3,
};

enum class ECinematicsEnum {
    None = 0,
    Kuretz = 1,
    Cargal = 2,
    Risryn = 3,
    Intro = 4,
    Outtro = 5,
    TutoIntro = 6,
    Kuretz_02 = 7,
    Kuretz_03 = 8,
    Kuretz_04 = 9,
    Cargal_02 = 10,
    Cargal_03 = 11,
    Risryn_02 = 12,
    Risryn_03 = 13,
    Risryn_04 = 14,
    Custom_01 = 15,
    Custom_02 = 16,
    Custom_03 = 17,
    Custom_04 = 18,
    Custom_05 = 19,
    Custom_06 = 20,
    Custom_07 = 21,
    Custom_08 = 22,
    Custom_09 = 23,
    Custom_10 = 24,
    ECinematicsEnum_MAX = 25,
};

enum class EComboTransitionResult {
    Yes = 0,
    No = 1,
    EComboTransitionResult_MAX = 2,
};

enum class EComboTransition {
    Light = 0,
    LightHold = 1,
    LightAlt = 2,
    LightFront = 3,
    LightFrontFront = 4,
    LightBackFront = 5,
    Heavy = 6,
    HeavyHold = 7,
    HeavyAlt = 8,
    HeavyFront = 9,
    HeavyFrontFront = 10,
    HeavyBackFront = 11,
    AttackKnockdown = 12,
    AttackKnockdownHold = 13,
    Grab = 14,
    LightRushAttack = 15,
    DodgeAttack = 16,
    LightGuard = 17,
    HeavyGuard = 18,
    Disengage = 19,
    HeavyRushAttack = 20,
    Count = 21,
    None = 22,
    EComboTransition_MAX = 23,
};

enum class ComboTraceElementType {
    NodeRoot = 0,
    NodeAttack = 1,
    NodeRedirect = 2,
    Condition = 3,
    ProbaTransition = 4,
    Conduit = 5,
    None = 6,
    ComboTraceElementType_MAX = 7,
};

enum class EAITargetOrderState {
    Played = 0,
    Ended = 1,
    EAITargetOrderState_MAX = 2,
};

enum class EComboAIConditionOnState {
    Started = 0,
    Ended = 1,
    None = 2,
    EComboAIConditionOnState_MAX = 3,
};

enum class EAIConditionTraceRotationContext {
    Instigator = 0,
    Target = 1,
    Identity = 2,
    EAIConditionTraceRotationContext_MAX = 3,
};

enum class EAIConditionTraceOffsetContext {
    Instigator = 0,
    Target = 1,
    World = 2,
    EAIConditionTraceOffsetContext_MAX = 3,
};

enum class EAIConditionTraceContext {
    Instigator = 0,
    Target = 1,
    EAIConditionTraceContext_MAX = 2,
};

enum class EComboAttackValidationStates {
    Success = 0,
    WrongEndQuadrant = 1,
    PreviousAttackIsEmpty = 2,
    PreviousAttackHasWrongEndQuadrant = 3,
    CannotBeEmpty = 4,
    AttackLocked = 5,
    EComboAttackValidationStates_MAX = 6,
};

enum class EAIMemoryAttackType {
    AttackLaunched = 0,
    AttackReceived = 1,
    EAIMemoryAttackType_MAX = 2,
};

enum class EControllerIconStyles {
    Small = 0,
    SmallAlternative1 = 1,
    SmallAlternative2 = 2,
    Count = 3,
    EControllerIconStyles_MAX = 4,
};

enum class ECoordinateSystem {
    World = 0,
    Local = 1,
    ECoordinateSystem_MAX = 2,
};

enum class EBoundingBoxSides {
    None = 0,
    Left = 1,
    Right = 2,
    Front = 4,
    Back = 16,
    EBoundingBoxSides_MAX = 17,
};

enum class EDeathSequenceEvents {
    DisplayMenu = 0,
    Pause = 1,
    HideMenu = 2,
    PlayerStandsUp = 3,
    SnapToDeathPose = 4,
    EDeathSequenceEvents_MAX = 5,
};

enum class EDodgeDirectionType {
    Side = 0,
    Back = 1,
    Count = 2,
    None = 3,
    EDodgeDirectionType_MAX = 4,
};

enum class ESlopeDetectionResult {
    OnSlopeDescending = 0,
    OnSlopeAscending = 1,
    OnPlaneGround = 2,
    CouldNotBeTested = 3,
    ESlopeDetectionResult_MAX = 4,
};

enum class ESlopeReaction {
    FallFromPushed = 0,
    FallOnSlope = 1,
    None = 2,
    ESlopeReaction_MAX = 3,
};

enum class EMoveDirections {
    Left = 0,
    Right = 1,
    Backward = 2,
    Forward = 3,
    Count = 4,
    None = 5,
    EMoveDirections_MAX = 6,
};

enum class EDirections {
    Left = 0,
    Right = 1,
    Down = 2,
    Up = 3,
    Count = 4,
    None = 5,
    EDirections_MAX = 6,
};

enum class EDodgeType {
    Default = 0,
    KnockedDown = 1,
    GoingToKnockedDown = 2,
    Count = 3,
    EDodgeType_MAX = 4,
};

enum class EDropNotifyApplyMode {
    OnSelf = 0,
    OnCurrentTarget = 1,
    EDropNotifyApplyMode_MAX = 2,
};

enum class EPostProcessAnimDebugRole {
    Master = 0,
    Dummy = 1,
    None = 2,
    EPostProcessAnimDebugRole_MAX = 3,
};

enum class EEffectTarget {
    Self = 0,
    Target = 1,
    AOE = 2,
    EEffectTarget_MAX = 3,
};

enum class EEndGameResult {
    Victory = 0,
    Defeat = 1,
    Draw = 2,
    None = 3,
    EEndGameResult_MAX = 4,
};

enum class ETestAxis2D {
    X = 0,
    Y = 1,
    Both = 2,
    ETestAxis2D_MAX = 3,
};

enum class EGetActorsRelativeSideToBoxResult {
    AxisX = 0,
    AxisY = 1,
    No = 2,
    EGetActorsRelativeSideToBoxResult_MAX = 3,
};

enum class EGetActorsRelativeSideToBox {
    Same = 0,
    Opposite = 1,
    EGetActorsRelativeSideToBox_MAX = 2,
};

enum class ESCTestAngle {
    Oriented = 0,
    NoOriented = 1,
    ESCTestAngle_MAX = 2,
};

enum class ESCTestDistance {
    ItemLocationToContextBounding = 0,
    ItemBoundingBoxToContextLocation = 1,
    ESCTestDistance_MAX = 2,
};

enum class EEquipmentQuality {
    Clean = 0,
    Dirty = 1,
    Gold = 2,
    EEquipmentQuality_MAX = 3,
};

enum class EEquipmentStatType {
    VitalityBonus = 0,
    StaminaBonus = 1,
    Weight = 2,
    GuardCoefficient = 3,
    GuardSpecialCoefficient = 4,
    AttackSpecialRatio = 5,
    DefenseBonus = 6,
    SpecialDefenseBonus = 7,
    Count = 8,
    None = 9,
    EEquipmentStatType_MAX = 10,
};

enum class EWeightBinaryOperator {
    Multiply = 0,
    Add = 1,
    EWeightBinaryOperator_MAX = 2,
};

enum class EFightingActionState {
    None = 0,
    FreeMove = 1,
    LockMove = 2,
    RushMove = 3,
    Dodge = 4,
    Grab = 5,
    Attack = 6,
    Hit = 7,
    Inventory = 8,
    Equipment = 9,
    Options = 10,
    SpecialAbility = 11,
    Parried = 12,
    Dead = 13,
    Cancel = 14,
    ItemUse = 15,
    FlyMode = 16,
    Down = 17,
    Cinematic = 18,
    StoreResource = 19,
    Takedown = 20,
    BeingTakendown = 21,
    Guard = 22,
    Teleport = 23,
    PushFromGrab = 24,
    Fall = 25,
    ThrowObject = 26,
    PushObject = 27,
    PickUpObject = 28,
    DropObject = 29,
    Reaction = 30,
    IdleExit = 31,
    Traversal = 32,
    PrepFocus = 33,
    SynchronizedAttackInstigator = 34,
    SynchronizedAttackVictim = 35,
    ParrySuccess = 36,
    ParryFromDown = 37,
    TraversalCinematic = 38,
    DeflectSB = 39,
    Avoid = 40,
    AttackEnv = 41,
    FightingStateRecovery = 42,
    OpeningDoor = 43,
    PlayAnim = 44,
    Count = 45,
    EFightingActionState_MAX = 46,
};

enum class EPelvisComputation {
    AllowAll = 0,
    AllowForcedDirection = 1,
    AnalogOnly = 2,
    EPelvisComputation_MAX = 3,
};

enum class EGameDifficulty {
    Normal = 0,
    Easy = 1,
    Hard = 2,
    Count = 3,
    None = 4,
    EGameDifficulty_MAX = 5,
};

enum class EGameplayOptionsMenuSlot {
    Gameplay = 0,
    Audio = 1,
    EGameplayOptionsMenuSlot_MAX = 2,
};

enum class EGearRarity {
    Common = 0,
    Uncommon = 1,
    Rare = 2,
    Epic = 3,
    Legendary = 4,
    Count = 5,
    None = 6,
    EGearRarity_MAX = 7,
};

enum class EWallSide {
    Left = 0,
    Right = 1,
    AnyDirection = 2,
    EWallSide_MAX = 3,
};

enum class EPassiveTicketBehaviorAginstJoker {
    IgnoreAllJokers = 0,
    FailWhenAnyJokerActive = 1,
    TryCancelCurrentAttacksOnly = 2,
    EPassiveTicketBehaviorAginstJoker_MAX = 3,
};

enum class FAttackTicketBehavior {
    Active = 0,
    Passive = 1,
    FAttackTicketBehavior_MAX = 2,
};

enum class EThreateningEnemyAction {
    Attack = 0,
    Traversal = 1,
    Rush = 2,
    Flee = 3,
    PickUpWeapon = 4,
    TooClose = 5,
    EThreateningEnemyAction_MAX = 6,
};

enum class EConditionGroupOperators {
    OR = 0,
    AND = 1,
    EConditionGroupOperators_MAX = 2,
};

enum class EHandPoseBlendInTypes {
    Attack = 0,
    Hitted = 1,
    ItemUse = 2,
    Dodge = 3,
    Count = 4,
    None = 5,
    EHandPoseBlendInTypes_MAX = 6,
};

enum class EHandPoseBlendOutTypes {
    Meditation = 0,
    Dodge = 1,
    ChangeQuadrant = 2,
    Hitted = 3,
    Attack = 4,
    Special = 5,
    Parried = 6,
    Cancel = 7,
    ItemUse = 8,
    Emote = 9,
    Count = 10,
    None = 11,
    EHandPoseBlendOutTypes_MAX = 12,
};

enum class EHandPoses {
    HammerGrip = 0,
    BrokenGrip = 1,
    ReverseHammerGrip = 2,
    ReverseBrokenGrip = 3,
    Count = 4,
    None = 5,
    EHandPoses_MAX = 6,
};

enum class EHelpSignalTriggerCause {
    Striked = 0,
    StructureBroken = 1,
    Pushed = 2,
    KnockedDown = 3,
    Dizzy = 4,
    PushedFromGrab = 5,
    Count = 6,
    None = 7,
    EHelpSignalTriggerCause_MAX = 8,
};

enum class EAvoidableDefenseMatrix {
    None = 0,
    Jump = 1,
    Duck = 2,
    SideLeft = 4,
    SideRight = 8,
    EAvoidableDefenseMatrix_MAX = 9,
};

enum class EHitBoxDefenseMatrix {
    None = 0,
    Dodge = 1,
    Deflect = 2,
    Guard = 4,
    EHitBoxDefenseMatrix_MAX = 5,
};

enum class EAvailabilityLayerWindowConditions {
    None = 0,
    NoHit = 1,
    Hit = 2,
    Deflect = 4,
    Guard = 8,
    Avoided = 16,
    EAvailabilityLayerWindowConditions_MAX = 17,
};

enum class ETargetFilters {
    None = 0,
    Character = 1,
    Environment = 2,
    Count = 3,
    ETargetFilters_MAX = 4,
};

enum class EHitBoxAttackProperties {
    KnockDown = 0,
    PushBack = 1,
    Stun = 2,
    Count = 3,
    None = 4,
    EHitBoxAttackProperties_MAX = 5,
};

enum class EHitTypeDetected {
    AnyHit = 0,
    HitNotDismissed = 1,
    NoHit = 2,
    EHitTypeDetected_MAX = 3,
};

enum class EFallHitOrigin {
    FromPush = 0,
    FromFall = 1,
    EFallHitOrigin_MAX = 2,
};

enum class EDeathNotifyTriggeredCondition {
    IfGoesToRagdoll = 0,
    IfAnimOrNoUnspawn = 1,
    EDeathNotifyTriggeredCondition_MAX = 2,
};

enum class EInheritanceChoice {
    INHERIT = 0,
    OVERRIDE = 1,
    EInheritanceChoice_MAX = 2,
};

enum class EInputMappingProfile {
    DefaultGamepad = 0,
    DefaultKeyboard = 1,
    CustomGamepad = 2,
    CustomKeyboard = 3,
    EInputMappingProfile_MAX = 4,
};

enum class EMappingValidationErrorType {
    Collision = 0,
    InvalidInput = 1,
    Valid = 2,
    EMappingValidationErrorType_MAX = 3,
};

enum class EInputMappingCompatibilityRuleType {
    CompatibleOnlyWith = 0,
    IncompatibleOnlyWith = 1,
    EInputMappingCompatibilityRuleType_MAX = 2,
};

enum class EInputMappingForceController {
    CurrentController = 0,
    Gamepad = 1,
    Keyboard = 2,
    EInputMappingForceController_MAX = 3,
};

enum class EInputMappingKeySlotType {
    Action = 0,
    HorAxis = 1,
    VertAxit = 2,
    EInputMappingKeySlotType_MAX = 3,
};

enum class EKeyboardLayout {
    Azerty = 0,
    Qwerty = 1,
    None = 2,
    EKeyboardLayout_MAX = 3,
};

enum class InputBehavior {
    JustPressed = 0,
    Pressed = 1,
    PressedShorterThan = 2,
    JustReleased = 3,
    JustReleasedBefore = 4,
    Count = 5,
    InputBehavior_MAX = 6,
};

enum class EInventorySearchOrder {
    EquippedFirst = 0,
    MentoringItemFirst = 1,
    AcquisitionDate = 2,
    Weight = 3,
    DamageBluntReduce = 4,
    DamageCutReduce = 5,
    FragmentCost = 6,
    PrestigePointCost = 7,
    Name = 8,
    None = 9,
    Count = 10,
    EInventorySearchOrder_MAX = 11,
};

enum class EItemUsabilityTestResult {
    CanUse = 0,
    NotEquipped = 1,
    OnCoolDown = 2,
    NoItemLeft = 3,
    TargetRecquirementsNotMet = 4,
    EItemUsabilityTestResult_MAX = 5,
};

enum class EItemUseState {
    BuildUp = 0,
    Use = 1,
    InstantUse = 2,
    Release = 3,
    Count = 4,
    None = 5,
    EItemUseState_MAX = 6,
};

enum class ELockAction {
    PreciseLock = 0,
    SwitchTarget = 1,
    LockFromPreviewTargetWhenAttacking = 2,
    LockFromDesignatedTargetWhenAttacking = 3,
    LockFromLandingHit = 4,
    LockFromReceivingHit = 5,
    LockFromPreviousTargetDisappearing = 6,
    AttackDesignatedTarget = 7,
    LockFromBeingAttacked = 8,
    LockCamera = 9,
    Count = 10,
    ELockAction_MAX = 11,
};

enum class ELockActionCondition {
    Yes = 0,
    IfNoNMENearMe = 1,
    No = 2,
    ELockActionCondition_MAX = 3,
};

enum class ELocomotionRotationType {
    None = 0,
    Delayed = 1,
    Snap = 2,
    Count = 3,
    ELocomotionRotationType_MAX = 4,
};

enum class ELookAtRefDirMode {
    ActorForward = 0,
    HeadBone = 1,
    AnimDir = 2,
    EndAnimDir = 3,
    Default = 4,
    ELookAtRefDirMode_MAX = 5,
};

enum class ELookAtTargetType {
    Dialog = 0,
    Attack = 1,
    Throwable = 2,
    Interaction = 3,
    FirstLocalPlayer = 4,
    Count = 5,
    None = 6,
    ELookAtTargetType_MAX = 7,
};

enum class ELootBoxType {
    Default = 0,
    Small = 1,
    Big = 2,
    ELootBoxType_MAX = 3,
};

enum class ERemappingFinishedStates {
    Fail_UnauthorizeKeyPressed = 0,
    Fail_ExpectKeyboardMouseKey = 1,
    Fail_ExpectedControllerKey = 2,
    Count = 3,
    Success = 4,
    Remove = 5,
    Cancelled = 6,
    None = 7,
    ERemappingFinishedStates_MAX = 8,
};

enum class EMCDominationGaugeAsFlag {
    None = 0,
    Negative = 1,
    Neutral = 2,
    Positive = 4,
    PositivePlus = 8,
    EMCDominationGaugeAsFlag_MAX = 9,
};

enum class EIconStyle {
    Small = 0,
    Medium = 1,
    Count = 2,
    EIconStyle_MAX = 3,
};

enum class EMeshBodyParts {
    Head = 0,
    UpperArms = 1,
    LowerArms = 2,
    Hands = 3,
    Body = 4,
    Legs = 5,
    Feet = 6,
    Neck = 7,
    Count = 8,
    EMeshBodyParts_MAX = 9,
};

enum class EMoveTransitionType {
    StopV1 = 0,
    StopV1_E = 1,
    StopV1_S = 2,
    StopV1_W = 3,
    StopV2 = 4,
    StopV2_E = 5,
    StopV2_S = 6,
    StopV2_W = 7,
    StopV3 = 8,
    StartV1 = 9,
    StartV1_NE = 10,
    StartV1_NS = 11,
    StartV1_NW = 12,
    StartV1_EN = 13,
    StartV1_EE = 14,
    StartV1_ES = 15,
    StartV1_EW = 16,
    StartV1_SN = 17,
    StartV1_SE = 18,
    StartV1_SS = 19,
    StartV1_SW = 20,
    StartV1_WN = 21,
    StartV1_WE = 22,
    StartV1_WS = 23,
    StartV1_WW = 24,
    StartV2 = 25,
    StartV2_NE = 26,
    StartV2_NS = 27,
    StartV2_NW = 28,
    StartV2_EN = 29,
    StartV2_EE = 30,
    StartV2_ES = 31,
    StartV2_EW = 32,
    StartV2_SN = 33,
    StartV2_SE = 34,
    StartV2_SS = 35,
    StartV2_SW = 36,
    StartV2_WN = 37,
    StartV2_WE = 38,
    StartV2_WS = 39,
    StartV2_WW = 40,
    StartV3 = 41,
    StartV1_90L = 42,
    StartV1_180L = 43,
    StartV1_90R = 44,
    StartV1_180R = 45,
    StartV2_90L = 46,
    StartV2_180L = 47,
    StartV2_90R = 48,
    StartV2_180R = 49,
    StartV3_90L = 50,
    StartV3_180L = 51,
    StartV3_90R = 52,
    StartV3_180R = 53,
    UTurnV1_R = 54,
    UTurnV1_RBis = 55,
    UTurnV1_L = 56,
    UTurnV1_LBis = 57,
    UTurnV2_R = 58,
    UTurnV2_RBis = 59,
    UTurnV2_L = 60,
    UTurnV2_LBis = 61,
    UTurnV3_R = 62,
    UTurnV3_RBis = 63,
    UTurnV3_L = 64,
    UTurnV3_LBis = 65,
    V1ToV2 = 66,
    V1ToV3 = 67,
    V2ToV1 = 68,
    V2ToV3 = 69,
    V3ToV1 = 70,
    V3ToV2 = 71,
    MediumLanding = 72,
    OnPlaceMediumLanding = 73,
    NorthSouthV1 = 74,
    EastWestV1 = 75,
    SouthNorthV1 = 76,
    WestEastV1 = 77,
    NorthSouthV2 = 78,
    EastWestV2 = 79,
    SouthNorthV2 = 80,
    WestEastV2 = 81,
    InPlace_90L = 82,
    InPlace_180L = 83,
    InPlace_90R = 84,
    InPlace_180R = 85,
    Count = 86,
    None = 87,
    EMoveTransitionType_MAX = 88,
};

enum class ERagingBullPhase {
    Entry = 0,
    Loop = 1,
    Exit = 2,
    Count = 3,
    ERagingBullPhase_MAX = 4,
};

enum class EButtonNotificationType {
    NewTrial_1V1 = 0,
    NewTrial_3V3 = 1,
    NewSparePoints = 2,
    NewAttacks = 3,
    NewInventoryItems = 4,
    NewEmote = 5,
    NewIntro1v1 = 6,
    NewTrial_PvE = 7,
    EButtonNotificationType_MAX = 8,
};

enum class EOpenedStatus {
    Open = 0,
    Close = 1,
    EOpenedStatus_MAX = 2,
};

enum class EOptionsMenuTypes {
    CameraX = 0,
    CameraY = 1,
    Count = 2,
    None = 3,
    EOptionsMenuTypes_MAX = 4,
};

enum class EOrderAccessMode {
    RunningOnly = 0,
    PendingOnly = 1,
    RunningOrPending = 2,
    RunningOrPendingNoCancelPending = 3,
    Old = 4,
    All = 5,
    PendingOrRunning = 6,
    EOrderAccessMode_MAX = 7,
};

enum class EOrderCommandType {
    Play = 0,
    Cancel = 1,
    CancelAll = 2,
    Count = 3,
    None = 4,
    EOrderCommandType_MAX = 5,
};

enum class EOrderEvent {
    Starting = 0,
    Started = 1,
    Ending = 2,
    Ended = 3,
    EOrderEvent_MAX = 4,
};

enum class EOrderServiceFreezeFrameHandling {
    Freeze = 0,
    IgnoreFreezeFrame = 1,
    TickOnceOnStart = 2,
    EOrderServiceFreezeFrameHandling_MAX = 3,
};

enum class ERagdollMeshOrientation {
    FaceUp = 0,
    FaceDown = 1,
    FaceFront = 2,
    FaceBack = 3,
    ERagdollMeshOrientation_MAX = 4,
};

enum class EOrderServiceDeactivationMethod {
    None = 0,
    CleanStop = 1,
    Interruption = 2,
    EOrderServiceDeactivationMethod_MAX = 3,
};

enum class EOrderServiceConditionUpdateFrequency {
    OncePerOrder = 0,
    OnDemand = 1,
    EOrderServiceConditionUpdateFrequency_MAX = 2,
};

enum class EOrderServiceState {
    None = 0,
    Running = 1,
    Pending = 2,
    Finished = 4,
    All = 7,
    EOrderServiceState_MAX = 8,
};

enum class EOrderSubType {
    None = 0,
    Parallelizable = 1,
    BoundToAnimState = 2,
    EOrderSubType_MAX = 3,
};

enum class EParryHeight {
    High = 0,
    Low = 1,
    EParryHeight_MAX = 2,
};

enum class EParrySide {
    Left = 0,
    Right = 1,
    Count = 2,
    None = 3,
    EParrySide_MAX = 4,
};

enum class EParryDirection {
    Front = 0,
    Back = 1,
    EParryDirection_MAX = 2,
};

enum class EPatrolType {
    Loop = 0,
    PingPong = 1,
    Once = 2,
    EPatrolType_MAX = 3,
};

enum class EWidgetPlatform {
    Normal = 0,
    SmallScreen = 1,
    EWidgetPlatform_MAX = 2,
};

enum class EIKLimbTypes {
    LeftArm = 0,
    RightArm = 1,
    LeftLeg = 2,
    RightLeg = 3,
    Head = 4,
    Count = 5,
    EIKLimbTypes_MAX = 6,
};

enum class EPlayerInputConditionTestMethod {
    IsBestActionAvailable = 0,
    InputVectorValueComparedToActorForward = 1,
    IsActionActive = 2,
    EPlayerInputConditionTestMethod_MAX = 3,
};

enum class EScoringActionType {
    Attack = 0,
    Defense = 1,
    Kill = 2,
    Taunt = 3,
    None = 4,
    EScoringActionType_MAX = 5,
};

enum class EScoringKillType {
    Standard = 0,
    EnvironmentalFallFromPushed = 1,
    EnvironmentalWallSplat = 2,
    None = 3,
    EScoringKillType_MAX = 4,
};

enum class EThrowObjectActionType {
    ObjectPickedUp = 0,
    ObjectOnGround = 1,
    EThrowObjectActionType_MAX = 2,
};

enum class EOrientationApplyMethod {
    CharacterAndMovement = 0,
    CharacterOnly = 1,
    EOrientationApplyMethod_MAX = 2,
};

enum class ERedirectToTargetOrigin {
    Root = 0,
    AnimCenter = 1,
    ERedirectToTargetOrigin_MAX = 2,
};

enum class EReferential {
    Absolute = 0,
    Relative = 1,
    EReferential_MAX = 2,
};

enum class EScreenLocation {
    TopLeft = 0,
    TopRight = 1,
    BottomLeft = 2,
    BottomRight = 3,
    EScreenLocation_MAX = 4,
};

enum class EReplayKeyPresetOverride {
    None = 0,
    Blend = 1,
    CameraMode = 2,
    Fading = 4,
    EReplayKeyPresetOverride_MAX = 5,
};

enum class ETimelineStateAction {
    None = 0,
    Undo = 1,
    Redo = 2,
    ETimelineStateAction_MAX = 3,
};

enum class EReplayTimelineControlType {
    Time = 0,
    KeyPlacement = 1,
    Count = 2,
    Invalid = 3,
    EReplayTimelineControlType_MAX = 4,
};

enum class EReplayOpenState {
    Preview = 0,
    Edit = 1,
    EReplayOpenState_MAX = 2,
};

enum class EReplayTransitionElement {
    TimeDilation = 0,
    CurrentTransition = 1,
    EReplayTransitionElement_MAX = 2,
};

enum class EReplayTimelineDebugType {
    RealCutKeyPosition = 0,
    Count = 1,
    Invalid = 2,
    EReplayTimelineDebugType_MAX = 3,
};

enum class EResourcesTypes {
    Money = 0,
    Keys = 1,
    Count = 2,
    None = 3,
    EResourcesTypes_MAX = 4,
};

enum class ERotationType {
    Horizontal = 0,
    Vertical = 1,
    ERotationType_MAX = 2,
};

enum class ESaveBone {
    Attack1_LeftLeg = 0,
    Attack1_RightLeg = 1,
    Attack2_LeftLeg = 2,
    Attack2_RightLeg = 3,
    LookAt_Head = 4,
    LockMove_foot_l = 5,
    LockMove_foot_r = 6,
    LockMove_Spine_01 = 7,
    LookAt_Spine_01 = 8,
    LookAt_Spine_02 = 9,
    LookAt_Spine_03 = 10,
    LookAt_Root = 11,
    UpperBody_Spine_01 = 12,
    UpperBody_Spine_03 = 13,
    UpperBody_Spine_02 = 14,
    Master_Pelvis = 15,
    UpperBody_Pelvis = 16,
    Master_Foot_L = 17,
    Master_Foot_R = 18,
    LeanSpine_1 = 19,
    LeanSpine_2 = 20,
    LeanSpine_3 = 21,
    Landing_Foot_L = 22,
    Landing_Foot_R = 23,
    Custom_1 = 24,
    Custom_2 = 25,
    Custom_3 = 26,
    Custom_4 = 27,
    Custom_5 = 28,
    Custom_6 = 29,
    Custom_7 = 30,
    Custom_8 = 31,
    Custom_9 = 32,
    Custom_10 = 33,
    Custom_11 = 34,
    Custom_12 = 35,
    Custom_13 = 36,
    Custom_14 = 37,
    Custom_15 = 38,
    Count = 39,
    ESaveBone_MAX = 40,
};

enum class SCDialogIconsEnum {
    None = 0,
    Agressive = 1,
    SCDialogIconsEnum_MAX = 2,
};

enum class EUpdateTargetCondition {
    Alway = 0,
    WhenTargetConditionFail = 1,
    EUpdateTargetCondition_MAX = 2,
};

enum class EInputValidationConditions {
    None = 0,
    Ability = 1,
    AvailabilityLayers = 2,
    EInputValidationConditions_MAX = 3,
};

enum class EUserDefinedEnums {
    HitContexts = 0,
    EnvironmentalImpact = 1,
    AIConditionResults = 2,
    IKProfile = 3,
    WidgetPool = 4,
    FocusPointsGain = 5,
    VariableWeight = 6,
    SaveCategories = 7,
    OrderPreset = 8,
    MCComboStartNames = 9,
    AIAttackTicketNames = 10,
    BlueprintOrderID = 11,
    EnvironmentType = 12,
    VitalPointSlots = 13,
    TargetSlots = 14,
    RemappingActionModifier = 15,
    InputPresets = 16,
    DeathAnimTypes = 17,
    ComboConditionResult = 18,
    InputMappingProfile = 19,
    InputMappingDrawingStyle = 20,
    Count = 21,
    EUserDefinedEnums_MAX = 22,
};

enum class ESchoolItemType {
    Item1 = 0,
    Item2 = 1,
    Weapon = 2,
    Mask = 3,
    None = 4,
    ESchoolItemType_MAX = 5,
};

enum class EPlayerScreenSide {
    Left = 0,
    Right = 1,
    EPlayerScreenSide_MAX = 2,
};

enum class ESCSignificanceBuckets {
    None = 0,
    High = 1,
    Medium = 2,
    Low = 3,
    Lowest = 4,
    Count = 5,
    ESCSignificanceBuckets_MAX = 6,
};

enum class EHitShapeType {
    None = 0,
    Line = 1,
    Box = 2,
    Sphere = 3,
    Capsule = 4,
    Chain = 5,
    Count = 6,
    EHitShapeType_MAX = 7,
};

enum class ESoundMoodGameplayState {
    Neutral = 0,
    Tension = 1,
    Fight = 2,
    Melee = 3,
    None = 4,
    ESoundMoodGameplayState_MAX = 5,
};

enum class EAudioOutputType {
    Mono = 0,
    Speakers = 1,
    Headphones = 2,
    Five_One = 3,
    Count = 4,
    EAudioOutputType_MAX = 5,
};

enum class EStaminaImpactType {
    StopRecovery = 0,
    Consumption = 1,
    StartRecovery = 2,
    Count = 3,
    None = 4,
    EStaminaImpactType_MAX = 5,
};

enum class EStartupMenuState {
    IIS = 0,
    IIS_Pressed = 1,
    LoadingProfile = 2,
    ProfileLoaded = 3,
    ProfileWithNoSave = 4,
    SaveLoadSucceeded = 5,
    SaveLoadFailed = 6,
    EStartupMenuState_MAX = 7,
};

enum class EFocusPointGainCauseBinding {
    Avoid = 0,
    Deflect = 1,
    EFocusPointGainCauseBinding_MAX = 2,
};

enum class EStatsDisplayEnum {
    All = 0,
    FightingStyleOnly = 1,
    CharacterOnly = 2,
    Count = 3,
    None = 4,
    EStatsDisplayEnum_MAX = 5,
};

enum class ECollisionType {
    SameTarget = 0,
    NoTarget = 1,
    DifferentTargetSamePrio = 2,
    DifferentTargetDifferentPrio = 3,
    ECollisionType_MAX = 4,
};

enum class ETargetingPrio {
    DesignatedPrecise = 0,
    DesignatedRough = 1,
    CurrentAttacked = 2,
    Nearest = 3,
    NearestMenace = 4,
    LockMoveTarget = 5,
    Preview = 6,
    AllInRange = 7,
    Count = 8,
    ETargetingPrio_MAX = 9,
};

enum class EAIWuguanTicketEvaluation {
    IsOnScreen = 0,
    FlyDistance = 1,
    PathDistance = 2,
    TimeSinceLastAttack = 3,
    TimeToReachLocation = 4,
    LastTimeOnScreen = 5,
    PreferedCircle = 6,
    PositionPOIRelevance = 7,
    FlyDistance2DToEnemy = 8,
    Count = 9,
    None = 10,
    EAIWuguanTicketEvaluation_MAX = 11,
};

enum class EAIWuguanTicketFilter {
    HasAttackTicket = 0,
    HasDefinedCircle = 1,
    IsTicketOwned = 2,
    IsValidPosition = 3,
    AngleBetThreatAndPosition = 4,
    UnableToInteractWithWeapon = 5,
    WeaponIsUsed = 6,
    HasAnObjectInHands = 7,
    HasAnyRegisteredAction = 8,
    IsDirectOponentWithTicket = 9,
    IsTooFarFromWeapon = 10,
    LineOfSight = 11,
    PlayerInBetween = 12,
    AIShouldUpdateCombatPosition = 13,
    IsPositionInAnyPositionCircle = 14,
    PositionPOICooldown = 15,
    PositionPOICombatRoles = 16,
    PositionPOISpawners = 17,
    PositionPOIEnemyDist = 18,
    PositionPOI_AIBehavior = 19,
    AssignedToSanctuaryAsTicket = 20,
    AssignedToSanctuaryAsCandidate = 21,
    Count = 22,
    None = 23,
    EAIWuguanTicketFilter_MAX = 24,
};

enum class ETintEnum {
    Base = 0,
    Brighter = 1,
    Darker = 2,
    Warmer = 3,
    Colder = 4,
    ColorSwitch = 5,
    Count = 6,
    None = 7,
    ETintEnum_MAX = 8,
};

enum class ETransitionGlobalType {
    Start = 0,
    Stop = 1,
    UTurn = 2,
    Landing = 3,
    TurnInPlace = 4,
    Count = 5,
    None = 6,
    ETransitionGlobalType_MAX = 7,
};

enum class ETransitionRotationDirection {
    Left = 0,
    Right = 1,
    All = 2,
    Count = 3,
    None = 4,
    ETransitionRotationDirection_MAX = 5,
};

enum class ETransitionRotation {
    Degree_0 = 0,
    Degree_90 = 1,
    Degree_180 = 2,
    Count = 3,
    None = 4,
    ETransitionRotation_MAX = 5,
};

enum class ETraversalPhase {
    Entry = 0,
    Loop = 1,
    PreExit = 2,
    ExitLoop = 3,
    Landing = 4,
    Count = 5,
    None = 6,
    ETraversalPhase_MAX = 7,
};

enum class ECharacterTraversalType {
    Locomotion = 0,
    Attack = 1,
    Evasion = 2,
    Push = 3,
    ECharacterTraversalType_MAX = 4,
};

enum class ELinkWithExternalBehavior {
    ActiveIfExternalActive = 0,
    ActiveIfExternalInactive = 1,
    ELinkWithExternalBehavior_MAX = 2,
};

enum class ETrumpetSkewType {
    HorizontalVertical = 0,
    HorizontalVerticalDiagonals = 1,
    Diagonals = 2,
    ETrumpetSkewType_MAX = 3,
};

enum class EInputDataTutorialDisplayConstraints {
    KeyboardMouseOnly = 0,
    GamepadOnly = 1,
    Both = 2,
    Count = 3,
    None = 4,
    EInputDataTutorialDisplayConstraints_MAX = 5,
};

enum class ETutorialUnlockState {
    Locked = 0,
    Unlocked = 1,
    NewlyUnlocked = 2,
    Invalid = 3,
    Count = 4,
    None = 5,
    ETutorialUnlockState_MAX = 6,
};

enum class EIntersectDirection {
    Top = 0,
    Bottom = 1,
    Left = 2,
    Right = 3,
    Count = 4,
    None = 5,
    EIntersectDirection_MAX = 6,
};

enum class EVW_MasterStates {
    Idle = 0,
    FreeMove = 1,
    Locked = 2,
    Locked_V0 = 3,
    Locked_V1 = 4,
    Attack = 5,
    Dodge = 6,
    Meditation = 7,
    ChangeQuadrant = 8,
    Hitted = 9,
    Parried = 10,
    Special = 11,
    Death = 12,
    Hitted_1 = 13,
    Hitted_2 = 14,
    IdleRun = 15,
    FreeMove_V0 = 16,
    FMV0_FB = 17,
    FMV0_N = 18,
    FreeMove_V1 = 19,
    FMV1_UB = 20,
    FMV1_N = 21,
    FreeMove_V2 = 22,
    FMV2_UB = 23,
    FMV2_N = 24,
    Start = 25,
    Start_1 = 26,
    Start_1_UpperBody = 27,
    Start_1_Nothing = 28,
    Start_2 = 29,
    Start_2_UpperBody = 30,
    Cancel = 31,
    Spawn = 32,
    Start_2_Nothing = 33,
    Stop = 34,
    Stop_1 = 35,
    Stop_2 = 36,
    Stop_1_UpperBody = 37,
    Stop_1_Nothing = 38,
    Stop_2_UpperBody = 39,
    Stop_2_Nothing = 40,
    UTurn = 41,
    UTurn_1 = 42,
    UTurn_2 = 43,
    UTurn_1_Nothing = 44,
    UTurn_1_UpperBody = 45,
    UTurn_2_Nothing = 46,
    UTurn_2_UpperBody = 47,
    FMV3 = 48,
    FMV3_UB = 49,
    FMV3_N = 50,
    ItemUse = 51,
    Emote = 52,
    Walking = 53,
    Flying = 54,
    Falling = 55,
    Falling_N = 56,
    Falling_UB = 57,
    Landing = 58,
    Landing_N = 59,
    Landing_UB = 60,
    Takedown = 61,
    BeingTakendown = 62,
    FightingStateStun = 63,
    GenericPlayAnim1 = 64,
    GenericPlayAnim2 = 65,
    GenericPlayAnim3 = 66,
    GenericPlayAnim4 = 67,
    Traversal = 68,
    Count = 69,
    None = 70,
    EVW_MAX = 71,
};

enum class EWallJumpAttackPhase {
    Entry = 0,
    Attack = 1,
    Count = 2,
    None = 3,
    EWallJumpAttackPhase_MAX = 4,
};

enum class EWallDetectionStep {
    Inactive = 0,
    WaitingForDepthRaycast1 = 1,
    WaitingForDepthRaycast2 = 2,
    WaitingForLengthRaycast = 3,
    Done = 4,
    EWallDetectionStep_MAX = 5,
};

enum class EWeaponAction {
    Draw = 0,
    Sheathe = 1,
    PickUp = 2,
    Drop = 3,
    Count = 4,
    None = 5,
    EWeaponAction_MAX = 6,
};

enum class EWeaponEquipmentSlot {
    PrimaryWeapon = 0,
    Legs = 1,
    Arms = 2,
    Count = 3,
    None = 4,
    EWeaponEquipmentSlot_MAX = 5,
};

enum class EWeaponEvent {
    Draw = 0,
    Sheathe = 1,
    PickUp = 2,
    Drop = 3,
    Disarmed = 4,
    Broken = 5,
    Travel = 6,
    Count = 7,
    None = 8,
    EWeaponEvent_MAX = 9,
};

enum class EWeaponSlot {
    LeftHand = 0,
    RightHand = 1,
    LeftLeg = 2,
    RightLeg = 3,
    LeftArm = 4,
    RightArm = 5,
    Count = 6,
    None = 7,
    EWeaponSlot_MAX = 8,
};

enum class EWeaponStatus {
    Handled = 0,
    Falling = 1,
    Lying = 2,
    EWeaponStatus_MAX = 3,
};

enum class EPlayerCameraForcedSide {
    Left = 0,
    Right = 1,
    None = 2,
    EPlayerCameraForcedSide_MAX = 3,
};

enum class ELevelSequenceAIBehavior {
    AttackMainChar = 0,
    None = 1,
    ELevelSequenceAIBehavior_MAX = 2,
};

enum class EPathDistanceTest {
    PathDistance_DeathPosition = 0,
    PathDistance_Position = 1,
    PathDistance_Weapon = 2,
    PathDistance_CombatRole = 3,
    PathDistance_MAX = 4,
};

