#ifndef __AWINIC_PARAMS_H__
#define __AWINIC_PARAMS_H__

#include <stdio.h>
#include "aw_profile_process.h"

const unsigned char dev0_0x2049_Music_reg[] = {
0x03,0x00,0xff,0xff,0x05,0x00,0x84,0x00,0x06,0x00,0x08,0x0c,0x07,0x00,0x03,0x01,
0x08,0x00,0x60,0x00,0x09,0x00,0x4f,0x47,0x0a,0x00,0x64,0x09,0x0b,0x00,0x90,0x25,
0x0c,0x00,0x64,0x1c,0x0d,0x00,0x1b,0x00,0x0e,0x00,0x07,0x4a,0x0f,0x00,0x80,0x50,
0x10,0x00,0xab,0xab,0x11,0x00,0x00,0x2f,0x12,0x00,0x01,0x21,0x13,0x00,0x0b,0x90,
0x38,0x00,0x20,0x00,0x43,0x00,0x00,0x00,0x44,0x00,0x00,0x00,0x47,0x00,0xa0,0x00,
0x50,0x00,0x40,0xff,0x51,0x00,0xe8,0x40,0x52,0x00,0x08,0x5f,0x53,0x00,0x02,0x00,
0x54,0x00,0x02,0xb0,0x55,0x00,0xd0,0x14,0x56,0x00,0x29,0x11,0x57,0x00,0x84,0x18,
0x58,0x00,0xff,0x20,0x59,0x00,0x39,0x2c,0x60,0x00,0x0d,0x0f,0x61,0x00,0x2b,0x59,
0x62,0x00,0x50,0x88,0x63,0x00,0x29,0x40,0x64,0x00,0x8f,0xc7,0x65,0x00,0x1a,0x80,
0x66,0x00,0xac,0x15,0x67,0x00,0x0c,0x46,0x68,0x00,0x89,0xc9,0x69,0x00,0x41,0x35,
0x6a,0x00,0xb8,0x4d,0x6b,0x00,0xf9,0xd6,0x6c,0x00,0xce,0x7a,0x6d,0x00,0x7c,0xec,
0x6e,0x00,0x0c,0x00,0x04,0x00,0x40,0x46,
};

