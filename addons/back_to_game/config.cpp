#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "tfd_main"
        };
        author = QAUTHOR;
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"

#include "teleportDialog.hpp"
