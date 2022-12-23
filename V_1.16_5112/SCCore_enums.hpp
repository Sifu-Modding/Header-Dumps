enum class ESCBlendType {
    Linear = 0,
    Parabolic = 1,
    Cubic = 2,
    Exponential = 3,
    Cosine = 4,
    QuadraticIn = 5,
    QuadraticOut = 6,
    QuadraticInOut = 7,
    CubicIn = 8,
    CubicOut = 9,
    CubicInOut = 10,
    CubicAnim = 11,
    QuarticIn = 12,
    QuarticOut = 13,
    QuarticInOut = 14,
    QuinticIn = 15,
    QuinticOut = 16,
    QuinticInOut = 17,
    SinusoidalIn = 18,
    SinusoidalOut = 19,
    SinusoidalInOut = 20,
    ExponentialIn = 21,
    ExponentialOut = 22,
    ExponentialInOut = 23,
    Exponential2In = 24,
    Exponential2Out = 25,
    Exponential2InOut = 26,
    CircularIn = 27,
    CircularOut = 28,
    CircularInOut = 29,
    CustomCurve = 30,
    ESCBlendType_MAX = 31,
};

enum class ECinematicLayerTypes {
    CinematicLayer1 = 0,
    CinematicLayer2 = 1,
    Count = 2,
    ECinematicLayerTypes_MAX = 3,
};

enum class ECharacterGender {
    Man = 0,
    Woman = 1,
    Count = 2,
    None = 3,
    ECharacterGender_MAX = 4,
};

enum class ELoadResult {
    Valid = 0,
    Empty = 1,
    HashInvalid = 2,
    FileNotFound = 3,
    SaveNotCreated = 4,
    UnspecifiedError = 5,
    Count = 6,
    None = 7,
    ELoadResult_MAX = 8,
};

enum class ESaveResult {
    Valid = 0,
    Empty = 1,
    ErrorFileNotCreated = 2,
    ErrorFileCorrupted = 3,
    GenericError = 4,
    HashInvalid = 5,
    NoSaveSystem = 6,
    ObjectToSaveDataFromInvalid = 7,
    ESaveResult_MAX = 8,
};

enum class EBoneCoordinateSpace {
    Component = 0,
    Actor = 1,
    World = 2,
    BoneSpace = 3,
    WorldForceUpdate = 4,
    EBoneCoordinateSpace_MAX = 5,
};

enum class EDevTeamDefinedEnums {
    TechAdviser = 0,
    DataAdviser = 1,
    Count = 2,
    EDevTeamDefinedEnums_MAX = 3,
};

enum class ETransitionOptionsBehavior {
    UseAsStandardMapOption = 0,
    UseAsReturnCondition = 1,
    Count = 2,
    ETransitionOptionsBehavior_MAX = 3,
};

enum class EGameFlowTravelType {
    SeamlessWithPreload = 0,
    ClassicLoadMap = 1,
    None = 2,
    EGameFlowTravelType_MAX = 3,
};

enum class ELookAtApplyMode {
    Additive = 0,
    Procedural_Spine = 1,
    Procedural_Head = 2,
    None = 3,
    Default = 4,
    ELookAtApplyMode_MAX = 5,
};

enum class EMirrorAnimBehavior {
    Twins = 0,
    NoTwins = 1,
    TwinsWithSymmetry = 2,
    Count = 3,
    None = 4,
    EMirrorAnimBehavior_MAX = 5,
};

enum class EActivityType {
    Activity = 0,
    Task = 1,
    SubTask = 2,
    EActivityType_MAX = 3,
};

enum class EPlaneAxis {
    XY = 0,
    XZ = 1,
    YZ = 2,
    Count = 3,
    None = 4,
    EPlaneAxis_MAX = 5,
};

enum class ESaveValidationResult {
    Valid = 0,
    Empty = 1,
    ContainsNonAlphaNumeric = 2,
    AlreadyExist = 3,
    TooLong = 4,
    ESaveValidationResult_MAX = 5,
};

enum class EActivityPendingStateUpdate {
    Enabling = 0,
    Starting = 1,
    Ending = 2,
    Reset = 3,
    EActivityPendingStateUpdate_MAX = 4,
};

enum class EAIActionScheduleCondition {
    None = 0,
    Succeeded = 1,
    Failed = 2,
    EAIActionScheduleCondition_MAX = 3,
};

enum class EAIActionResult {
    Scheduled = 0,
    Succeeded = 1,
    Failed = 2,
    InProgress = 3,
    Created = 4,
    EAIActionResult_MAX = 5,
};

enum class EPoseAssetCurveChannel {
    LipSynch = 0,
    AnimNotify = 1,
    Default = 2,
    Count = 3,
    EPoseAssetCurveChannel_MAX = 4,
};

enum class DisplayLevel {
    NoLogging = 0,
    Fatal = 1,
    Error = 2,
    Warning = 3,
    Log = 4,
    Verbose = 5,
    VeryVerbose = 6,
    All = 6,
    NumVerbosity = 7,
    VerbosityMask = 15,
    SetColor = 64,
    BreakOnLog = 128,
    DisplayLevel_MAX = 129,
};

enum class ESCCardinalPoints {
    North = 0,
    East = 1,
    South = 2,
    West = 3,
    Count = 4,
    None = 5,
    ESCCardinalPoints_MAX = 6,
};

enum class EImposterSpawnTransformType {
    Actor = 0,
    Component = 1,
    EImposterSpawnTransformType_MAX = 2,
};

enum class ENullableCondition {
    Yes = 0,
    No = 1,
    Ignore = 2,
    ENullableCondition_MAX = 3,
};

enum class ESCDebugActorBoxType {
    BoudingBox = 0,
    BottomSquare = 1,
    ESCDebugActorBoxType_MAX = 2,
};

