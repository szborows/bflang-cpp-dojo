#pragma once
#include <vector>

struct Memory final {
    using MemoryCell = unsigned char;

    MemoryCell get() const {
        return {}; // TODO
    }

    void set(MemoryCell const value) {
        // TODO
    }

    void increment() {
        // TODO
    }

    void decrement() {
        // TODO
    }

    void moveLeft() {
        // TODO
    }

    void moveRight() {
        // TODO
    }

    Memory()
        : memory_(2000, 0)
        , it_(memory_.begin() + (memory_.size() / 2)) {
    }

    Memory(Memory const&) = delete;
    Memory& operator=(Memory const&) = delete;

private:
    using MemoryCells = std::vector<MemoryCell>;
    MemoryCells memory_;
    MemoryCells::iterator it_;
};
