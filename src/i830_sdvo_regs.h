/*
 * Copyright � 2006 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * Authors:
 *    Eric Anholt <eric@anholt.net>
 *
 */

/* I2C registers for SDVO */
#define SDVO_I2C_ARG_0				0x07
#define SDVO_I2C_ARG_1				0x06
#define SDVO_I2C_ARG_2				0x05
#define SDVO_I2C_ARG_3				0x04
#define SDVO_I2C_ARG_4				0x03
#define SDVO_I2C_ARG_5				0x02
#define SDVO_I2C_ARG_6				0x01
#define SDVO_I2C_ARG_7				0x00
#define SDVO_I2C_OPCODE				0x08
#define SDVO_I2C_CMD_STATUS			0x09
#define SDVO_I2C_RETURN_0			0x0a
#define SDVO_I2C_RETURN_1			0x0b
#define SDVO_I2C_RETURN_2			0x0c
#define SDVO_I2C_RETURN_3			0x0d
#define SDVO_I2C_RETURN_4			0x0e
#define SDVO_I2C_RETURN_5			0x0f
#define SDVO_I2C_RETURN_6			0x10
#define SDVO_I2C_RETURN_7			0x11
#define SDVO_I2C_VENDOR_BEGIN			0x20

/* Status results */
#define SDVO_CMD_STATUS_POWER_ON		0x0
#define SDVO_CMD_STATUS_SUCCESS			0x1
#define SDVO_CMD_STATUS_NOTSUPP			0x2
#define SDVO_CMD_STATUS_INVALID_ARG		0x3
#define SDVO_CMD_STATUS_PENDING			0x4
#define SDVO_CMD_STATUS_TARGET_NOT_SUPP		0x5
#define SDVO_CMD_STATUS_SCALING_NOT_SUPP	0x6

/* SDVO commands, argument/result registers */
#define SDVO_CMD_RESET					0x01
#define SDVO_CMD_GET_DEVICE_CAPS			0x02
# define SDVO_DEVICE_CAPS_VENDOR_ID			SDVO_I2C_RETURN_0
# define SDVO_DEVICE_CAPS_DEVICE_ID			SDVO_I2C_RETURN_1
# define SDVO_DEVICE_CAPS_DEVICE_REV_ID			SDVO_I2C_RETURN_2
# define SDVO_DEVICE_CAPS_SDVOVERSION_MINOR		SDVO_I2C_RETURN_3
# define SDVO_DEVICE_CAPS_SDVOVERSION_MAJOR		SDVO_I2C_RETURN_4
# define SDVO_DEVICE_CAPS_CAPS				SDVO_I2C_RETURN_5
# define SDVO_DEVICE_CAPS_INPUTS_MASK				(3 << 0)
# define SDVO_DEVICE_CAPS_SMOOTH_SCALING			(1 << 2)
# define SDVO_DEVICE_CAPS_SHARP_SCALING				(1 << 3)
# define SDVO_DEVICE_CAPS_UP_SCALING				(1 << 4)
# define SDVO_DEVICE_CAPS_DOWN_SCALING				(1 << 5)
# define SDVO_DEVICE_CAPS_STALL_SUPPORT				(1 << 6)
# define SDVO_DEVICE_CAPS_OUTPUT_0_SUPPORTED		SDVO_I2C_RETURN_6
# define SDVO_DEVICE_CAPS_OUTPUT_1_SUPPORTED		SDVO_I2C_RETURN_7

#define SDVO_CMD_GET_FIRMWARE_REV			0x86
# define SDVO_DEVICE_FIRMWARE_MINOR			SDVO_I2C_RETURN_0
# define SDVO_DEVICE_FIRMWARE_MAJOR			SDVO_I2C_RETURN_1

#define SDVO_CMD_GET_TRAINED_INPUTS			0x03

#define SDVO_CMD_GET_ACTIVE_OUTPUTS			0x04

#define SDVO_CMD_SET_ACTIVE_OUTPUTS			0x05

#define SDVO_CMD_GET_IN_OUT_MAP				0x06

#define SDVO_CMD_SET_IN_OUT_MAP				0x07

#define SDVO_CMD_GET_ATTACHED_DISPLAYS			0x0b

#define SDVO_CMD_GET_HOT_PLUG_SUPPORT			0x0c

#define SDVO_CMD_SET_ACTIVE_HOT_PLUG			0x0d

#define SDVO_CMD_GET_ACTIVE_HOT_PLUG			0x0e

#define SDVO_CMD_GET_INTR_EVENT_SOURCE			0x0f

#define SDVO_CMD_SET_TARGET_INPUT			0x10

#define SDVO_CMD_SET_TARGET_OUTPUT			0x11

