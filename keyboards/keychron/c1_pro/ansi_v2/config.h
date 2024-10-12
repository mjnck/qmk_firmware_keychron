/* Copyright 2022 @ Keychron(https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* DIP switch */
#define DIP_SWITCH_PINS { D2 }

/* Increase I2C speed to 1000 KHz */
#define I2C1_CLOCK_SPEED 400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2

/* System indication led */
//#define LED_MAC_OS_PIN C10
#define LED_WIN_OS_PIN C11
#define LED_OS_PIN_ON_STATE 1

/* The SPI Driver Configuration */
// #define SPI_DRIVER SPID1
// #define SPI_SCK_PIN A5
// #define SPI_MOSI_PIN A7
// #define SPI_MISO_PIN A6
// #define CKLED2001_SPI_DIVISOR 21


#define LED_SCROLL_LOCK_PIN C10
