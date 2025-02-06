/*
 * Copyright (c) 2024-2025 The mlkem-native project authors
 * SPDX-License-Identifier: Apache-2.0
 */

/*
 * WARNING: This file is auto-generated from scripts/autogen
 *          Do not modify it directly.
 */

#include "../../../common.h"

#if defined(MLK_ARITH_BACKEND_AARCH64_OPT) && \
    !defined(MLK_MULTILEVEL_BUILD_NO_SHARED)

#include <stdint.h>
#include "arith_native_aarch64.h"

/*
 * Table of zeta values used in the AArch64 forward NTT
 * See autogen for details.
 */
MLK_ALIGN const int16_t aarch64_ntt_zetas_layer01234[] = {
    -1600, -15749, -749,  -7373,  -40,   -394,   -687, -6762, 630,  6201,
    -1432, -14095, 848,   8347,   0,     0,      1062, 10453, 296,  2914,
    -882,  -8682,  0,     0,      -1410, -13879, 1339, 13180, 1476, 14529,
    0,     0,      193,   1900,   -283,  -2786,  56,   551,   0,    0,
    797,   7845,   -1089, -10719, 1333,  13121,  0,    0,     -543, -5345,
    1426,  14036,  -1235, -12156, 0,     0,      -69,  -679,  535,  5266,
    -447,  -4400,  0,     0,      569,   5601,   -936, -9213, -450, -4429,
    0,     0,      -1583, -15582, -1355, -13338, 821,  8081,  0,    0,
};

MLK_ALIGN const int16_t aarch64_ntt_zetas_layer56[] = {
    289,    289,    331,    331,    -76,    -76,    -1573,  -1573,  2845,
    2845,   3258,   3258,   -748,   -748,   -15483, -15483, 17,     17,
    583,    583,    1637,   1637,   -1041,  -1041,  167,    167,    5739,
    5739,   16113,  16113,  -10247, -10247, -568,   -568,   -680,   -680,
    723,    723,    1100,   1100,   -5591,  -5591,  -6693,  -6693,  7117,
    7117,   10828,  10828,  1197,   1197,   -1025,  -1025,  -1052,  -1052,
    -1274,  -1274,  11782,  11782,  -10089, -10089, -10355, -10355, -12540,
    -12540, 1409,   1409,   -48,    -48,    756,    756,    -314,   -314,
    13869,  13869,  -472,   -472,   7441,   7441,   -3091,  -3091,  -667,
    -667,   233,    233,    -1173,  -1173,  -279,   -279,   -6565,  -6565,
    2293,   2293,   -11546, -11546, -2746,  -2746,  650,    650,    -1352,
    -1352,  -816,   -816,   632,    632,    6398,   6398,   -13308, -13308,
    -8032,  -8032,  6221,   6221,   -1626,  -1626,  -540,   -540,   -1482,
    -1482,  1461,   1461,   -16005, -16005, -5315,  -5315,  -14588, -14588,
    14381,  14381,  1651,   1651,   -1540,  -1540,  952,    952,    -642,
    -642,   16251,  16251,  -15159, -15159, 9371,   9371,   -6319,  -6319,
    -464,   -464,   33,     33,     1320,   1320,   -1414,  -1414,  -4567,
    -4567,  325,    325,    12993,  12993,  -13918, -13918, 939,    939,
    -892,   -892,   733,    733,    268,    268,    9243,   9243,   -8780,
    -8780,  7215,   7215,   2638,   2638,   -1021,  -1021,  -941,   -941,
    -992,   -992,   641,    641,    -10050, -10050, -9262,  -9262,  -9764,
    -9764,  6309,   6309,   -1010,  -1010,  1435,   1435,   807,    807,
    452,    452,    -9942,  -9942,  14125,  14125,  7943,   7943,   4449,
    4449,   1584,   1584,   -1292,  -1292,  375,    375,    -1239,  -1239,
    15592,  15592,  -12717, -12717, 3691,   3691,   -12196, -12196, -1031,
    -1031,  -109,   -109,   -780,   -780,   1645,   1645,   -10148, -10148,
    -1073,  -1073,  -7678,  -7678,  16192,  16192,  1438,   1438,   -461,
    -461,   1534,   1534,   -927,   -927,   14155,  14155,  -4538,  -4538,
    15099,  15099,  -9125,  -9125,  1063,   1063,   -556,   -556,   -1230,
    -1230,  -863,   -863,   10463,  10463,  -5473,  -5473,  -12107, -12107,
    -8495,  -8495,  319,    319,    757,    757,    561,    561,    -735,
    -735,   3140,   3140,   7451,   7451,   5522,   5522,   -7235,  -7235,
    -682,   -682,   -712,   -712,   1481,   1481,   648,    648,    -6713,
    -6713,  -7008,  -7008,  14578,  14578,  6378,   6378,   -525,   -525,
    403,    403,    1143,   1143,   -554,   -554,   -5168,  -5168,  3967,
    3967,   11251,  11251,  -5453,  -5453,  1092,   1092,   1026,   1026,
    -1179,  -1179,  886,    886,    10749,  10749,  10099,  10099,  -11605,
    -11605, 8721,   8721,   -855,   -855,   -219,   -219,   1227,   1227,
    910,    910,    -8416,  -8416,  -2156,  -2156,  12078,  12078,  8957,
    8957,   -1607,  -1607,  -1455,  -1455,  -1219,  -1219,  885,    885,
    -15818, -15818, -14322, -14322, -11999, -11999, 8711,   8711,   1212,
    1212,   1029,   1029,   -394,   -394,   -1175,  -1175,  11930,  11930,
    10129,  10129,  -3878,  -3878,  -11566, -11566,
};

