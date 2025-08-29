// This is the entry of 58 fuzz drivers:
// 1, 2, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 21, 23, 25, 26, 
// 27, 28, 29, 30, 32, 33, 35, 38, 40, 42, 44, 47, 51, 52, 53, 54, 56, 58, 60, 61, 
// 63, 64, 65, 66, 72, 73, 74, 75, 76, 77, 78, 79, 80, 82, 83, 85
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>
#include <memory.h>

// Declarations of all fuzz drivers `LLVMFuzzerTestOneInput` functions
extern "C" int LLVMFuzzerTestOneInput_1(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_2(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_4(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_5(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_6(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_7(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_8(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_9(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_10(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_11(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_12(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_13(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_14(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_15(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_16(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_17(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_18(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_19(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_21(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_23(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_25(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_26(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_27(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_28(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_29(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_30(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_32(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_33(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_35(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_38(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_40(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_42(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_44(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_47(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_51(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_52(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_53(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_54(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_56(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_58(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_60(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_61(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_63(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_64(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_65(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_66(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_72(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_73(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_74(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_75(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_76(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_77(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_78(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_79(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_80(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_82(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_83(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_85(const uint8_t *Data, size_t Size);

// Entry function
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, size_t Size) {
    // Driver selector
    if (Size < 1) {
        return 0;
    }
    const uint8_t *selector = Data;
    unsigned int driverIndex = 0;
    memcpy(&driverIndex, selector, 1);

    // Remain data and size
    const uint8_t *remainData = Data + 1;
    size_t remainSize = Size - 1;
    if (remainSize == 0) {
        return 0;
    }

    // Select driver
    switch (driverIndex % 58) {
        case 0:
            return LLVMFuzzerTestOneInput_1(remainData, remainSize);
        case 1:
            return LLVMFuzzerTestOneInput_2(remainData, remainSize);
        case 2:
            return LLVMFuzzerTestOneInput_4(remainData, remainSize);
        case 3:
            return LLVMFuzzerTestOneInput_5(remainData, remainSize);
        case 4:
            return LLVMFuzzerTestOneInput_6(remainData, remainSize);
        case 5:
            return LLVMFuzzerTestOneInput_7(remainData, remainSize);
        case 6:
            return LLVMFuzzerTestOneInput_8(remainData, remainSize);
        case 7:
            return LLVMFuzzerTestOneInput_9(remainData, remainSize);
        case 8:
            return LLVMFuzzerTestOneInput_10(remainData, remainSize);
        case 9:
            return LLVMFuzzerTestOneInput_11(remainData, remainSize);
        case 10:
            return LLVMFuzzerTestOneInput_12(remainData, remainSize);
        case 11:
            return LLVMFuzzerTestOneInput_13(remainData, remainSize);
        case 12:
            return LLVMFuzzerTestOneInput_14(remainData, remainSize);
        case 13:
            return LLVMFuzzerTestOneInput_15(remainData, remainSize);
        case 14:
            return LLVMFuzzerTestOneInput_16(remainData, remainSize);
        case 15:
            return LLVMFuzzerTestOneInput_17(remainData, remainSize);
        case 16:
            return LLVMFuzzerTestOneInput_18(remainData, remainSize);
        case 17:
            return LLVMFuzzerTestOneInput_19(remainData, remainSize);
        case 18:
            return LLVMFuzzerTestOneInput_21(remainData, remainSize);
        case 19:
            return LLVMFuzzerTestOneInput_23(remainData, remainSize);
        case 20:
            return LLVMFuzzerTestOneInput_25(remainData, remainSize);
        case 21:
            return LLVMFuzzerTestOneInput_26(remainData, remainSize);
        case 22:
            return LLVMFuzzerTestOneInput_27(remainData, remainSize);
        case 23:
            return LLVMFuzzerTestOneInput_28(remainData, remainSize);
        case 24:
            return LLVMFuzzerTestOneInput_29(remainData, remainSize);
        case 25:
            return LLVMFuzzerTestOneInput_30(remainData, remainSize);
        case 26:
            return LLVMFuzzerTestOneInput_32(remainData, remainSize);
        case 27:
            return LLVMFuzzerTestOneInput_33(remainData, remainSize);
        case 28:
            return LLVMFuzzerTestOneInput_35(remainData, remainSize);
        case 29:
            return LLVMFuzzerTestOneInput_38(remainData, remainSize);
        case 30:
            return LLVMFuzzerTestOneInput_40(remainData, remainSize);
        case 31:
            return LLVMFuzzerTestOneInput_42(remainData, remainSize);
        case 32:
            return LLVMFuzzerTestOneInput_44(remainData, remainSize);
        case 33:
            return LLVMFuzzerTestOneInput_47(remainData, remainSize);
        case 34:
            return LLVMFuzzerTestOneInput_51(remainData, remainSize);
        case 35:
            return LLVMFuzzerTestOneInput_52(remainData, remainSize);
        case 36:
            return LLVMFuzzerTestOneInput_53(remainData, remainSize);
        case 37:
            return LLVMFuzzerTestOneInput_54(remainData, remainSize);
        case 38:
            return LLVMFuzzerTestOneInput_56(remainData, remainSize);
        case 39:
            return LLVMFuzzerTestOneInput_58(remainData, remainSize);
        case 40:
            return LLVMFuzzerTestOneInput_60(remainData, remainSize);
        case 41:
            return LLVMFuzzerTestOneInput_61(remainData, remainSize);
        case 42:
            return LLVMFuzzerTestOneInput_63(remainData, remainSize);
        case 43:
            return LLVMFuzzerTestOneInput_64(remainData, remainSize);
        case 44:
            return LLVMFuzzerTestOneInput_65(remainData, remainSize);
        case 45:
            return LLVMFuzzerTestOneInput_66(remainData, remainSize);
        case 46:
            return LLVMFuzzerTestOneInput_72(remainData, remainSize);
        case 47:
            return LLVMFuzzerTestOneInput_73(remainData, remainSize);
        case 48:
            return LLVMFuzzerTestOneInput_74(remainData, remainSize);
        case 49:
            return LLVMFuzzerTestOneInput_75(remainData, remainSize);
        case 50:
            return LLVMFuzzerTestOneInput_76(remainData, remainSize);
        case 51:
            return LLVMFuzzerTestOneInput_77(remainData, remainSize);
        case 52:
            return LLVMFuzzerTestOneInput_78(remainData, remainSize);
        case 53:
            return LLVMFuzzerTestOneInput_79(remainData, remainSize);
        case 54:
            return LLVMFuzzerTestOneInput_80(remainData, remainSize);
        case 55:
            return LLVMFuzzerTestOneInput_82(remainData, remainSize);
        case 56:
            return LLVMFuzzerTestOneInput_83(remainData, remainSize);
        case 57:
            return LLVMFuzzerTestOneInput_85(remainData, remainSize);
        default:
            return 0;
    }
    return 0;
}