enum class EDynamicTextureMask_DrawShape {
    DS_Sphere = 0,
    DS_Capsule = 1,
    DS_TextureProjection_Standard = 2,
    DS_TextureProjection_Atlas = 3,
    DS_MAX = 4,
};

enum class EDynamicTextureMask_DrawType {
    DT_Additive = 0,
    DT_OpaqueColor = 1,
    DT_OpaqueAlpha = 2,
    DT_MAX = 3,
};

enum class EDynamicTextureMask_PositionBakingType {
    PBT_SimpleStaticMesh = 0,
    PBT_ComplexSkeletalMesh = 1,
    PBT_SimpleSkeletalMesh = 2,
    PBT_MAX = 3,
};

enum class ESCPopupType {
    None = 0,
    Generic = 1,
    InvalidSave = 2,
    SigninChanged = 3,
    ConnectionFailed = 4,
    PairingChanged = 5,
    NeedLicense = 6,
    ProgressWillNotBeSaved = 7,
    ControllerDisconnected = 8,
    SaveValidButBackupUsed = 9,
    Count = 10,
    ESCPopupType_MAX = 11,
};

enum class ESCErrorType {
    JoinInvitationError = 0,
    NetworkServiceUnavailable = 1,
    ConnectionError = 2,
    Success = 3,
    PlayerKicked = 4,
    Unknown = 5,
    Count = 6,
    ESCErrorType_MAX = 7,
};

enum class ESCMessageLogSeverity {
    Info = 0,
    Warning = 1,
    Error = 2,
    CriticalError = 3,
    ESCMessageLogSeverity_MAX = 4,
};

enum class ESCGameInstanceState {
    None = 0,
    PressStart = 1,
    MessageMenu = 2,
    Playing = 3,
    ESCGameInstanceState_MAX = 4,
};

enum class EProjectionComputeBehavior {
    Raw = 0,
    ClampToBorder = 1,
    ClampToBorderOnlyVertical = 2,
    EProjectionComputeBehavior_MAX = 3,
};

enum class ESequenceBindingType {
    CharacterOwnerPelvisLocation = 0,
    CharacterOwnerLocation = 1,
    ESequenceBindingType_MAX = 2,
};

enum class ESCSequenceBlendViewState {
    ToSequence = 0,
    Sequence = 1,
    ToPlayer = 2,
    None = 3,
    ESCSequenceBlendViewState_MAX = 4,
};

enum class ECinematicAnimBlendState {
    EaseIn = 0,
    Playing = 1,
    EaseOut = 2,
    EaseOutFinished = 3,
    None = 4,
    ECinematicAnimBlendState_MAX = 5,
};

enum class ESCLevelStreamingState {
    Loaded = 0,
    Visible = 1,
    Unloaded = 2,
    Count = 3,
    None = 4,
    ESCLevelStreamingState_MAX = 5,
};

enum class EEmotionTagType {
    TagStart = 0,
    TagEnd = 1,
    ShortTag = 2,
    None = 3,
    EEmotionTagType_MAX = 4,
};

enum class EPhoneme {
    V_A = 0,
    V_AH = 1,
    V_B = 2,
    V_C = 3,
    V_CH = 4,
    V_D = 5,
    V_EH = 6,
    V_F = 7,
    V_I = 8,
    V_K = 9,
    V_N = 10,
    V_OO = 11,
    V_OW = 12,
    V_R = 13,
    V_Other = 14,
    V_OtherVowel = 15,
    V_Pause = 16,
    V_Max = 17,
};

enum class ESCMathConditionValueType {
    Integer = 0,
    Float = 1,
    ESCMathConditionValueType_MAX = 2,
};

enum class ESCMathConditionExpression {
    And = 0,
    Or = 1,
    ESCMathConditionExpression_MAX = 2,
};

enum class ESCMathCondition {
    Lower = 0,
    LowerOrEqual = 1,
    Equal = 2,
    NotEqual = 3,
    GreaterOrEqual = 4,
    Greater = 5,
    ESCMathCondition_MAX = 6,
};

enum class EPhonemeDictionary {
    AA = 0,
    AE = 1,
    AH = 2,
    AO = 3,
    AW = 4,
    AY = 5,
    B = 6,
    CH = 7,
    D = 8,
    DH = 9,
    EH = 10,
    ER = 11,
    EY = 12,
    F = 13,
    G = 14,
    HH = 15,
    IH = 16,
    IY = 17,
    JH = 18,
    K = 19,
    L = 20,
    M = 21,
    N = 22,
    NG = 23,
    OW = 24,
    OY = 25,
    P = 26,
    R = 27,
    S = 28,
    SH = 29,
    T = 30,
    TH = 31,
    UH = 32,
    UW = 33,
    V = 34,
    W = 35,
    Y = 36,
    Z = 37,
    ZH = 38,
    SIL = 39,
    Count = 40,
    None = 41,
    EPhonemeDictionary_MAX = 42,
};

enum class ESCPlayerVolumeNoPhysicsState {
    Overlapping = 0,
    OverlappingThisVolume = 1,
    FullyInside = 2,
    FullyInsideThisVolume = 3,
    Count = 4,
    ESCPlayerVolumeNoPhysicsState_MAX = 5,
};

enum class ESCRotationWay {
    ClockWise = 0,
    CounterClockWise = 1,
    None = 2,
    ESCRotationWay_MAX = 3,
};

enum class ESCType {
    Float = 0,
    Vector = 1,
    Color = 2,
    Int = 3,
    Bool = 4,
    None = 5,
    ESCType_MAX = 6,
};

enum class ESimpleAxis {
    X = 0,
    Y = 1,
    Z = 2,
    Count = 3,
    None = 4,
    ESimpleAxis_MAX = 5,
};