MLK_ALIGN const int16_t aarch64_invntt_zetas_layer01234[] = {
    1583,  15582,  -821,  -8081,  1355,  13338,  0,     0,      -569,  -5601,
    450,   4429,   936,   9213,   0,     0,      69,    679,    447,   4400,
    -535,  -5266,  0,     0,      543,   5345,   1235,  12156,  -1426, -14036,
    0,     0,      -797,  -7845,  -1333, -13121, 1089,  10719,  0,     0,
    -193,  -1900,  -56,   -551,   283,   2786,   0,     0,      1410,  13879,
    -1476, -14529, -1339, -13180, 0,     0,      -1062, -10453, 882,   8682,
    -296,  -2914,  0,     0,      1600,  15749,  40,    394,    749,   7373,
    -848,  -8347,  1432,  14095,  -630,  -6201,  687,   6762,   0,     0,
};

MLK_ALIGN const int16_t aarch64_invntt_zetas_layer56[] = {
    -910,   -910,   -1227,  -1227,  219,    219,    855,    855,    -8957,
    -8957,  -12078, -12078, 2156,   2156,   8416,   8416,   1175,   1175,
    394,    394,    -1029,  -1029,  -1212,  -1212,  11566,  11566,  3878,
    3878,   -10129, -10129, -11930, -11930, -885,   -885,   1219,   1219,
    1455,   1455,   1607,   1607,   -8711,  -8711,  11999,  11999,  14322,
    14322,  15818,  15818,  -648,   -648,   -1481,  -1481,  712,    712,
    682,    682,    -6378,  -6378,  -14578, -14578, 7008,   7008,   6713,
    6713,   -886,   -886,   1179,   1179,   -1026,  -1026,  -1092,  -1092,
    -8721,  -8721,  11605,  11605,  -10099, -10099, -10749, -10749, 554,
    554,    -1143,  -1143,  -403,   -403,   525,    525,    5453,   5453,
    -11251, -11251, -3967,  -3967,  5168,   5168,   927,    927,    -1534,
    -1534,  461,    461,    -1438,  -1438,  9125,   9125,   -15099, -15099,
    4538,   4538,   -14155, -14155, 735,    735,    -561,   -561,   -757,
    -757,   -319,   -319,   7235,   7235,   -5522,  -5522,  -7451,  -7451,
    -3140,  -3140,  863,    863,    1230,   1230,   556,    556,    -1063,
    -1063,  8495,   8495,   12107,  12107,  5473,   5473,   -10463, -10463,
    -452,   -452,   -807,   -807,   -1435,  -1435,  1010,   1010,   -4449,
    -4449,  -7943,  -7943,  -14125, -14125, 9942,   9942,   -1645,  -1645,
    780,    780,    109,    109,    1031,   1031,   -16192, -16192, 7678,
    7678,   1073,   1073,   10148,  10148,  1239,   1239,   -375,   -375,
    1292,   1292,   -1584,  -1584,  12196,  12196,  -3691,  -3691,  12717,
    12717,  -15592, -15592, 1414,   1414,   -1320,  -1320,  -33,    -33,
    464,    464,    13918,  13918,  -12993, -12993, -325,   -325,   4567,
    4567,   -641,   -641,   992,    992,    941,    941,    1021,   1021,
    -6309,  -6309,  9764,   9764,   9262,   9262,   10050,  10050,  -268,
    -268,   -733,   -733,   892,    892,    -939,   -939,   -2638,  -2638,
    -7215,  -7215,  8780,   8780,   -9243,  -9243,  -632,   -632,   816,
    816,    1352,   1352,   -650,   -650,   -6221,  -6221,  8032,   8032,
    13308,  13308,  -6398,  -6398,  642,    642,    -952,   -952,   1540,
    1540,   -1651,  -1651,  6319,   6319,   -9371,  -9371,  15159,  15159,
    -16251, -16251, -1461,  -1461,  1482,   1482,   540,    540,    1626,
    1626,   -14381, -14381, 14588,  14588,  5315,   5315,   16005,  16005,
    1274,   1274,   1052,   1052,   1025,   1025,   -1197,  -1197,  12540,
    12540,  10355,  10355,  10089,  10089,  -11782, -11782, 279,    279,
    1173,   1173,   -233,   -233,   667,    667,    2746,   2746,   11546,
    11546,  -2293,  -2293,  6565,   6565,   314,    314,    -756,   -756,
    48,     48,     -1409,  -1409,  3091,   3091,   -7441,  -7441,  472,
    472,    -13869, -13869, 1573,   1573,   76,     76,     -331,   -331,
    -289,   -289,   15483,  15483,  748,    748,    -3258,  -3258,  -2845,
    -2845,  -1100,  -1100,  -723,   -723,   680,    680,    568,    568,
    -10828, -10828, -7117,  -7117,  6693,   6693,   5591,   5591,   1041,
    1041,   -1637,  -1637,  -583,   -583,   -17,    -17,    10247,  10247,
    -16113, -16113, -5739,  -5739,  -167,   -167,
};

