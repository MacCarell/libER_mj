#pragma once

#include <detail/liber_preprocessor.h>
#include <dantelion2/reflection.h>
#include <detail/literal_string.h>

// Implement DLRuntimeClass reflection for CLASSNAME
// The class must inherit from FD4ComponentBase
#define FD4_RUNTIME_CLASS(CLASSNAME) from::DLRF::DLRuntimeClass* get_runtime_class() noexcept override { \
    return &from::DLRF::DLRuntimeClassTemplate<CLASSNAME, LIBER_STRINGIFY(CLASSNAME)>::dl_runtime_class; \
}

namespace from {
    namespace FD4 {
        // A class that automatically instantiates reflective
        // DLRF::DLRuntimeClass instances for classes that derive from it.
        // Commonly used in the ELDEN RING codebase
        class FD4ComponentBase {
        public:
            virtual DLRF::DLRuntimeClass* get_runtime_class() noexcept {
                return &DLRF::DLRuntimeClassTemplate<FD4ComponentBase, LIBER_STRINGIFY(FD4ComponentBase)>::dl_runtime_class;
            }

            virtual ~FD4ComponentBase() = default;
        };
    }
}