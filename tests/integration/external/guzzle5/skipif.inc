<?php
/*
 * Copyright 2022 New Relic Corporation. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 */

if (version_compare(PHP_VERSION, '8.1', '>=')) {
  die("skip: PHP < 8.1 required\n");
}

if (!unpack_guzzle(5)) {
    die("skip: guzzle 5 installation required\n");
}
