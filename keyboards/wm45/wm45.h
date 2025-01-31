// Copyright 2022 @whitefacemtn
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2C, \
    K30, K31, K32, K35, K3B, K3C, K3D  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, XXX, K1D }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, XXX, K2C, XXX }, \
    { K30, K31, K32, XXX, XXX, K35, XXX, XXX, XXX, XXX, XXX, K3B, K3C, K3D }, \
}

// generated by KBFirmware JSON to QMK Parser
// https://noroadsleft.github.io/kbf_qmk_converter/
