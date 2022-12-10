enum class EDedicatedServersDistributionMode {
    DevelopersOnly = 0,
    DevelopersAndPlayers = 1,
    PlayersOnly = 2,
    EDedicatedServersDistributionMode_MAX = 3,
};

enum class EPartyJoinabilityConstraint {
    AllowPlayersInMultipleParties = 0,
    IgnoreInvitesIfAlreadyInParty = 1,
    EPartyJoinabilityConstraint_MAX = 2,
};

enum class EEOSNetworkingStack {
    Default = 0,
    Legacy = 1,
    Full = 2,
    EEOSNetworkingStack_MAX = 3,
};

enum class EEOSApiVersion {
    v2021_05_31 = 0,
    v2021_01_22 = 1,
    v2020_12_09 = 2,
    v2020_12_02 = 3,
    v2020_12_01 = 4,
    EEOSApiVersion_MAX = 5,
};

enum class EPresenceAdvertisementType {
    None = 0,
    Party = 1,
    Session = 2,
    EPresenceAdvertisementType_MAX = 3,
};

enum class EEOSUserInterface_SignInOrCreateAccount_Choice {
    SignIn = 0,
    CreateAccount = 1,
    EEOSUserInterface_SignInOrCreateAccount_MAX = 2,
};

enum class EEOSUserInterface_SwitchToCrossPlatformAccount_Choice {
    SwitchToThisAccount = 0,
    LinkADifferentAccount = 1,
    CancelLinking = 2,
    EEOSUserInterface_SwitchToCrossPlatformAccount_MAX = 3,
};

