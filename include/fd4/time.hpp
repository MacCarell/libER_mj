/**
 * @file time.hpp
 * @brief Namespace FD4 FD4Time
 * 
 * Copyright (c) libER ELDEN RING API library 2024
 * 
 */
#pragma once

namespace from {
namespace FD4 {
/**
 * @brief A basic floating point time class.
 * 
 * Used for relative and absolute time, timers, delta time etc.
 * 
 */
struct FD4Time {
    virtual ~FD4Time() noexcept;

    /**
     * @brief The time.
     * 
     */
    float time = 0.0f;
};
} // namespace FD4
} // namespace from