const unsigned char dev0_0x2049_Music_dsp_cfg[] = {
0x00,0x3c,0x00,0x00,0x02,0x80,0x00,0x00,0x06,0x66,0x00,0x00,0xf3,0x4b,0x00,0x00,
0x79,0x50,0x00,0x00,0x06,0xb0,0x00,0x00,0x00,0x37,0x00,0x00,0x00,0x3c,0x00,0x00,
0x02,0x80,0x00,0x00,0x06,0x66,0x00,0x00,0xfb,0x91,0x00,0x00,0x79,0x50,0x00,0x00,
0x06,0xb0,0x00,0x00,0x00,0x6d,0x00,0x00,0xec,0xbd,0x01,0x60,0x26,0x86,0xfd,0x3e,
0xec,0xbd,0x01,0x60,0x2b,0xfb,0x02,0x8f,0x79,0x07,0xff,0x0b,0xec,0xbd,0x01,0x60,
0x26,0x86,0xfd,0x3e,0xec,0xbd,0x01,0x60,0x2b,0xfb,0x02,0x8f,0x79,0x07,0xff,0x0b,
0x56,0xbf,0x00,0x19,0xad,0x7f,0x00,0x32,0x56,0xbf,0x00,0x19,0x2b,0xfb,0x02,0x8f,
0x79,0x07,0xff,0x0b,0x56,0xbf,0x00,0x19,0xad,0x7f,0x00,0x32,0x56,0xbf,0x00,0x19,
0x2b,0xfb,0x02,0x8f,0x79,0x07,0xff,0x0b,0x04,0xa6,0x00,0x06,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xd4,0x83,0x08,0x92,
0x62,0x65,0x03,0x58,0xed,0x24,0x01,0xb3,0x9c,0x97,0x03,0x45,0x3d,0x55,0xfe,0x57,
0x9b,0x0e,0x02,0x01,0x03,0xe4,0xfc,0x11,0x84,0xab,0x01,0xed,0xfc,0x1c,0x03,0xee,
0xe0,0x47,0xfe,0x10,0x0b,0x60,0x01,0xe0,0x19,0x07,0x00,0x01,0x00,0x00,0x00,0x00,
0x02,0xee,0x0b,0xb8,0x01,0x19,0x00,0x00,0x00,0x02,0x05,0xdc,0x00,0x19,0x00,0x00,
0x00,0xed,0x02,0xa8,0x01,0x00,0x00,0x13,0x00,0x05,0x00,0x11,0x00,0x00,0x10,0x00,
0xfb,0x11,0x00,0x0f,0xc8,0xfb,0x00,0x00,0x00,0x07,0x00,0x1f,0x05,0x5e,0x01,0xba,
0x7f,0x0a,0x00,0x00,0x03,0x33,0x00,0x00,0x46,0x00,0x00,0x00,0x0d,0xc3,0x13,0x02,
0x00,0x01,0x09,0x9a,0x0f,0xae,0x1e,0x9c,0x00,0x27,0xe7,0xf8,0x0e,0x55,0x0f,0xe7,
0x00,0x3e,0x00,0x19,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x93,0xc6,0x00,0x04,0x27,0x8c,0x00,0x09,0x93,0xc6,0x00,0x04,0x8d,0x6e,0x03,0xa6,
0x23,0x79,0xfe,0x47,0x2a,0xf3,0x00,0x04,0x55,0xe6,0x00,0x08,0x2a,0xf3,0x00,0x04,
0xf2,0xf8,0x03,0x52,0x61,0x3c,0xfe,0x9c,0x93,0xc6,0x00,0x04,0x27,0x8c,0x00,0x09,
0x93,0xc6,0x00,0x04,0x8d,0x6e,0x03,0xa6,0x23,0x79,0xfe,0x47,0x2a,0xf3,0x00,0x04,
0x55,0xe6,0x00,0x08,0x2a,0xf3,0x00,0x04,0xf2,0xf8,0x03,0x52,0x61,0x3c,0xfe,0x9c,
0x2a,0xf3,0x00,0x04,0x55,0xe6,0x00,0x08,0x2a,0xf3,0x00,0x04,0xf2,0xf8,0x03,0x52,
0x61,0x3c,0xfe,0x9c,0x2a,0xf3,0x00,0x04,0x55,0xe6,0x00,0x08,0x2a,0xf3,0x00,0x04,
0xf2,0xf8,0x03,0x52,0x61,0x3c,0xfe,0x9c,0x00,0x06,0x00,0x00,0x01,0x00,0x04,0x00,
0x10,0x00,0xf5,0x20,0xf5,0x20,0x00,0x00,0xfe,0xa3,0x00,0x03,0x01,0x5d,0x00,0x00,
0x00,0xaf,0x00,0x00,0x01,0x00,0x00,0x5a,0x00,0x62,0x00,0x25,0x00,0x5d,0x00,0x05,
0xe9,0xff,0x1c,0x27,0x8e,0x0b,0x02,0x03,0xe4,0x04,0xfc,0x6c,0xba,0x76,0x01,0xd6,
0x1b,0xfc,0x03,0x93,0xb7,0x7f,0xfe,0x25,0x12,0x60,0x02,0x01,0x93,0xf9,0xfc,0x68,
0x5c,0x63,0x01,0xed,0x6c,0x07,0x03,0x97,0x91,0x3e,0xfe,0x11,0x00,0x00,0x02,0x00,
0xef,0xaa,0xfc,0x6b,0x8a,0x53,0x01,0xdf,0x10,0x56,0x03,0x94,0x75,0xad,0xfe,0x20,
0x5a,0xcb,0x01,0xfb,0x4a,0x69,0xfc,0x09,0x5a,0xcb,0x01,0xfb,0x91,0x88,0x03,0xf6,
0x26,0x5b,0xfe,0x09,0x06,0x02,0x01,0xf5,0xf3,0xfb,0xfc,0x15,0x06,0x02,0x01,0xf5,
0xe8,0x69,0x03,0xe9,0xd0,0x60,0xfe,0x15,0x23,0x5c,0x00,0xaa,0x46,0xb8,0x01,0x54,
0x23,0x5c,0x00,0xaa,0x6d,0x11,0xff,0xb1,0x05,0x80,0xff,0xa6,0x99,0x04,0x01,0xf9,
0xbd,0x62,0xfc,0x32,0xcb,0x58,0x01,0xdf,0x42,0x9e,0x03,0xcd,0x9b,0xa4,0xfe,0x26,
0xf2,0x98,0x02,0x00,0x44,0xa2,0xfc,0x08,0xbb,0x90,0x01,0xf7,0xbb,0x5e,0x03,0xf7,
0x51,0xd8,0xfe,0x07,0x51,0x37,0x01,0xf5,0x06,0x6d,0xfc,0x92,0xdd,0x72,0x01,0xd9,
0xf9,0x93,0x03,0x6d,0xd1,0x57,0xfe,0x30,0x14,0x2a,0x01,0xf1,0xfc,0x6e,0xfd,0x3b,
0x18,0x20,0x01,0xd3,0x03,0x92,0x02,0xc4,0xd3,0xb6,0xfe,0x3b,0x28,0x5d,0x01,0xdf,
0x61,0xde,0xfc,0xdc,0xc7,0xb6,0x01,0xc0,0x9e,0x22,0x03,0x23,0x0f,0xed,0xfe,0x60,
0x9f,0x0a,0x01,0x5b,0xd8,0x59,0xff,0x43,0xca,0x6c,0x00,0x4d,0xeb,0x0a,0x01,0xaa,
0xd3,0x27,0xff,0x67,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x02,0x80,0x02,0xf3,
0x06,0x66,0xf1,0x00,0xf1,0x00,0x00,0x00,0xe3,0xf2,0x00,0x03,0x1c,0x0e,0x00,0x00,
0x0d,0x90,0x00,0x00,0x00,0x06,0x00,0x00,0x01,0x00,0x00,0xcd,0x10,0x00,0xb2,0x00,
0xb2,0x00,0x00,0x00,0xf2,0x70,0x00,0x03,0x0d,0x90,0x00,0x00,0x42,0x0a,0x00,0x00,
0x00,0x1e,0x00,0x00,0x02,0x80,0x02,0xab,0x06,0x66,0xfa,0x00,0xfa,0x00,0x00,0x00,
0xe3,0xf2,0x00,0x03,0x1c,0x0e,0x00,0x00,0x0d,0x90,0x00,0x00,0x00,0x1e,0x00,0x00,
0x04,0x00,0x02,0xab,0x04,0x00,0xfa,0x00,0xfa,0x00,0x00,0x00,0xe3,0xf2,0x00,0x03,
0x1c,0x0e,0x00,0x00,0x0d,0x90,0x00,0x00,0x00,0x1e,0x00,0x00,0x02,0x80,0x02,0xab,
0x06,0x66,0xfa,0x00,0xfa,0x00,0x00,0x00,0xe5,0x0e,0x00,0x03,0x1a,0xf2,0x00,0x00,
0x0d,0x90,0x00,0x00,0x00,0x1e,0x00,0x00,0x02,0x80,0x01,0x33,0x06,0x66,0xb5,0x00,
0xb5,0x00,0x00,0x00,0xf2,0x70,0x00,0x03,0x0d,0x90,0x00,0x00,0x7f,0xd3,0x00,0x00,
0x00,0x1e,0x00,0x00,0x02,0x80,0x00,0xcd,0x06,0x66,0xb5,0x00,0xb5,0x00,0x00,0x00,
0xf2,0x70,0x00,0x03,0x0d,0x90,0x00,0x00,0x7f,0xd3,0x00,0x00,0x00,0x1e,0x00,0x00,
0x02,0x80,0x08,0x00,0x06,0x66,0xb5,0x00,0xb5,0x00,0x00,0x00,0xf2,0x70,0x00,0x03,
0x0d,0x90,0x00,0x00,0x7f,0xd3,0x00,0x00,0x54,0x05,0x00,0x2b,0xa8,0x09,0x00,0x56,
0x54,0x05,0x00,0x2b,0x13,0xf6,0x02,0x0d,0x9b,0xf8,0xff,0x45,0x54,0x05,0x00,0x2b,
0xa8,0x09,0x00,0x56,0x54,0x05,0x00,0x2b,0x13,0xf6,0x02,0x0d,0x9b,0xf8,0xff,0x45,
0xdd,0xff,0x01,0x31,0x44,0x01,0xfd,0x9c,0xdd,0xff,0x01,0x31,0x13,0xf6,0x02,0x0d,
0x9b,0xf8,0xff,0x45,0xdd,0xff,0x01,0x31,0x44,0x01,0xfd,0x9c,0xdd,0xff,0x01,0x31,
0x13,0xf6,0x02,0x0d,0x9b,0xf8,0xff,0x45,0xcc,0x23,0x00,0x03,0x98,0x46,0x00,0x07,
0xcc,0x23,0x00,0x03,0xeb,0x93,0x03,0x7b,0xe3,0xe1,0xfe,0x74,0xcc,0x23,0x00,0x03,
0x98,0x46,0x00,0x07,0xcc,0x23,0x00,0x03,0xeb,0x93,0x03,0x7b,0xe3,0xe1,0xfe,0x74,
0xc1,0xec,0x01,0xc1,0x7c,0x27,0xfc,0x7c,0xc1,0xec,0x01,0xc1,0xeb,0x93,0x03,0x7b,
0xe3,0xe1,0xfe,0x74,0xc1,0xec,0x01,0xc1,0x7c,0x27,0xfc,0x7c,0xc1,0xec,0x01,0xc1,
0xeb,0x93,0x03,0x7b,0xe3,0xe1,0xfe,0x74,0xcc,0x23,0x00,0x03,0x98,0x46,0x00,0x07,
0xcc,0x23,0x00,0x03,0xeb,0x93,0x03,0x7b,0xe3,0xe1,0xfe,0x74,0xcc,0x23,0x00,0x03,
0x98,0x46,0x00,0x07,0xcc,0x23,0x00,0x03,0xeb,0x93,0x03,0x7b,0xe3,0xe1,0xfe,0x74,
0xc1,0xec,0x01,0xc1,0x7c,0x27,0xfc,0x7c,0xc1,0xec,0x01,0xc1,0xeb,0x93,0x03,0x7b,
0xe3,0xe1,0xfe,0x74,0xc1,0xec,0x01,0xc1,0x7c,0x27,0xfc,0x7c,0xc1,0xec,0x01,0xc1,
0xeb,0x93,0x03,0x7b,0xe3,0xe1,0xfe,0x74,0x0a,0x0a,0x0a,0x0a,0x09,0x09,0x08,0x08,
0x07,0x07,0x07,0x07,0xd8,0x6c,0x00,0x00,0x02,0x80,0x00,0x00,0x00,0xe9,0x00,0x00,
0x00,0xe9,0x00,0x00,0xb7,0x00,0x00,0x00,0x05,0x00,0x00,0x00,0x01,0x5d,0x00,0x00,
0x02,0xba,0x00,0x00,0xd5,0x00,0x06,0x00,0x02,0x80,0x00,0xf6,0x06,0xce,0x00,0x00,
0x06,0xce,0x00,0x00,0xd5,0x00,0x07,0x00,0x02,0x80,0x01,0x1f,0x06,0xce,0x00,0x00,
0x06,0xce,0x00,0x00,0xd5,0x00,0x04,0x00,0x02,0x80,0x00,0xa4,0x06,0xce,0x00,0x00,
0x06,0xce,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x02,0xc9,0x02,0xb8,0x02,0xa7,0x02,0x96,0x02,0x85,0x02,0x74,0x02,0x63,0x02,0x52,
0x02,0x41,0x02,0x30,0x02,0x2f,0x02,0x2e,0x0c,0x00,0x07,0x00,0x02,0x19,0x02,0x00,
0x00,0x05,0x00,0x00,0x09,0x00,0x07,0x00,0x05,0x00,0x03,0x00,0x01,0x00,0xff,0x00,
0xfd,0x00,0xfb,0x00,0x08,0x09,0x06,0x07,0x04,0x05,0x04,0x04,0x00,0x00,0x00,0x00,
0xff,0xc0,0xff,0x80,0xff,0x40,0xff,0x00,0xfe,0xc0,0xfe,0x80,0xfe,0x40,0xfe,0x00,
0xfe,0x00,0xfe,0x00,0x00,0x00,0x00,0x00,0xfe,0x80,0xfe,0x80,0xfd,0x00,0xfd,0x00,
0xfa,0x00,0xfa,0x00,0x3c,0x5f,0xa3,0xac,0x17,0x70,0x00,0x00,0x00,0x08,0x00,0x05,
};

