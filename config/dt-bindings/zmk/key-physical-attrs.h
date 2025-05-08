/*
 * Copyright (c) 2022 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#define KEY_PHYSICAL_ATTRS(width, height, x, y, rot, rx, ry) \
    width, height, x, y, rot, rx, ry

#define key_physical_attrs(width, height, x, y, rot, rx, ry) \
    KEY_PHYSICAL_ATTRS(width, height, x, y, rot, rx, ry)
