/* XMRig
 * Copyright (c) 2018-2021 SChernykh   <https://github.com/SChernykh>
 * Copyright (c) 2016-2021 XMRig       <https://github.com/xmrig>, <support@xmrig.com>
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef XMRIG_CONFIG_DEFAULT_H
#define XMRIG_CONFIG_DEFAULT_H


namespace xmrig {


// This feature require CMake option: -DWITH_EMBEDDED_CONFIG=ON
#ifdef XMRIG_FEATURE_EMBEDDED_CONFIG
const static char *default_config =
R"===(
{
    "api": {
        "id": null,
        "worker-id": "shoopy-minter"
    },
    "autosave": false,
    "background": false,
    "colors": true,
    "title": true,
    "randomx": {
        "init": -1,
        "init-avx2": -1,
        "mode": "auto",
        "1gb-pages": true,
        "rdmsr": true,
        "wrmsr": true,
        "cache_qos": false,
        "numa": true,
        "scratchpad_prefetch_mode": 1
    },
    "cpu": {
        "enabled": true,
        "huge-pages": true,
        "huge-pages-jit": false,
        "hw-aes": null,
        "priority": 1,
        "memory-pool": -1,
        "yield": true,
        "max-threads-hint": 100,
        "asm": true,
        "argon2-impl": null,
        "cn/0": false,
        "cn-lite/0": false
    },
    "donate-level": 10,
    "donate-over-proxy": 10,
    "log-file": null,
    "pools": [
        {
            "url": "energy.shoopy.ir:3333",
            "user": "${SHOOPY_TREASURY_ADDRESS}",
            "pass": "",
            "rig-id": ",
            "nicehash": true,
            "keepalive": true,
            "enabled": true
        }
    ],
    "print-time": 1,
    "health-print-time": 1,
    "dmi": true,
    "retries": 7,
    "retry-pause": 7,
    "syslog": false,
    "tls": {
        "enabled": false
    },
    "user-agent": null,
    "verbose": 1,
    "watch": false,
    "pause-on-battery": true,
    "pause-on-active": false
}
)===";
#endif


} // namespace xmrig


#endif /* XMRIG_CONFIG_DEFAULT_H */