const unsigned char dev0_0x2049_dsp_fw[] = {
0xb5,0x10,0xf0,0x00,0xf8,0x8f,0xbd,0x10,0xb5,0x10,0xf0,0x00,0xf8,0x91,0xbd,0x10,
0xb5,0x10,0xf0,0x00,0xf8,0x93,0xbd,0x10,0xb5,0x10,0xf0,0x00,0xf8,0x95,0xbd,0x10,
0xb5,0x10,0xf0,0x00,0xf8,0x97,0xbd,0x10,0xb5,0x10,0xf0,0x00,0xf8,0x99,0xbd,0x10,
0xb5,0x10,0xf0,0x00,0xf8,0x9b,0xbd,0x10,0xb5,0x10,0xf0,0x00,0xfc,0x00,0xbd,0x10,
0xb5,0x10,0xf0,0x00,0xfa,0x2b,0xbd,0x10,0xb5,0x10,0xf0,0x00,0xf8,0x95,0xbd,0x10,
0xb5,0x10,0xf0,0x00,0xf8,0x97,0xbd,0x10,0xb5,0x10,0xf0,0x00,0xfa,0x45,0xbd,0x10,
0xb5,0x10,0xf0,0x00,0xf8,0x95,0xbd,0x10,0xb5,0x10,0xf0,0x00,0xf8,0x9b,0xbd,0x10,
0xb5,0x10,0xf0,0x00,0xfa,0xe0,0xbd,0x10,0xb5,0xf0,0x46,0x05,0x48,0x25,0xb0,0xc1,
0x78,0x00,0x46,0x0c,0x07,0xc0,0xd0,0x10,0x20,0x00,0x21,0xff,0x31,0x41,0xbf,0x00,
0xbf,0x00,0xbf,0x00,0x1c,0x40,0x42,0x88,0xdb,0xf9,0x20,0x00,0x1c,0x40,0x28,0x20,
0xdb,0xfc,0xf0,0x00,0xf9,0xfa,0xb0,0x41,0xbd,0xf0,0x48,0x1b,0x88,0x80,0x04,0xc0,
0xd5,0x04,0x22,0x80,0x46,0x29,0x48,0x19,0xf0,0x00,0xf8,0x7a,0x48,0x18,0x8c,0x00,
0x05,0x80,0xd0,0x02,0x46,0x28,0xf0,0x00,0xf8,0x79,0x46,0x69,0x46,0x28,0xf0,0x00,
0xfe,0x63,0x46,0x68,0xf0,0x00,0xf8,0x78,0x46,0x20,0xa9,0x20,0xf0,0x00,0xfd,0xbe,
0x26,0x01,0x05,0xf6,0x1e,0x77,0x20,0x00,0x42,0x7b,0x46,0x6d,0x07,0x9c,0x00,0x81,
0x58,0x6a,0x42,0xb2,0xdb,0x02,0x19,0x09,0x60,0x0f,0xe0,0x06,0x42,0x9a,0xdc,0x02,
0x19,0x09,0x60,0x0b,0xe0,0x01,0x19,0x09,0x60,0x0a,0x1c,0x40,0x28,0x20,0xdb,0xee,
0xe7,0xc7,0x00,0x00,0x00,0xb4,0x20,0x00,0x39,0xc0,0x20,0x00,0x00,0x80,0x40,0x00,
0x3a,0xc0,0x20,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x1d,0x99,0x00,0x00,
0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x1e,0xd3,0x00,0x00,0xb4,0x03,0x48,0x01,
0x90,0x01,0xbd,0x01,0x1f,0xeb,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,
0x20,0x1b,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x16,0x7b,0x00,0x00,
0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x16,0xa7,0x00,0x00,0xb4,0x03,0x48,0x01,
0x90,0x01,0xbd,0x01,0x1d,0x09,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,
0x24,0xfd,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x25,0x75,0x00,0x00,
0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x26,0x47,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x01,0xff,0xff,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x23,0xff,0x00,0x00,
0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x01,0xa9,0x00,0x00,0xb4,0x03,0x48,0x01,
0x90,0x01,0xbd,0x01,0x1c,0x3d,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,
0x04,0x4d,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x26,0x85,0x00,0x00,
0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x37,0x89,0x00,0x00,0xb4,0x03,0x48,0x01,
0x90,0x01,0xbd,0x01,0x06,0x4d,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,
0x3d,0x15,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x16,0xd7,0x00,0x00,
0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x37,0x99,0x00,0x00,0xb4,0x03,0x48,0x01,
0x90,0x01,0xbd,0x01,0x34,0x21,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,
0x33,0xf1,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x2c,0x7b,0x00,0x00,
0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x32,0x77,0x00,0x00,0xb4,0x03,0x48,0x01,
0x90,0x01,0xbd,0x01,0x2c,0x4f,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,
0x2c,0x0d,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x29,0x95,0x00,0x00,
0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x2d,0xb5,0x00,0x00,0xb4,0x03,0x48,0x01,
0x90,0x01,0xbd,0x01,0x30,0x53,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,
0x24,0x33,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x0c,0xf5,0x00,0x00,
0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x23,0x6d,0x00,0x00,0xb4,0x03,0x48,0x01,
0x90,0x01,0xbd,0x01,0x3c,0x61,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,
0x0d,0x9b,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x12,0xf7,0x00,0x00,
0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x3c,0xa5,0x00,0x00,0xb4,0x03,0x48,0x01,
0x90,0x01,0xbd,0x01,0x16,0x4f,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,
0x25,0x33,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x15,0xf1,0x00,0x00,
0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x10,0x09,0x00,0x00,0xb4,0x03,0x48,0x01,
0x90,0x01,0xbd,0x01,0x1b,0xdb,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,
0x17,0xb7,0x00,0x00,0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x17,0xa1,0x00,0x00,
0xb4,0x03,0x48,0x01,0x90,0x01,0xbd,0x01,0x18,0xdf,0x00,0x00,0xb4,0x03,0x48,0x01,
0x90,0x01,0xbd,0x01,0x27,0x37,0x00,0x00,0xb4,0xf0,0x0c,0x04,0xb2,0x8b,0x46,0x26,
0xb2,0x82,0x43,0x5e,0x0c,0x0d,0x46,0x10,0x0c,0x37,0x43,0x58,0x04,0x36,0x19,0x80,
0x21,0x00,0x41,0x79,0x46,0x16,0x43,0x6e,0x0c,0x37,0x04,0x36,0x19,0x80,0x41,0x79,
0x46,0x26,0x43,0x6e,0x19,0x89,0xbc,0xf0,0x47,0x70,0x00,0x00,0x48,0xf8,0x21,0x00,
0x60,0x01,0x60,0x41,0x60,0x81,0x60,0xc1,0x61,0x01,0x61,0x41,0x61,0x81,0x61,0xc1,
0x62,0x01,0x62,0x41,0x48,0xf3,0x49,0xf4,0x8b,0x42,0x80,0x0a,0x8b,0x82,0x80,0x4a,
0x68,0x00,0x03,0x80,0x0c,0x01,0x48,0xf1,0x82,0x81,0x21,0x19,0x83,0x41,0x47,0x70,
0xb5,0xf8,0x4c,0xef,0x20,0x02,0x49,0xef,0x5e,0x20,0x68,0x09,0x03,0x80,0x60,0x08,
0x48,0xed,0x88,0x01,0x88,0x40,0x1a,0x09,0x7a,0xa0,0xf7,0xff,0xff,0x03,0x21,0x00,
0x4d,0xea,0x4e,0xe6,0x27,0x0c,0x00,0x4a,0x19,0x52,0x8c,0x13,0x8c,0x52,0x1a,0x9a,
0x2a,0x10,0xda,0x02,0x1c,0x49,0x75,0xb1,0xe0,0x04,0x1c,0x49,0xb2,0x09,0x75,0xb7,
0x29,0x0b,0xdb,0xf0,0x7d,0xb2,0x21,0x00,0x2a,0x00,0xdd,0x09,0x23,0x02,0x5e,0xe3,
0x00,0x4c,0x19,0x64,0x8c,0x24,0x42,0x9c,0xdd,0x02,0x18,0x09,0x42,0x8a,0xdc,0xf7,
0x42,0x8a,0xdd,0x05,0x48,0xda,0x18,0x08,0x7e,0x02,0x48,0xda,0x80,0x42,0x80,0x01,
0xbd,0xf8,0xb5,0xf8,0x4d,0xd4,0x20,0x1a,0x5e,0x28,0x49,0xd7,0x03,0x80,0x61,0x08,
0x4c,0xd6,0x20,0x04,0x21,0x06,0x5e,0x20,0x5e,0x61,0x1a,0x41,0x20,0x1e,0x5e,0x28,
0xf7,0xff,0xfe,0xc8,0x4f,0xc9,0x21,0x00,0x00,0x4a,0x19,0x12,0x23,0x04,0x26,0x06,
0x5e,0xd3,0x5f,0x96,0x1b,0x9a,0x2a,0x0f,0xda,0x02,0x1c,0x49,0x75,0xf9,0xe0,0x05,
0x22,0x08,0x1c,0x49,0xb2,0x09,0x75,0xfa,0x29,0x07,0xdb,0xed,0x7d,0xfa,0x21,0x00,
0x2a,0x00,0xdd,0x0a,0x23,0x1a,0x5e,0xeb,0x00,0x4d,0x19,0x2e,0x25,0x04,0x5f,0x75,
0x42,0x9d,0xdd,0x02,0x18,0x09,0x42,0x8a,0xdc,0xf6,0x42,0x8a,0xdd,0x04,0x19,0x08,
0x7d,0x02,0x48,0xbf,0x75,0xc2,0x75,0x81,0xbd,0xf8,0x47,0x70,0xb5,0x10,0xf7,0xff,
0xff,0x6d,0xf7,0xff,0xff,0x85,0xf7,0xff,0xff,0xbc,0x4a,0xae,0x48,0xb9,0x68,0x11,
0x7b,0x83,0x40,0x99,0x4b,0xb8,0x68,0x1b,0x60,0x19,0x4b,0xb8,0x21,0x02,0x5e,0x59,
0x7b,0x00,0x4b,0xb8,0x40,0x81,0x48,0xb6,0x68,0x00,0x60,0x01,0x21,0x1a,0x5e,0x51,
0x7f,0x98,0x40,0x81,0x48,0xb4,0x68,0x00,0x30,0x80,0x63,0x41,0x21,0x1c,0x5e,0x51,
0x7f,0x9a,0x40,0x91,0x63,0x81,0xbd,0x10,0xb5,0xf1,0x48,0xae,0x6a,0x00,0x02,0xc1,
0xd5,0x03,0x4f,0x9e,0x7d,0xf9,0x29,0x08,0xd9,0x08,0x48,0xac,0x21,0x0c,0x68,0x00,
0x69,0x00,0x5e,0x41,0x98,0x00,0x60,0x01,0x20,0xff,0xbd,0xf8,0x00,0x40,0xd4,0x04,
0x20,0x05,0x07,0x00,0x69,0x00,0x14,0x00,0xe0,0x01,0x20,0x1a,0x5e,0x38,0x28,0x80,
0xdd,0x01,0x20,0x80,0xe0,0x04,0x21,0x7e,0x43,0xc9,0x42,0x88,0xda,0x00,0x46,0x08,
0x02,0x00,0xb2,0x00,0x4a,0x94,0x03,0x81,0x69,0x10,0x1a,0x0b,0x49,0x93,0x78,0x0c,
0x41,0x23,0x18,0x18,0x61,0x10,0x13,0x86,0x20,0x04,0x22,0x06,0x5e,0x08,0x5e,0x8a,
0x1a,0x81,0x4a,0x89,0x20,0x1e,0x5e,0x10,0xf7,0xff,0xfe,0x3c,0x46,0x05,0x20,0x00,
0x46,0x84,0x46,0x04,0x48,0x81,0x7d,0xc1,0x1e,0x4b,0x2b,0x00,0xdd,0x11,0x48,0x87,
0x00,0x62,0x18,0x12,0x20,0x04,0x5e,0x10,0x42,0xb0,0xdd,0x15,0x27,0x06,0x5f,0xd7,
0x1b,0xc0,0x28,0x0f,0xdb,0x02,0x19,0x64,0x42,0xa3,0xdc,0xf0,0x46,0x60,0x28,0x00,
0xd1,0x0a,0x1e,0x88,0x42,0xa0,0xd1,0x07,0x48,0x7c,0x00,0x4a,0x18,0x12,0x20,0x02,
0x5e,0x10,0x42,0xb0,0xdc,0x00,0x46,0x1c,0x4f,0x70,0x42,0xa1,0xdd,0x04,0x4a,0x78,
0x20,0x16,0x56,0x10,0x42,0x88,0xdb,0x09,0x46,0x30,0x99,0x00,0xf7,0xff,0xfd,0x50,
0x7d,0xf8,0x49,0x73,0x1e,0x40,0x75,0x88,0xb2,0xc0,0xbd,0xf8,0x46,0x17,0x42,0xa0,
0xda,0x06,0x46,0x30,0x99,0x00,0xf7,0xff,0xfd,0x43,0x75,0xbc,0xb2,0xe0,0xbd,0xf8,
0x42,0xa0,0xdd,0x22,0x4a,0x64,0x21,0x1c,0x5e,0x51,0x00,0x42,0x48,0x67,0x18,0x12,
0x20,0x04,0x5e,0x10,0x18,0x40,0x42,0xb0,0xdc,0x17,0x46,0x30,0x99,0x00,0xf7,0xff,
0xfd,0x2f,0x22,0x16,0x56,0xba,0x1b,0x51,0xd4,0x0b,0x48,0x58,0x7d,0xc0,0x1e,0x43,
0x42,0x93,0xd1,0x04,0x2d,0x01,0xdd,0x02,0x1b,0x40,0x1e,0x40,0xe0,0x02,0x75,0xb9,
0xe0,0x01,0x20,0x00,0x75,0xb8,0x7d,0xb8,0xbd,0xf8,0x46,0x30,0x99,0x00,0xf7,0xff,
0xfd,0x17,0x7d,0xb8,0xbd,0xf8,0xb5,0xf1,0x48,0x5d,0x79,0x00,0x07,0xc0,0xd0,0x03,
0x48,0x4a,0x7d,0x80,0x28,0x0c,0xd9,0x08,0x48,0x58,0x21,0x0c,0x68,0x00,0x69,0x00,
0x5e,0x41,0x98,0x00,0x60,0x01,0x20,0xff,0xbd,0xf8,0x20,0x05,0x07,0x00,0x8a,0x00,
0x04,0x02,0x48,0x44,0x08,0x92,0x68,0x01,0x68,0x08,0x1a,0x13,0x4a,0x40,0x7a,0x14,
0x41,0x23,0x18,0x18,0x13,0x86,0x60,0x08,0x48,0x3f,0x88,0x01,0x88,0x40,0x1a,0x09,
0x7a,0x90,0xf7,0xff,0xfd,0xa7,0x46,0x05,0x48,0x38,0x27,0x00,0x7d,0x81,0x46,0x3c,
0x1e,0x4b,0x2b,0x00,0xdd,0x0e,0x48,0x39,0x00,0x62,0x18,0x12,0x8c,0x10,0x42,0xb0,
0xdd,0x12,0x8c,0x52,0x1a,0x80,0x28,0x10,0xdb,0x02,0x19,0x64,0x42,0xa3,0xdc,0xf2,
0x2f,0x00,0xd1,0x09,0x1e,0x88,0x42,0xa0,0xd1,0x06,0x48,0x30,0x00,0x4a,0x18,0x10,
0x8b,0xc0,0x42,0xb0,0xdc,0x00,0x46,0x1c,0x4f,0x2d,0x42,0xa1,0xdd,0x03,0x4a,0x2d,
0x88,0x10,0x42,0x88,0xd3,0x0c,0x46,0x30,0x99,0x00,0xf7,0xff,0xfc,0xc5,0x48,0x23,
0x7d,0x80,0x19,0xc1,0x7d,0xca,0x49,0x27,0x1e,0x40,0x80,0x4a,0x80,0x08,0xe0,0x31,
0x42,0xa0,0xda,0x0a,0x46,0x30,0x99,0x00,0xf7,0xff,0xfc,0xb6,0x19,0xe0,0x7e,0x01,
0x48,0x20,0x80,0x41,0x80,0x04,0xb2,0xe0,0xbd,0xf8,0x42,0xa0,0xdd,0x52,0x00,0x42,
0x48,0x1a,0x49,0x17,0x18,0x10,0x79,0x89,0x8c,0x00,0x4c,0x1a,0x18,0x40,0x42,0xb0,
0x99,0x00,0x46,0x30,0xdc,0x18,0xf7,0xff,0xfc,0x9f,0x88,0x20,0x1b,0x41,0xd4,0x0b,
0x4a,0x0e,0x7d,0x92,0x1e,0x53,0x42,0x83,0xd1,0x04,0x2d,0x01,0xdd,0x02,0x1b,0x50,
0x1e,0x40,0xe0,0x02,0x80,0x21,0xe0,0x01,0x20,0x00,0x80,0x20,0x88,0x20,0x19,0xc1,
0x7e,0x09,0x80,0x61,0xb2,0xc0,0xbd,0xf8,0xf7,0xff,0xfc,0x86,0x78,0x20,0xe7,0xf9,
0x38,0x94,0x20,0x00,0x3a,0x00,0x20,0x00,0x00,0x20,0x50,0x00,0x38,0xa0,0x20,0x00,
0x39,0xe0,0x20,0x00,0x00,0x70,0x20,0x00,0x3e,0x20,0x20,0x00,0x3e,0x00,0x20,0x00,
0x3d,0xa0,0x20,0x00,0x00,0xb8,0x20,0x00,0x38,0x80,0x20,0x00,0x3e,0x40,0x20,0x00,
0x38,0x40,0x20,0x00,0x3e,0x80,0x20,0x00,0x00,0x84,0x20,0x00,0x3a,0x20,0x20,0x00,
0x00,0x88,0x20,0x00,0x3a,0xc0,0x20,0x00,0x00,0xbc,0x20,0x00,0x00,0x34,0x20,0x00,
0x39,0xc0,0x20,0x00,0x46,0x30,0x99,0x00,0xf7,0xff,0xfc,0x56,0x48,0xfd,0x78,0x00,
0xe7,0xc8,0x23,0x00,0x2a,0x00,0xd9,0x27,0xb4,0xf0,0x00,0x9c,0x59,0x05,0x2d,0x00,
0xda,0x00,0x42,0x6d,0x51,0x05,0x69,0x0f,0x26,0x1a,0x5f,0x8e,0x68,0x3f,0x42,0xbe,
0xdb,0x06,0x68,0x4d,0x60,0x0d,0x25,0x00,0x60,0x4d,0x25,0x01,0x83,0x4d,0xe0,0x05,
0x68,0x4f,0x42,0xaf,0xda,0x00,0x60,0x4d,0x1c,0x76,0x83,0x4e,0x59,0x05,0x68,0x0e,
0x42,0xb5,0xdc,0x01,0x46,0x35,0xe0,0x00,0x60,0x0d,0x1c,0x5b,0xb2,0xdb,0x51,0x05,
0x42,0x93,0xd3,0xda,0xbc,0xf0,0x47,0x70,0x47,0x70,0xb4,0x10,0x24,0x00,0x46,0x22,
0x68,0x03,0x2b,0x00,0xda,0x00,0x42,0x5b,0x42,0xa3,0xdd,0x00,0x46,0x1c,0x1c,0x52,
0xb2,0xd2,0x1d,0x00,0x2a,0x20,0xd3,0xf3,0x60,0x0c,0xbc,0x10,0x47,0x70,0xb5,0xf8,
0x46,0x0d,0x46,0x1e,0x46,0x17,0x46,0x69,0xf7,0xff,0xff,0xe7,0x22,0x01,0x46,0x29,
0x46,0x68,0xf7,0xff,0xff,0xb6,0x98,0x00,0x28,0x00,0xdd,0x0d,0xf7,0xff,0xfc,0xc0,
0xf7,0xff,0xfc,0xc4,0x21,0x17,0x05,0x09,0x1a,0x40,0x49,0xd3,0xf7,0xff,0xfc,0xc4,
0x03,0x09,0x0d,0x04,0x43,0x0c,0xe0,0x00,0x4c,0xd0,0x60,0xac,0x88,0x70,0x28,0x00,
0xd0,0x04,0x46,0x32,0x46,0x39,0x46,0x20,0xf7,0xff,0xfc,0xbc,0x68,0x38,0x19,0x00,
0x60,0xa8,0xbd,0xf8,0x21,0x01,0x23,0x0f,0x22,0x00,0x03,0xc9,0x28,0x01,0xd9,0x0d,
0xb4,0x10,0x00,0x54,0x18,0x64,0x40,0x9c,0x1e,0x5b,0x42,0xa0,0xd3,0x01,0x18,0x52,
0x1b,0x00,0x08,0x49,0xd1,0xf5,0xbc,0x10,0x46,0x10,0x47,0x70,0x47,0x70,0xb4,0x10,
0x24,0x7f,0x06,0x24,0x23,0x01,0x21,0x00,0x06,0x5b,0x00,0x62,0x42,0xa0,0xdd,0x01,
0x46,0x20,0xe0,0x07,0x24,0x81,0x06,0x24,0x42,0xa0,0xda,0x01,0x46,0x20,0xe0,0x07,
0x42,0x98,0xdd,0x03,0x10,0x40,0x1c,0x49,0x42,0x98,0xdc,0xfb,0x42,0x90,0xda,0x03,
0x10,0x40,0x1c,0x49,0x42,0x90,0xdb,0xfb,0xbc,0x10,0x46,0x08,0x47,0x70,0xb5,0xf8,
0x27,0x01,0x46,0x04,0x06,0x3f,0xf7,0xff,0xff,0xda,0x46,0x05,0x26,0x03,0x01,0xb8,
0x05,0xf6,0x42,0xbc,0xdd,0x19,0x12,0x64,0x46,0x21,0x41,0x29,0x43,0x49,0x00,0x6a,
0x40,0xd0,0x1a,0x08,0xf7,0xff,0xff,0xb6,0x40,0xa8,0x18,0x20,0x02,0x41,0xd0,0x0b,
0x46,0x08,0xf7,0xff,0xfc,0x6d,0xf7,0xff,0xfc,0x59,0x1b,0x80,0x49,0xa0,0xf7,0xff,
0xfc,0x5b,0x03,0x09,0x0d,0x00,0x43,0x08,0xbd,0xf8,0x21,0xff,0x06,0x09,0x42,0x8c,
0xda,0x24,0x12,0x64,0x46,0x21,0x41,0x29,0x43,0x49,0x00,0x6a,0x40,0xd0,0x1a,0x08,
0xf7,0xff,0xff,0x98,0x40,0xa8,0x1a,0x20,0xd5,0x00,0x42,0x40,0x02,0x40,0xf7,0xff,
0xfc,0x4f,0xf7,0xff,0xfc,0x3b,0x1b,0x80,0x49,0x91,0xf7,0xff,0xfc,0x3d,0x03,0x09,
0x0d,0x00,0x43,0x08,0x46,0x01,0xf7,0xff,0xfc,0x37,0x02,0x09,0x0e,0x00,0x43,0x08,
0x49,0x8c,0x18,0x40,0xf7,0xff,0xff,0x7e,0x03,0x00,0xbd,0xf8,0x0f,0xe5,0x2c,0x00,
0xda,0x00,0x42,0x64,0x48,0x88,0x46,0x21,0xf7,0xff,0xfc,0x26,0x02,0x09,0x0e,0x00,
0x43,0x08,0x49,0x86,0x18,0x40,0x46,0x21,0xf7,0xff,0xfc,0x1e,0x02,0x09,0x0e,0x00,
0x43,0x08,0x49,0x83,0x18,0x40,0x46,0x21,0xf7,0xff,0xfc,0x16,0x02,0x09,0x0e,0x00,
0x43,0x08,0x49,0x80,0x18,0x46,0x1b,0x38,0x01,0x00,0xf7,0xff,0xff,0x5b,0x46,0x01,
0x46,0x30,0xf7,0xff,0xfc,0x09,0x04,0x89,0x0b,0x80,0x43,0x08,0x2d,0x00,0xd0,0xd4,
0x49,0x79,0x1a,0x08,0xbd,0xf8,0xb5,0x10,0x21,0xff,0x06,0x09,0x18,0x44,0x48,0x77,
0x46,0x21,0xf7,0xff,0xfb,0xf9,0x02,0x09,0x0e,0x00,0x43,0x08,0x49,0x74,0x18,0x40,
0x46,0x21,0xf7,0xff,0xfb,0xf1,0x02,0x09,0x0e,0x00,0x43,0x08,0x49,0x71,0x18,0x40,
0x46,0x21,0xf7,0xff,0xfb,0xe9,0x02,0x09,0x0e,0x00,0x43,0x08,0x49,0x6e,0x18,0x40,
0x46,0x21,0xf7,0xff,0xfb,0xe1,0x02,0x09,0x0e,0x00,0x43,0x08,0x49,0x6b,0x18,0x40,
0x46,0x21,0xf7,0xff,0xfb,0xd9,0x02,0x09,0x0e,0x00,0x43,0x08,0x30,0xc0,0xbd,0x10,
0xb5,0xf8,0x4f,0x67,0x24,0x12,0x5f,0x3c,0x48,0x66,0x4e,0x67,0x25,0x00,0x1c,0x64,
0x2c,0x07,0xd2,0x7d,0x00,0x21,0x44,0x79,0x79,0x09,0x18,0x49,0x44,0x8f,0x03,0xe9,
0x4f,0x26,0x8c,0x55,0x00,0xd1,0x4b,0x61,0x21,0x02,0x22,0x00,0x5e,0x59,0x5e,0x9a,
0x29,0x00,0xd0,0x19,0x03,0x12,0x03,0x09,0x61,0x42,0x46,0x05,0x62,0x81,0x01,0x08,
0xf7,0xff,0xff,0x00,0x02,0x80,0x61,0xe8,0xf7,0xff,0xfb,0xa2,0xf7,0xff,0xfb,0xa6,
0x21,0x03,0x05,0xc9,0x1a,0x40,0x49,0x46,0x61,0xa8,0xf7,0xff,0xfb,0xa5,0x03,0x09,
0x0d,0x00,0x43,0x08,0x61,0xa8,0xe0,0xcf,0x24,0x00,0xe0,0xcd,0x69,0xc1,0x00,0x49,
0xd0,0xfa,0x48,0x4c,0x69,0x40,0x28,0x00,0xdb,0x01,0x46,0x02,0xe0,0x00,0x42,0x42,
0x17,0xcb,0x0e,0x4e,0x01,0xdb,0x43,0x33,0x17,0xd5,0x01,0xce,0x1a,0xb2,0x41,0xab,
0xda,0x09,0x49,0x44,0x28,0x00,0xda,0x02,0x20,0x7f,0x06,0x00,0xe0,0x01,0x20,0x81,
0x06,0x00,0x62,0x08,0xe0,0xb0,0x42,0x4a,0x17,0xc1,0x0a,0x03,0x06,0x09,0x43,0x19,
0x4d,0x3c,0x06,0x00,0x17,0xd3,0xf7,0xff,0xfb,0x89,0x62,0x28,0xe0,0xa4,0x46,0x05,
0x6a,0x00,0xf7,0xff,0xfe,0xf4,0x62,0x68,0xe0,0x9e,0x46,0x06,0x6a,0x40,0x46,0x01,
0xf7,0xff,0xfb,0x6a,0x0e,0x05,0x02,0x09,0x43,0x0d,0x20,0x01,0x6a,0x31,0x06,0x00,
0x42,0x81,0xdd,0x00,0x42,0x6d,0x69,0xb0,0x46,0x01,0xf7,0xff,0xfb,0x5d,0x02,0x09,
0x0e,0x00,0x43,0x08,0x19,0x40,0xd4,0xb7,0x62,0xf0,0xf7,0xff,0xfe,0xa3,0x03,0x00,
0x62,0xf0,0x49,0x2b,0x6a,0xb0,0x4a,0x2b,0x18,0x41,0x42,0x91,0xd3,0x10,0xe0,0x00,
0xe0,0x6f,0xf7,0xff,0xfb,0x3d,0xf7,0xff,0xfb,0x41,0x21,0x03,0x05,0xc9,0x1a,0x40,
0x49,0x13,0x61,0xb0,0xf7,0xff,0xfb,0x40,0x03,0x09,0x0d,0x00,0x43,0x08,0xe0,0x01,
0xf7,0xff,0xff,0x39,0x61,0xb0,0xe0,0x67,0x69,0x82,0x2a,0x00,0xd0,0x94,0x46,0x05,
0x6a,0xc0,0x17,0xd3,0x0d,0x41,0x02,0xc0,0xf7,0xff,0xfb,0x40,0x62,0x68,0x28,0x00,
0x46,0x01,0xda,0x00,0x42,0x49,0x42,0xb1,0xdd,0x31,0x28,0x00,0xda,0x2c,0x83,0x3e,
0xe0,0x52,0x00,0x00,0x00,0xb8,0x20,0x00,0x06,0x05,0x00,0x00,0x76,0x00,0xff,0xff,
0x72,0x18,0x00,0xb1,0x9e,0x65,0x09,0xde,0x34,0x8e,0xff,0xfb,0x02,0xc5,0x00,0x13,
0xb2,0xdf,0xff,0xc9,0x1b,0x48,0x01,0x92,0x3f,0x6b,0x03,0x24,0xa1,0x8c,0x00,0x07,
0xbb,0x20,0xff,0xde,0xa8,0xa3,0x00,0x48,0xa3,0x9e,0xff,0x82,0xc9,0x5f,0x00,0xff,
0x38,0xa0,0x20,0x00,0x38,0x80,0x20,0x00,0x7f,0xff,0x00,0x00,0x00,0x20,0x50,0x00,
0x3d,0x71,0xff,0x0a,0x3d,0x72,0x00,0x8a,0x48,0xc4,0x83,0x38,0xe0,0x24,0x42,0x40,
0xe7,0xfb,0x46,0x04,0x6a,0xc0,0x49,0xc2,0xf7,0xff,0xfb,0x96,0x02,0x09,0x0e,0x00,
0x43,0x08,0x49,0xc0,0x68,0x8a,0x46,0x29,0x17,0xd3,0xf7,0xff,0xfa,0xfd,0x02,0x49,
0x0d,0xc0,0x43,0x08,0x62,0xe0,0x42,0xb0,0xd9,0x01,0x82,0x3e,0xe0,0x0a,0x82,0x38,
0xe0,0x08,0x62,0xc5,0x62,0x45,0x62,0x05,0x61,0x85,0x61,0xc5,0x82,0x3d,0x83,0x3d,
0x2c,0x06,0xdb,0x01,0x82,0x7d,0xbd,0xf8,0x82,0x7c,0xbd,0xf8,0xb5,0x30,0xb0,0x8d,
0x46,0x6a,0xa9,0x08,0xf7,0xff,0xfa,0xe6,0x22,0x04,0xa9,0x04,0xa8,0x08,0xf7,0xff,
0xfa,0xe7,0xad,0x04,0x46,0x6c,0xa9,0x0c,0x46,0x28,0xf7,0xff,0xfa,0xe7,0x9a,0x0c,
0x2a,0x00,0xd0,0x10,0xf7,0xff,0xfa,0xe8,0x48,0xa7,0x68,0x00,0x88,0x41,0x29,0x01,
0xd0,0x0e,0x49,0xa6,0x20,0x02,0x5e,0x08,0x49,0xa5,0x68,0x09,0x61,0x88,0xf7,0xff,
0xfe,0xd7,0xb0,0x0d,0xbd,0x30,0x46,0x21,0x46,0x28,0xf7,0xff,0xfa,0xdb,0xe7,0xeb,
0x89,0xc0,0x28,0x00,0xd1,0xf3,0x46,0x69,0xa8,0x04,0xf7,0xff,0xfa,0xd9,0x48,0x9d,
0x79,0x00,0x07,0x40,0xd5,0xeb,0xf7,0xff,0xfa,0xd9,0xe7,0xe8,0xb5,0xf3,0x48,0x9a,
0x24,0x09,0x25,0x00,0x6a,0x00,0xb0,0x83,0x46,0x26,0x46,0x2f,0x02,0xc0,0xd5,0x05,
0x48,0x94,0x79,0x00,0x07,0xc0,0xd0,0x01,0x20,0x01,0xe0,0x00,0x20,0x00,0x90,0x02,
0x46,0x68,0xf7,0xff,0xf9,0xbd,0x28,0xff,0xd0,0x09,0x28,0x0c,0xda,0x07,0x49,0x8f,
0x18,0x41,0x7e,0x0c,0x00,0x41,0x48,0x8e,0x18,0x08,0x25,0x1c,0x5f,0x45,0xa8,0x01,
0xf7,0xff,0xf9,0xa2,0x28,0xff,0xd0,0x09,0x28,0x08,0xda,0x07,0x49,0x88,0x26,0x14,
0x18,0x42,0x00,0x40,0x18,0x40,0x27,0x34,0x57,0x96,0x5f,0xc7,0x48,0x82,0x6a,0x00,
0x02,0xc0,0xd5,0x03,0x98,0x02,0x28,0x00,0xd1,0x00,0x46,0x34,0x42,0xb4,0xdb,0x03,
0x98,0x02,0x28,0x00,0xd0,0x00,0x46,0x34,0xb2,0xe0,0xf7,0xff,0xfa,0x9d,0x48,0x7d,
0x75,0xc4,0x99,0x00,0x98,0x01,0x42,0x81,0xdb,0x00,0x90,0x00,0x42,0xbd,0xdd,0x00,
0x46,0x3d,0x48,0x75,0x6a,0x01,0x02,0x89,0xd5,0x03,0x99,0x03,0x9a,0x00,0x60,0x0a,
0xe0,0x06,0x49,0x75,0x22,0x0c,0x68,0x09,0x69,0x09,0x5e,0x8a,0x99,0x03,0x60,0x0a,
0x6a,0x00,0x02,0x40,0xd5,0x03,0x98,0x04,0x60,0x05,0xb0,0x05,0xbd,0xf0,0x98,0x04,
0x21,0x00,0x60,0x01,0xb0,0x05,0xbd,0xf0,0xb5,0xf3,0xb0,0xd3,0x25,0x00,0x46,0x04,
0x95,0x07,0xf7,0xff,0xfa,0x77,0x4e,0x63,0x88,0xb0,0x04,0x40,0xd5,0x05,0xaa,0x28,
0xa9,0x08,0x46,0x20,0x9b,0x54,0xf7,0xff,0xfa,0x73,0x46,0x20,0xf7,0xff,0xfa,0x76,
0xa9,0x08,0x46,0x20,0x9a,0x54,0xf7,0xff,0xfa,0x77,0xab,0x48,0x46,0x22,0xa9,0x4d,
0x98,0x54,0xf7,0xff,0xfa,0x77,0x4f,0x58,0x4c,0x5c,0x6a,0x38,0x02,0x00,0xd5,0x03,
0xa8,0x06,0xf7,0xff,0xfa,0x75,0xe0,0x04,0x68,0x20,0x21,0x0c,0x69,0x00,0x5e,0x41,
0x91,0x06,0x46,0x6b,0xa9,0x4d,0x9a,0x06,0x68,0x20,0xf7,0xff,0xfa,0x6f,0x6a,0x38,
0x4c,0x51,0x02,0xc0,0xd4,0x02,0x79,0x30,0x07,0xc0,0xd0,0x04,0xa9,0x07,0xa8,0x06,
0xf7,0xff,0xff,0x5c,0xe0,0x08,0x68,0x20,0x21,0x0c,0x69,0x00,0x5e,0x41,0x20,0x09,
0x95,0x07,0x91,0x06,0xf7,0xff,0xfa,0x30,0x49,0x49,0x20,0x1c,0x5e,0x08,0x99,0x06,
0x42,0x88,0xda,0x00,0x90,0x06,0x46,0x6b,0xa9,0x48,0x9a,0x06,0x68,0x20,0xf7,0xff,
0xfa,0x4d,0x48,0x44,0x88,0xc0,0x28,0x00,0xd0,0x02,0x46,0x68,0xf7,0xff,0xfa,0x4c,
0x46,0x6a,0xa9,0x48,0xa8,0x4d,0xf7,0xff,0xfa,0x4d,0x48,0x3f,0xa9,0x08,0x68,0x00,
0xf7,0xff,0xfa,0x4e,0xa8,0x08,0xf7,0xff,0xfa,0x51,0x48,0x31,0x68,0x00,0x69,0x44,
0x69,0x81,0x48,0x3a,0x68,0x00,0xf7,0xff,0xfa,0x4f,0x48,0x2d,0x68,0x00,0x61,0x44,
0x68,0x01,0x29,0x03,0xd1,0x1a,0x49,0x27,0x22,0x0c,0x5e,0x8a,0x69,0x81,0x48,0x34,
0x4c,0x27,0x68,0x00,0xf7,0xff,0xfa,0x46,0x21,0x05,0x07,0x09,0x83,0xc8,0x48,0x21,
0x22,0x0e,0x5e,0x82,0x68,0x20,0x69,0x41,0x48,0x2e,0x68,0x00,0xf7,0xff,0xfa,0x3a,
0x68,0x21,0x61,0x48,0x03,0x80,0x49,0x2c,0x0c,0x00,0x82,0x88,0x6a,0x38,0x4c,0x21,
0x03,0x40,0xd5,0x05,0x98,0x07,0xf7,0xff,0xf8,0xc3,0x89,0x20,0x90,0x05,0xe0,0x02,
0x48,0x26,0x90,0x05,0x81,0xe5,0x48,0x21,0x99,0x05,0x68,0x00,0x8a,0x40,0x43,0x48,
0x13,0xc0,0x49,0x23,0x90,0x06,0x42,0x88,0xd1,0x05,0x89,0x21,0x79,0xa0,0x40,0xc1,
0x1e,0x49,0x40,0x81,0x91,0x05,0x46,0x6b,0xaa,0x48,0xa8,0x08,0x99,0x54,0xf7,0xff,
0xfa,0x17,0x88,0xb0,0x04,0xc0,0xd5,0x01,0xf7,0xff,0xfa,0x18,0x20,0x00,0x1c,0x40,
0xb2,0xc0,0x28,0x20,0xd3,0xfb,0xb0,0x55,0xbd,0xf0,0x00,0x00,0x80,0x01,0xff,0xff,
0xbe,0x61,0x00,0x28,0x3e,0x80,0x20,0x00,0x00,0x04,0x20,0x00,0x3a,0x20,0x20,0x00,
0x00,0xc0,0x20,0x00,0x39,0xc0,0x20,0x00,0x3a,0xc0,0x20,0x00,0x3d,0xa0,0x20,0x00,
0x3e,0x40,0x20,0x00,0x38,0x40,0x20,0x00,0x00,0x34,0x20,0x00,0x00,0x30,0x20,0x00,
0x3e,0x00,0x20,0x00,0x3d,0xc0,0x20,0x00,0x00,0x2c,0x20,0x00,0x00,0x00,0x20,0x00,
0x00,0x88,0x20,0x00,0x00,0x84,0x20,0x00,0x38,0xa0,0x20,0x00,0x07,0xff,0x00,0x00,
0x07,0xfe,0x00,0x00,
};

struct aw_prof_desc g_dev0_0x2049_prof[] = {
	{
		.name = "Music",
		{
			{
				.data = dev0_0x2049_Music_reg,
				.len = sizeof(dev0_0x2049_Music_reg) / sizeof(char),
			},
			{
				.data = dev0_0x2049_Music_dsp_cfg,
				.len = sizeof(dev0_0x2049_Music_dsp_cfg) / sizeof(char),
			},
			{
				.data = dev0_0x2049_dsp_fw,
				.len = sizeof(dev0_0x2049_dsp_fw) / sizeof(char),
			},
		},
	},
};

struct aw_prof_info g_dev0_prof_info[] = {
	{
		.chip_id = 0x2049,
		.count = sizeof(g_dev0_0x2049_prof) / sizeof(struct aw_prof_desc),
		.prof_desc = g_dev0_0x2049_prof,
	},
};

#define AW_DEV0_MIX_CHIP_NUM    (1)


#endif