#define SDVO_CMD_GET_INPUT_TIMINGS_PART1		0x12
#define SDVO_CMD_GET_INPUT_TIMINGS_PART2		0x13
#define SDVO_CMD_SET_INPUT_TIMINGS_PART1		0x14
#define SDVO_CMD_SET_INPUT_TIMINGS_PART2		0x15
#define SDVO_CMD_SET_OUTPUT_TIMINGS_PART1		0x16
#define SDVO_CMD_SET_OUTPUT_TIMINGS_PART2		0x17
#define SDVO_CMD_GET_OUTPUT_TIMINGS_PART1		0x18
#define SDVO_CMD_GET_OUTPUT_TIMINGS_PART2		0x19
/* Part 1 */
# define SDVO_DTD_CLOCK_LOW				SDVO_I2C_ARG_0
# define SDVO_DTD_CLOCK_HIGH				SDVO_I2C_ARG_1
# define SDVO_DTD_H_ACTIVE				SDVO_I2C_ARG_2
# define SDVO_DTD_H_BLANK				SDVO_I2C_ARG_3
# define SDVO_DTD_H_HIGH				SDVO_I2C_ARG_4
# define SDVO_DTD_V_ACTIVE				SDVO_I2C_ARG_5
# define SDVO_DTD_V_BLANK				SDVO_I2C_ARG_6
# define SDVO_DTD_V_HIGH				SDVO_I2C_ARG_7
/* Part 2 */
# define SDVO_DTD_HSYNC_OFF				SDVO_I2C_ARG_0
# define SDVO_DTD_HSYNC_WIDTH				SDVO_I2C_ARG_1
# define SDVO_DTD_VSYNC_OFF_WIDTH			SDVO_I2C_ARG_2
# define SDVO_DTD_SYNC_OFF_WIDTH_HIGH			SDVO_I2C_ARG_3
# define SDVO_DTD_DTD_FLAGS				SDVO_I2C_ARG_4
# define SDVO_DTD_DTD_FLAG_INTERLACED				(1 << 7)
# define SDVO_DTD_DTD_FLAG_STEREO_MASK				(3 << 5)
# define SDVO_DTD_DTD_FLAG_INPUT_MASK				(3 << 3)
# define SDVO_DTD_DTD_FLAG_SYNC_MASK				(3 << 1)
# define SDVO_DTD_SDVO_FLAS				SDVO_I2C_ARG_5
# define SDVO_DTD_SDVO_FLAG_STALL				(1 << 7)
# define SDVO_DTD_SDVO_FLAG_NOT_CENTERED			(1 << 6)
# define SDVO_DTD_SDVO_FLAG_SCALING_MASK			(3 << 4)
# define SDVO_DTD_VSYNC_OFF_HIGH			SDVO_I2C_ARG_6

#define SDVO_CMD_CREATE_PREFERRED_INPUT_TIMING		0x1a
# define SDVO_PREFERRED_INPUT_TIMING_CLOCK_LOW		SDVO_I2C_ARG_0
# define SDVO_PREFERRED_INPUT_TIMING_CLOCK_HIGH		SDVO_I2C_ARG_1
# define SDVO_PREFERRED_INPUT_TIMING_WIDTH_LOW		SDVO_I2C_ARG_2
# define SDVO_PREFERRED_INPUT_TIMING_WIDTH_HIGH		SDVO_I2C_ARG_3
# define SDVO_PREFERRED_INPUT_TIMING_HEIGHT_LOW		SDVO_I2C_ARG_4
# define SDVO_PREFERRED_INPUT_TIMING_HEIGHT_HIGH	SDVO_I2C_ARG_5
# define SDVO_PREFERRED_INPUT_TIMING_FLAGS		SDVO_I2C_ARG_6
# define SDVO_PREFERRED_INPUT_TIMING_FLAGS_INTERLACED		(1 << 0)
# define SDVO_PREFERRED_INPUT_TIMING_FLAGS_SCALED		(1 << 1)

#define SDVO_CMD_GET_PREFERRED_INPUT_TIMING_PART1	0x1b
#define SDVO_CMD_GET_PREFERRED_INPUT_TIMING_PART2	0x1c

#define SDVO_CMD_GET_INPUT_PIXEL_CLOCK_RANGE		0x1d
#define SDVO_CMD_GET_OUTPUT_PIXEL_CLOCK_RANGE		0x1e

#define SDVO_CMD_GET_SUPPORTED_CLOCK_RATE_MULTS		0x1f

#define SDVO_CMD_GET_CLOCK_RATE_MULT			0x20
#define SDVO_CMD_SET_CLOCK_RATE_MULT			0x21
# define SDVO_CLOCK_RATE_MULT_1X				(1 << 0)
# define SDVO_CLOCK_RATE_MULT_2X				(1 << 1)
# define SDVO_CLOCK_RATE_MULT_3X				(1 << 2)
# define SDVO_CLOCK_RATE_MULT_4X				(1 << 3)
# define SDVO_CLOCK_RATE_MULT_5X				(1 << 4)

#define SDVO_CMD_GET_SUPPORTED_TV_FORMATS		0x27

#define SDVO_CMD_GET_TV_FORMAT				0x28

#define SDVO_CMD_SET_TV_FORMAT				0x29

#define SDVO_CMD_SET_TV_RESOLUTION_SUPPORT		0x93

#define SDVO_CMD_SET_CONTROL_BUS_SWITCH			0x7a
# define SDVO_CONTROL_BUS_PROM				0x0
# define SDVO_CONTROL_BUS_DDC1				0x1
# define SDVO_CONTROL_BUS_DDC2				0x2
# define SDVO_CONTROL_BUS_DDC3				0x3

