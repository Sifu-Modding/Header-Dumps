enum class EBuildTrigger {
    OnEdit = 0,
    Manual = 1,
    EBuildTrigger_MAX = 2,
};

enum class ESVOGenerationStrategy {
    UseBaked = 0,
    GenerateOnBeginPlay = 1,
    ESVOGenerationStrategy_MAX = 2,
};

enum class ESVONPathCostType {
    MANHATTAN = 0,
    EUCLIDEAN = 1,
    ESVONPathCostType_MAX = 2,
};

namespace ESVONPathfindingRequestResult {
    enum Type {
        Failed = 0,
        ReadyToPath = 1,
        AlreadyAtGoal = 2,
        Deferred = 3,
        Success = 4,
        ESVONPathfindingRequestResult_MAX = 5,
    };
}