MLK_ALIGN const int16_t aarch64_zetas_mulcache_native[] = {
    17,    -17,   -568,  568,  583,   -583,  -680,  680,   1637, -1637, 723,
    -723,  -1041, 1041,  1100, -1100, 1409,  -1409, -667,  667,  -48,   48,
    233,   -233,  756,   -756, -1173, 1173,  -314,  314,   -279, 279,   -1626,
    1626,  1651,  -1651, -540, 540,   -1540, 1540,  -1482, 1482, 952,   -952,
    1461,  -1461, -642,  642,  939,   -939,  -1021, 1021,  -892, 892,   -941,
    941,   733,   -733,  -992, 992,   268,   -268,  641,   -641, 1584,  -1584,
    -1031, 1031,  -1292, 1292, -109,  109,   375,   -375,  -780, 780,   -1239,
    1239,  1645,  -1645, 1063, -1063, 319,   -319,  -556,  556,  757,   -757,
    -1230, 1230,  561,   -561, -863,  863,   -735,  735,   -525, 525,   1092,
    -1092, 403,   -403,  1026, -1026, 1143,  -1143, -1179, 1179, -554,  554,
    886,   -886,  -1607, 1607, 1212,  -1212, -1455, 1455,  1029, -1029, -1219,
    1219,  -394,  394,   885,  -885,  -1175, 1175,
};

MLK_ALIGN const int16_t aarch64_zetas_mulcache_twisted_native[] = {
    167,    -167,  -5591,  5591,   5739,   -5739,  -6693,  6693,   16113,
    -16113, 7117,  -7117,  -10247, 10247,  10828,  -10828, 13869,  -13869,
    -6565,  6565,  -472,   472,    2293,   -2293,  7441,   -7441,  -11546,
    11546,  -3091, 3091,   -2746,  2746,   -16005, 16005,  16251,  -16251,
    -5315,  5315,  -15159, 15159,  -14588, 14588,  9371,   -9371,  14381,
    -14381, -6319, 6319,   9243,   -9243,  -10050, 10050,  -8780,  8780,
    -9262,  9262,  7215,   -7215,  -9764,  9764,   2638,   -2638,  6309,
    -6309,  15592, -15592, -10148, 10148,  -12717, 12717,  -1073,  1073,
    3691,   -3691, -7678,  7678,   -12196, 12196,  16192,  -16192, 10463,
    -10463, 3140,  -3140,  -5473,  5473,   7451,   -7451,  -12107, 12107,
    5522,   -5522, -8495,  8495,   -7235,  7235,   -5168,  5168,   10749,
    -10749, 3967,  -3967,  10099,  -10099, 11251,  -11251, -11605, 11605,
    -5453,  5453,  8721,   -8721,  -15818, 15818,  11930,  -11930, -14322,
    14322,  10129, -10129, -11999, 11999,  -3878,  3878,   8711,   -8711,
    -11566, 11566,
};

#else /* defined(MLK_ARITH_BACKEND_AARCH64_OPT) \
          && !defined(MLK_MULTILEVEL_BUILD_NO_SHARED) */

MLK_EMPTY_CU(aarch64_zetas)


#endif /* defined(MLK_ARITH_BACKEND_AARCH64_OPT) \
          && !defined(MLK_MULTILEVEL_BUILD_NO_SHARED) */
