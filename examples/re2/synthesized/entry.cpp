// This is the entry of 48 fuzz drivers:
// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 23, 26, 2
// 7, 28, 29, 31, 32, 33, 34, 38, 39, 40, 41, 42, 43, 44, 47, 48, 49, 67, 68, 70, 7
// 3, 83, 84, 87, 88, 89
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>
#include <memory.h>

// Declarations of all fuzz drivers `LLVMFuzzerTestOneInput` functions
extern "C" int LLVMFuzzerTestOneInput_1(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_2(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_3(const uint8_t *Data, size_t Size);
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
extern "C" int LLVMFuzzerTestOneInput_20(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_23(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_26(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_27(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_28(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_29(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_31(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_32(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_33(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_34(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_38(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_39(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_40(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_41(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_42(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_43(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_44(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_47(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_48(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_49(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_67(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_68(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_70(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_73(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_83(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_84(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_87(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_88(const uint8_t *Data, size_t Size);
extern "C" int LLVMFuzzerTestOneInput_89(const uint8_t *Data, size_t Size);

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
    switch (driverIndex % 48) {
        case 0:
            return LLVMFuzzerTestOneInput_1(remainData, remainSize);
        case 1:
            return LLVMFuzzerTestOneInput_2(remainData, remainSize);
        case 2:
            return LLVMFuzzerTestOneInput_3(remainData, remainSize);
        case 3:
            return LLVMFuzzerTestOneInput_4(remainData, remainSize);
        case 4:
            return LLVMFuzzerTestOneInput_5(remainData, remainSize);
        case 5:
            return LLVMFuzzerTestOneInput_6(remainData, remainSize);
        case 6:
            return LLVMFuzzerTestOneInput_7(remainData, remainSize);
        case 7:
            return LLVMFuzzerTestOneInput_8(remainData, remainSize);
        case 8:
            return LLVMFuzzerTestOneInput_9(remainData, remainSize);
        case 9:
            return LLVMFuzzerTestOneInput_10(remainData, remainSize);
        case 10:
            return LLVMFuzzerTestOneInput_11(remainData, remainSize);
        case 11:
            return LLVMFuzzerTestOneInput_12(remainData, remainSize);
        case 12:
            return LLVMFuzzerTestOneInput_13(remainData, remainSize);
        case 13:
            return LLVMFuzzerTestOneInput_14(remainData, remainSize);
        case 14:
            return LLVMFuzzerTestOneInput_15(remainData, remainSize);
        case 15:
            return LLVMFuzzerTestOneInput_16(remainData, remainSize);
        case 16:
            return LLVMFuzzerTestOneInput_17(remainData, remainSize);
        case 17:
            return LLVMFuzzerTestOneInput_18(remainData, remainSize);
        case 18:
            return LLVMFuzzerTestOneInput_19(remainData, remainSize);
        case 19:
            return LLVMFuzzerTestOneInput_20(remainData, remainSize);
        case 20:
            return LLVMFuzzerTestOneInput_23(remainData, remainSize);
        case 21:
            return LLVMFuzzerTestOneInput_26(remainData, remainSize);
        case 22:
            return LLVMFuzzerTestOneInput_27(remainData, remainSize);
        case 23:
            return LLVMFuzzerTestOneInput_28(remainData, remainSize);
        case 24:
            return LLVMFuzzerTestOneInput_29(remainData, remainSize);
        case 25:
            return LLVMFuzzerTestOneInput_31(remainData, remainSize);
        case 26:
            return LLVMFuzzerTestOneInput_32(remainData, remainSize);
        case 27:
            return LLVMFuzzerTestOneInput_33(remainData, remainSize);
        case 28:
            return LLVMFuzzerTestOneInput_34(remainData, remainSize);
        case 29:
            return LLVMFuzzerTestOneInput_38(remainData, remainSize);
        case 30:
            return LLVMFuzzerTestOneInput_39(remainData, remainSize);
        case 31:
            return LLVMFuzzerTestOneInput_40(remainData, remainSize);
        case 32:
            return LLVMFuzzerTestOneInput_41(remainData, remainSize);
        case 33:
            return LLVMFuzzerTestOneInput_42(remainData, remainSize);
        case 34:
            return LLVMFuzzerTestOneInput_43(remainData, remainSize);
        case 35:
            return LLVMFuzzerTestOneInput_44(remainData, remainSize);
        case 36:
            return LLVMFuzzerTestOneInput_47(remainData, remainSize);
        case 37:
            return LLVMFuzzerTestOneInput_48(remainData, remainSize);
        case 38:
            return LLVMFuzzerTestOneInput_49(remainData, remainSize);
        case 39:
            return LLVMFuzzerTestOneInput_67(remainData, remainSize);
        case 40:
            return LLVMFuzzerTestOneInput_68(remainData, remainSize);
        case 41:
            return LLVMFuzzerTestOneInput_70(remainData, remainSize);
        case 42:
            return LLVMFuzzerTestOneInput_73(remainData, remainSize);
        case 43:
            return LLVMFuzzerTestOneInput_83(remainData, remainSize);
        case 44:
            return LLVMFuzzerTestOneInput_84(remainData, remainSize);
        case 45:
            return LLVMFuzzerTestOneInput_87(remainData, remainSize);
        case 46:
            return LLVMFuzzerTestOneInput_88(remainData, remainSize);
        case 47:
            return LLVMFuzzerTestOneInput_89(remainData, remainSize);
        default:
            return 0;
    }
    return 0;
}
