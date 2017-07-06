#include <iostream>
#include <limits>

#include "engine.h"
#include "TFT_ARCH_instr_exec_requirement.h"
#include "TURING_MACHINE.h"


int main(void)
{
    constexpr std::size_t MEMORY_SIZE = 1024 * 1024 * 128; // 128 MiB
    TURING_MACHINE::Engine<TFT_ARCH::InstrExecRequirement> engine(2, 8, 3, MEMORY_SIZE);

    for (TURING_MACHINE::byte_t i = 0; i < 100; i++)
    {
        engine.writeByte(i, i);
    }

    std::cout << "MEM[20]=" << (unsigned int)engine.readByte(20) << std::endl;
    std::cout << "MEM[25]=" << (unsigned int)engine.readByte(25) << std::endl;


    // Pause the console
    std::cout << "Press ENTER to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return EXIT_SUCCESS;
}
