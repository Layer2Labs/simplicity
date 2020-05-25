#include "hashBlock.h"

/* A length-prefixed encoding of the SHA-256 compression function written in Simplicity.
 */
const unsigned char hashBlock[] = {
  0xea, 0x15, 0x50, 0x62, 0x48, 0x2c, 0x14, 0x0a, 0xd1, 0x40, 0xb0, 0xc4,
  0x54, 0x2a, 0x15, 0xc4, 0x58, 0x60, 0x28, 0x16, 0x01, 0x6b, 0xd6, 0x20,
  0x5a, 0x02, 0xd5, 0xb4, 0x4d, 0x02, 0xa1, 0x66, 0x40, 0xa1, 0x24, 0x16,
  0x0a, 0x05, 0x20, 0xa0, 0x58, 0xe2, 0x26, 0x02, 0xa1, 0x5c, 0x44, 0xc4,
  0x54, 0x2d, 0x39, 0x08, 0x16, 0xcd, 0xa2, 0x6c, 0x13, 0x48, 0xb0, 0x0b,
  0x32, 0x0c, 0x34, 0x30, 0xc3, 0x0e, 0x38, 0x59, 0x90, 0x61, 0x87, 0x82,
  0x83, 0xe2, 0x61, 0xe0, 0xa1, 0x06, 0x18, 0x78, 0x28, 0x3e, 0x26, 0x1e,
  0x0a, 0x10, 0x61, 0x87, 0x82, 0x83, 0xe2, 0x61, 0xe0, 0xa1, 0x06, 0x18,
  0x78, 0x28, 0x3e, 0x26, 0x1e, 0x0a, 0x10, 0x61, 0x87, 0x82, 0x83, 0xe2,
  0x61, 0xe0, 0xa1, 0x24, 0x09, 0xac, 0xe1, 0x6d, 0xc1, 0x25, 0x1c, 0x4a,
  0x70, 0x68, 0x19, 0x85, 0xc1, 0x47, 0x07, 0x58, 0x1c, 0x00, 0x2e, 0x0a,
  0x17, 0x11, 0x70, 0x73, 0x60, 0x7e, 0x18, 0x28, 0x37, 0x0d, 0x37, 0x0a,
  0x13, 0x00, 0x35, 0x0b, 0x01, 0xf8, 0x89, 0x25, 0x1c, 0x1c, 0x07, 0xe2,
  0x31, 0x40, 0x34, 0x01, 0xb8, 0x0e, 0x04, 0x17, 0x13, 0x0f, 0xc5, 0xa6,
  0xe2, 0xf1, 0x68, 0x0a, 0x81, 0x88, 0x1c, 0x28, 0x0e, 0x35, 0x0b, 0x8e,
  0x87, 0xe3, 0xf3, 0x8d, 0xc8, 0xa3, 0xea, 0x14, 0x1b, 0x8d, 0xcd, 0xc6,
  0x87, 0xe3, 0xd1, 0x40, 0x1c, 0x10, 0x58, 0x80, 0xde, 0x0d, 0x01, 0x6c,
  0x1f, 0x82, 0x9f, 0x79, 0xb9, 0x1e, 0x28, 0x16, 0x00, 0x64, 0x07, 0x05,
  0x03, 0x92, 0xa1, 0x72, 0x68, 0x7e, 0x4f, 0x9c, 0x6e, 0x55, 0x1b, 0x92,
  0x07, 0x0a, 0x8d, 0xc9, 0x83, 0x72, 0x54, 0xfc, 0x95, 0x14, 0x01, 0xc1,
  0x85, 0x88, 0x0e, 0x00, 0x0d, 0x01, 0x6d, 0x1f, 0x61, 0xf8, 0x01, 0xb9,
  0x60, 0x28, 0x16, 0x00, 0x64, 0x07, 0x06, 0x03, 0x96, 0xc1, 0x72, 0xec,
  0x7e, 0x60, 0x0e, 0x37, 0x31, 0x66, 0xe5, 0x41, 0xc2, 0xa3, 0x72, 0xe4,
  0xdc, 0xb6, 0x3f, 0x2b, 0x45, 0x00, 0x70, 0x61, 0x62, 0x03, 0x80, 0x03,
  0x40, 0x5b, 0x47, 0xd8, 0x7e, 0x00, 0x6e, 0x64, 0x45, 0x02, 0xc0, 0x0c,
  0x80, 0xe0, 0xc0, 0x73, 0x2e, 0x17, 0x33, 0x83, 0xf3, 0x42, 0x71, 0xb9,
  0xac, 0x37, 0x30, 0x07, 0x0a, 0x8d, 0xcc, 0xd1, 0xb9, 0x97, 0x3f, 0x30,
  0xa2, 0x80, 0x38, 0x30, 0xb1, 0x01, 0xc0, 0x01, 0xa0, 0x2d, 0xa3, 0xec,
  0x3f, 0x00, 0x37, 0x36, 0x42, 0x81, 0x60, 0x06, 0x40, 0x70, 0x61, 0xf9,
  0xc0, 0x04, 0x03, 0x9b, 0xa1, 0xf9, 0xc3, 0x38, 0x5c, 0xcd, 0xf3, 0x3c,
  0x71, 0xc7, 0xe6, 0x74, 0xe3, 0x73, 0x48, 0x60, 0xa8, 0x59, 0x0d, 0xa4,
  0xdc, 0xd2, 0x1f, 0x9a, 0xa1, 0x40, 0xb0, 0x18, 0x2c, 0xc6, 0xde, 0x6d,
  0xc7, 0xda, 0x28, 0x16, 0x03, 0xe8, 0x14, 0x0b, 0x40, 0x5c, 0xd5, 0x73,
  0x5a, 0x71, 0x87, 0xe6, 0xb0, 0xc3, 0x73, 0x66, 0x70, 0xa8, 0x59, 0x0d,
  0xa4, 0xdc, 0xd9, 0x9f, 0x9b, 0x91, 0x40, 0xb0, 0x1c, 0x2c, 0xc7, 0x1f,
  0x80, 0x1c, 0x7e, 0x00, 0x71, 0xb8, 0x01, 0x82, 0xa1, 0x64, 0x36, 0xc3,
  0x05, 0x42, 0xd8, 0x36, 0xe3, 0x6d, 0x36, 0xc3, 0xeb, 0x14, 0x0b, 0x01,
  0xf5, 0x0a, 0x05, 0xa0, 0x2d, 0x43, 0xf0, 0xe1, 0x71, 0x08, 0x5c, 0x37,
  0x8a, 0x0e, 0x15, 0x18, 0x6e, 0x24, 0x38, 0x5b, 0x86, 0xcc, 0xe1, 0x50,
  0xb3, 0x1f, 0x49, 0xb4, 0x0b, 0x87, 0x8d, 0x98, 0xa0, 0x58, 0x85, 0x98,
  0x5c, 0x14, 0x2e, 0x3d, 0x1b, 0xa0, 0x40, 0xfd, 0x02, 0x07, 0xe8, 0x10,
  0x14, 0x0b, 0x01, 0xba, 0x03, 0x0f, 0xd0, 0x18, 0x7e, 0x80, 0xc1, 0x40,
  0xb0, 0x1b, 0xa0, 0x20, 0xfd, 0x01, 0x07, 0xe8, 0x08, 0x14, 0x0b, 0x01,
  0xba, 0x01, 0x0f, 0xd0, 0x08, 0x7e, 0x80, 0x41, 0x40, 0xb0, 0x1b, 0xa0,
  0x00, 0xfd, 0x00, 0x07, 0xe8, 0x00, 0x14, 0x0b, 0x01, 0xfa, 0x01, 0x8f,
  0xcf, 0x98, 0x60, 0xe0, 0xdc, 0x0e, 0x0d, 0x03, 0x40, 0xdd, 0x01, 0x27,
  0xe8, 0x09, 0x3f, 0x40, 0x48, 0xa0, 0x58, 0x00, 0xcc, 0x59, 0x81, 0xc1,
  0x46, 0xe8, 0x1a, 0x3f, 0x40, 0xd1, 0xfa, 0x06, 0x85, 0x02, 0xc0, 0x06,
  0x62, 0xcc, 0x0e, 0x22, 0x1b, 0xa0, 0xac, 0xfd, 0x05, 0x67, 0xe8, 0x2b,
  0x14, 0x0b, 0x00, 0x19, 0x8b, 0x30, 0x38, 0xbc, 0x6e, 0x83, 0xc3, 0xf4,
  0x1e, 0x1f, 0xa0, 0xf0, 0x50, 0x2c, 0x00, 0x66, 0x2c, 0xc0, 0xe3, 0xc1,
  0xba, 0x13, 0x4f, 0xd0, 0x9a, 0x7e, 0x84, 0xd1, 0x40, 0xb0, 0x01, 0x98,
  0xb3, 0x03, 0x91, 0x20, 0x74, 0x30, 0x0d, 0xcd, 0x09, 0xfa, 0x18, 0xc5,
  0x02, 0xe8, 0x64, 0x1f, 0xa0, 0xd8, 0x2e, 0x81, 0x90, 0x71, 0xc0, 0x1c,
  0x59, 0x05, 0x00, 0xe4, 0x00, 0x1c, 0x4f, 0x05, 0x00, 0xe4, 0x40, 0x1c,
  0x45, 0x05, 0x00, 0xe4, 0x80, 0x1c, 0x36, 0x0a, 0x01, 0xc9, 0x80, 0x38,
  0x44, 0x14, 0x03, 0x81, 0x05, 0xc1, 0xc0, 0x73, 0x74, 0x2e, 0x6e, 0x07,
  0x01, 0xcd, 0xe9, 0x87, 0x0b, 0x9b, 0xf0, 0x1c, 0xe0, 0x9b, 0xa1, 0xfc,
  0xe1, 0x51, 0xb8, 0x80, 0xc3, 0x85, 0x80, 0xdc, 0xe3, 0x1f, 0xa2, 0x20,
  0x50, 0x7e, 0x27, 0x14, 0x18, 0x70, 0xb4, 0x10, 0x70, 0xb8, 0xc0, 0x7e,
  0x85, 0xe0, 0xb9, 0x46, 0x71, 0x7a, 0x18, 0x8e, 0x0f, 0x29, 0xc7, 0x07,
  0x10, 0x39, 0x56, 0x07, 0x27, 0xe0, 0xa0, 0x1c, 0xb3, 0x03, 0x93, 0x50,
  0x50, 0x0e, 0x5d, 0x81, 0xc9, 0x58, 0x28, 0x07, 0x30, 0x60, 0x72, 0x42,
  0x0a, 0x01, 0xcc, 0x58, 0x1c, 0x8b, 0x82, 0x80, 0x70, 0x81, 0xb9, 0xdf,
  0x17, 0x3c, 0x41, 0x73, 0xbd, 0xcf, 0x49, 0x82, 0xa3, 0xf3, 0xc8, 0x2e,
  0x76, 0xc7, 0xc4, 0x50, 0x2c, 0x42, 0xe6, 0xab, 0x9b, 0x23, 0x8f, 0xcd,
  0x90, 0x9c, 0xd3, 0x8a, 0x8d, 0x89, 0xb9, 0xb6, 0x13, 0x9b, 0x21, 0x50,
  0xb1, 0x0b, 0x9e, 0x6e, 0x7b, 0x45, 0x02, 0xda, 0x03, 0x94, 0x60, 0xe8,
  0x02, 0x0b, 0xa3, 0x10, 0x60, 0x1d, 0x00, 0xe2, 0xe1, 0xa3, 0x00, 0xe8,
  0x0a, 0x37, 0x2a, 0x05, 0x06, 0xe3, 0xb1, 0x40, 0xba, 0x33, 0x39, 0x0a,
  0x07, 0x40, 0x81, 0xf9, 0x5c, 0x28, 0x3f, 0x20, 0x45, 0x02, 0xcc, 0x0e,
  0x43, 0x05, 0xc9, 0x2e, 0x46, 0x18, 0x6e, 0x46, 0x9f, 0xa0, 0x5c, 0xc3,
  0xf4, 0x6c, 0x8a, 0x05, 0x88, 0x59, 0x8f, 0xa4, 0xfc, 0x95, 0x3e, 0x83,
  0xf3, 0xf2, 0x27, 0x3e, 0x02, 0xe7, 0xc3, 0xa0, 0x04, 0xc1, 0x51, 0xb9,
  0xfe, 0x13, 0x9e, 0xb3, 0xe2, 0x28, 0x16, 0x21, 0x71, 0xcf, 0x1e, 0x8b,
  0xa2, 0xe3, 0xa2, 0xe0, 0x4e, 0x8b, 0x83, 0x0c, 0x30, 0x4e, 0x80, 0xa3,
  0x04, 0xe8, 0x0a, 0x30, 0x5c, 0xfb, 0xf4, 0x05, 0x8a, 0x05, 0xb0, 0x2d,
  0xc0, 0x39, 0x9b, 0x07, 0x41, 0xd0, 0x5d, 0x1f, 0x83, 0x0c, 0x30, 0x0e,
  0x84, 0x13, 0xf3, 0x3c, 0x2e, 0x7d, 0x79, 0xf3, 0x17, 0x3e, 0x1c, 0xfe,
  0x0a, 0x05, 0xd0, 0x1f, 0xd0, 0x1a, 0x2e, 0x00, 0x49, 0x02, 0x04, 0x08,
  0x27, 0x45, 0xe8, 0x81, 0x3a, 0x3b, 0x0c, 0x30, 0x4e, 0x84, 0xe1, 0x66,
  0x30, 0xc1, 0x72, 0x9f, 0x94, 0x82, 0x81, 0x70, 0x10, 0xb8, 0x20, 0x0e,
  0x6e, 0x81, 0xc2, 0x42, 0xe4, 0x88, 0xe0, 0x3a, 0x17, 0x85, 0xc3, 0x80,
  0x74, 0x30, 0x0b, 0x8f, 0xc2, 0xe4, 0x08, 0x5c, 0x83, 0x0b, 0x90, 0xa3,
  0x8e, 0x17, 0x24, 0x42, 0xe9, 0x15, 0x05, 0xd2, 0x2f, 0xe9, 0x1c, 0x8b,
  0xa4, 0x77, 0xd2, 0x3b, 0x14, 0x0b, 0xa4, 0x79, 0xd2, 0x3a, 0x17, 0x48,
  0xef, 0xa4, 0x76, 0x28, 0x16, 0x01, 0x74, 0x90, 0x3a, 0x48, 0x02, 0x68,
  0x16, 0x50, 0x50, 0x2c, 0x42, 0x6e, 0x17, 0x49, 0x1b, 0xa4, 0x78, 0x27,
  0x48, 0xf0, 0x4d, 0xa2, 0xe9, 0x24, 0xf4, 0x92, 0x84, 0xe0, 0x22, 0xe9,
  0x20, 0xf4, 0x90, 0x44, 0xe0, 0x42, 0xa1, 0x64, 0x13, 0x84, 0x0b, 0xa4,
  0x97, 0xd2, 0x45, 0x17, 0x49, 0x4b, 0xa4, 0x8e, 0x2e, 0x10, 0x15, 0x0b,
  0xa4, 0xa5, 0xd2, 0x4a, 0x17, 0x09, 0x0b, 0x86, 0x70, 0xd1, 0x40, 0xb1,
  0x09, 0xc4, 0x42, 0xe2, 0x0e, 0x92, 0x78, 0xb8, 0x5f, 0x49, 0x60, 0x50,
  0x2e, 0x92, 0xd7, 0x49, 0x68, 0x4a, 0x2a, 0x13, 0x8a, 0x45, 0xd2, 0x56,
  0xda, 0x2e, 0x92, 0xef, 0x11, 0x0a, 0x05, 0xd2, 0x5a, 0xe9, 0x31, 0x09,
  0xc0, 0x45, 0xc2, 0xfa, 0x4b, 0xc2, 0x81, 0x62, 0x13, 0x8c, 0x85, 0xc3,
  0xf8, 0xc4, 0x5d, 0x26, 0x8e, 0x2f, 0x14, 0x0b, 0x8c, 0xf8, 0x9c, 0x5c,
  0x4b, 0xc6, 0x82, 0x81, 0x60, 0x13, 0x8e, 0x85, 0xc5, 0x3b, 0x85, 0xc6,
  0xdd, 0x27, 0x21, 0x40, 0xb8, 0xab, 0x8a, 0x85, 0xd2, 0x6b, 0xe0, 0x42,
  0x81, 0x60, 0x13, 0x90, 0x42, 0xe9, 0x3b, 0xf1, 0x30, 0xb8, 0x3f, 0x49,
  0xd8, 0x50, 0x2e, 0x40, 0x74, 0x9e, 0x85, 0xc5, 0x01, 0x50, 0x9c, 0x89,
  0x17, 0x16, 0xf4, 0x9e, 0x45, 0xd2, 0x7d, 0xe9, 0x3f, 0x8a, 0x05, 0xc4,
  0x1c, 0x8a, 0x17, 0x23, 0x38, 0xfc, 0x50, 0x2c, 0x02, 0x72, 0x44, 0x5c,
  0x8f, 0xe4, 0x78, 0xb9, 0x1b, 0xc8, 0xe1, 0x40, 0xba, 0x51, 0x7c, 0x83,
  0x17, 0x24, 0x7a, 0x51, 0x02, 0x81, 0x60, 0x13, 0x93, 0x22, 0xe9, 0x48,
  0x71, 0xe8, 0x9b, 0x45, 0xc9, 0x9e, 0x45, 0x0b, 0xa5, 0x27, 0xd2, 0x8c,
  0x14, 0x0b, 0x00, 0x9c, 0xa0, 0x17, 0x1a, 0x72, 0x6c, 0x5c, 0x90, 0xe4,
  0x98, 0xa0, 0x5c, 0xa2, 0xe9, 0x4c, 0x0b, 0x93, 0x9c, 0x96, 0x14, 0x0b,
  0x00, 0x9c, 0xa8, 0x17, 0x4a, 0x57, 0x94, 0xe2, 0xe4, 0xc7, 0x29, 0x45,
  0x02, 0xe5, 0x37, 0x24, 0x85, 0xc9, 0x9e, 0x95, 0x18, 0xa0, 0x58, 0x04,
  0xe5, 0x80, 0xb9, 0x59, 0xd2, 0xa5, 0x13, 0x48, 0xb9, 0x1f, 0xc1, 0x85,
  0x02, 0x72, 0xd4, 0x5c, 0xa7, 0xe9, 0x52, 0x89, 0xb8, 0x5c, 0x9e, 0xe9,
  0x52, 0x09, 0xa0, 0x54, 0x27, 0x2e, 0xc5, 0xca, 0xde, 0x59, 0x89, 0xc5,
  0xe2, 0xe9, 0x56, 0xf4, 0xad, 0x05, 0xc9, 0x2e, 0x52, 0x8a, 0x05, 0x80,
  0x4e, 0x60, 0x85, 0xcb, 0xde, 0x5d, 0x09, 0xc0, 0xc5, 0xd2, 0xb1, 0xe5,
  0x98, 0xb9, 0x81, 0xe5, 0x60, 0xa0, 0x58, 0x04, 0xe6, 0x24, 0x5c, 0x80,
  0xe3, 0x71, 0x72, 0xdf, 0xa5, 0x7e, 0x2e, 0x61, 0xf9, 0x87, 0x14, 0x0b,
  0x00, 0x9c, 0xc7, 0x8b, 0x96, 0x7c, 0xbe, 0x13, 0x98, 0x11, 0x72, 0xd7,
  0x98, 0xd1, 0x72, 0xe7, 0x98, 0xa1, 0x40, 0xb0, 0x09, 0xcc, 0xb0, 0xba,
  0x58, 0xdc, 0xc1, 0x89, 0xc7, 0x62, 0xe5, 0x67, 0x4b, 0x20, 0x4e, 0x4e,
  0x0a, 0x84, 0xe6, 0x70, 0x5c, 0xcd, 0x73, 0x30, 0x2e, 0x67, 0x39, 0x98,
  0x14, 0x0b, 0x98, 0xce, 0x96, 0x60, 0x9c, 0x6e, 0x2a, 0x13, 0x9a, 0x31,
  0x74, 0xb6, 0xb9, 0x8a, 0x17, 0x33, 0x9d, 0x2d, 0x11, 0x40, 0xb9, 0x75,
  0xcb, 0xa1, 0x73, 0x2d, 0xcc, 0xa0, 0xa0, 0x58, 0x04, 0xe6, 0xac, 0x5d,
  0x2d, 0xee, 0x67, 0x45, 0xca, 0xe0, 0xb9, 0xab, 0xe9, 0x71, 0x0b, 0x9a,
  0xce, 0x64, 0x85, 0x02, 0xc0, 0x27, 0x36, 0x42, 0xe6, 0x7f, 0x98, 0x61,
  0x39, 0x52, 0x2e, 0x66, 0xf9, 0xa3, 0x17, 0x18, 0x05, 0x42, 0x73, 0x70,
  0x2e, 0x6c, 0xfa, 0x5d, 0x62, 0xe1, 0x81, 0x73, 0x3d, 0xd2, 0xf1, 0x17,
  0x36, 0xfc, 0xc7, 0x8a, 0x05, 0x80, 0x4e, 0x6f, 0xc5, 0xcd, 0xf7, 0x36,
  0xe2, 0x73, 0x3c, 0x2e, 0x97, 0xc7, 0x37, 0x22, 0xe6, 0xfb, 0xa5, 0xf2,
  0x28, 0x16, 0x01, 0x39, 0xc6, 0x17, 0x37, 0x1c, 0xe0, 0x8b, 0x90, 0x41,
  0x73, 0x87, 0xce, 0x38, 0xb9, 0xc1, 0xe9, 0x7e, 0x0a, 0x05, 0x80, 0x4e,
  0x73, 0x45, 0xcc, 0xbf, 0x28, 0x45, 0xd2, 0xfa, 0xe4, 0x88, 0xa0, 0x4e,
  0x74, 0x45, 0xce, 0x6f, 0x37, 0xc2, 0xe5, 0x38, 0x5c, 0xdd, 0x74, 0xc1,
  0x84, 0xe2, 0x71, 0x50, 0x9c, 0xeb, 0x8b, 0xa6, 0x19, 0xd3, 0x07, 0x17,
  0x37, 0x9d, 0x30, 0x51, 0x40, 0xb9, 0xc1, 0xe9, 0x88, 0x8a, 0x85, 0x42,
  0x73, 0xbc, 0x2e, 0x77, 0x7a, 0x62, 0xa2, 0xe2, 0x50, 0xb9, 0xdb, 0xe7,
  0x34, 0x4e, 0x65, 0x45, 0x42, 0x73, 0xc8, 0x2e, 0x72, 0x39, 0xd6, 0x17,
  0x4c, 0x6b, 0x9e, 0x41, 0x40, 0xb9, 0xcb, 0xe9, 0x8e, 0x0b, 0xa6, 0x37,
  0xcd, 0xe0, 0xa0, 0x58, 0x04, 0xe7, 0xb0, 0x5d, 0x31, 0xce, 0x76, 0xc4,
  0xe4, 0xe0, 0xb9, 0xe6, 0xe7, 0xa8, 0x5c, 0x76, 0x15, 0x09, 0xcf, 0x90,
  0xb9, 0xf0, 0xe9, 0x92, 0x89, 0xac, 0x5c, 0xf7, 0xf3, 0xc6, 0x2e, 0x99,
  0x57, 0x4c, 0xa0, 0x50, 0x2c, 0x02, 0x73, 0xf2, 0x2e, 0x78, 0x39, 0xf7,
  0x13, 0x85, 0x0b, 0xa6, 0x65, 0xd3, 0x2e, 0x17, 0x3f, 0x5d, 0x32, 0xc1,
  0x40, 0xb0, 0x09, 0xd0, 0x00, 0x2e, 0x79, 0xf9, 0xed, 0x17, 0x27, 0x82,
  0xe8, 0x01, 0xe8, 0x01, 0x17, 0x11, 0x85, 0x42, 0x74, 0x03, 0x0b, 0x9d,
  0xae, 0x99, 0xd8, 0x9c, 0xf5, 0x0b, 0xa0, 0x13, 0xa6, 0x6a, 0x27, 0x12,
  0x8a, 0x84, 0xe8, 0x0c, 0x17, 0x3c, 0x7c, 0xd9, 0x8b, 0x97, 0x9c, 0xe0,
  0x8a, 0x04, 0xe8, 0x10, 0x17, 0x3f, 0xbc, 0xfa, 0x09, 0xc9, 0x21, 0x74,
  0x02, 0x73, 0xcc, 0x27, 0x31, 0x22, 0xa1, 0x3a, 0x05, 0x85, 0xd3, 0x4b,
  0xe8, 0x03, 0x17, 0x29, 0x42, 0xe7, 0xff, 0x9f, 0xf1, 0x74, 0xd2, 0x7a,
  0x06, 0x05, 0x02, 0xc0, 0x27, 0x40, 0xe8, 0xba, 0x00, 0x30, 0x17, 0x3e,
  0x5d, 0x03, 0xa2, 0xe9, 0xab, 0x74, 0x0d, 0x0a, 0x05, 0x80, 0x4e, 0x82,
  0x31, 0x74, 0x05, 0x74, 0x0f, 0x8b, 0x94, 0x41, 0x74, 0x09, 0x74, 0xd6,
  0x05, 0xcb, 0x90, 0xa8, 0x4e, 0x82, 0x91, 0x74, 0x0c, 0x74, 0xd7, 0x84,
  0xe8, 0x01, 0x17, 0x4d, 0x83, 0xa6, 0xb0, 0x2e, 0x14, 0x15, 0x09, 0xd0,
  0x5e, 0x2e, 0x81, 0xee, 0x81, 0x61, 0x74, 0xd7, 0x7a, 0x6b, 0xa2, 0x81,
  0x73, 0x8f, 0xcf, 0x48, 0xa0, 0x4e, 0x83, 0x51, 0x74, 0x16, 0xf4, 0xd9,
  0x45, 0xd0, 0x63, 0xd0, 0x50, 0x28, 0x17, 0x4d, 0xaf, 0xa0, 0xd8, 0x4e,
  0x7b, 0x45, 0x42, 0x74, 0x1e, 0x0b, 0xa6, 0xe3, 0xd0, 0x6e, 0x27, 0x1e,
  0x8b, 0xa0, 0xaf, 0xa0, 0xe4, 0x4e, 0x20, 0x15, 0x09, 0xd0, 0x84, 0x2e,
  0x0f, 0xd0, 0x28, 0x2e, 0x9b, 0xc7, 0x41, 0x50, 0xb9, 0xd4, 0x0a, 0x84,
  0xe8, 0x47, 0x17, 0x4d, 0xf3, 0xa0, 0xe4, 0x4e, 0x9b, 0xd0, 0xba, 0x11,
  0x3a, 0x07, 0x45, 0xc4, 0xe1, 0x50, 0x9d, 0x09, 0xa2, 0xe9, 0xbe, 0xf4,
  0x10, 0x8b, 0x99, 0x40, 0xba, 0x70, 0xdd, 0x38, 0x61, 0x74, 0xe0, 0x3a,
  0x13, 0x05, 0x02, 0xc0, 0x27, 0x42, 0xa0, 0xba, 0x70, 0xfd, 0x38, 0x41,
  0x39, 0xb8, 0x17, 0x42, 0xaf, 0x42, 0x90, 0x9d, 0x0a, 0x82, 0xa1, 0x3a,
  0x16, 0x85, 0xd0, 0x85, 0xd0, 0x4e, 0x2e, 0x85, 0xae, 0x9c, 0x70, 0xba,
  0x02, 0x82, 0xa1, 0x3a, 0x17, 0xc5, 0xd3, 0x8f, 0xe8, 0x51, 0x13, 0xa0,
  0x98, 0x5d, 0x04, 0x9c, 0xe5, 0x8a, 0x04, 0xe8, 0x64, 0x17, 0x4e, 0x47,
  0xa1, 0x80, 0x5d, 0x08, 0xe1, 0x74, 0xe5, 0xba, 0x17, 0x85, 0xcc, 0xb0,
  0x54, 0x27, 0x43, 0x50, 0xba, 0x14, 0x7a, 0x0f, 0x84, 0xe6, 0x1c, 0x5c,
  0xed, 0x73, 0x46, 0x28, 0x13, 0xa1, 0xbc, 0x5d, 0x08, 0x7d, 0x0c, 0xe2,
  0xe8, 0x14, 0x0b, 0xa1, 0x8f, 0xa1, 0x8c, 0x5d, 0x08, 0xa1, 0x50, 0x9d,
  0x0e, 0xa2, 0xe9, 0xd6, 0x74, 0x24, 0x89, 0xd0, 0xc4, 0x2e, 0x69, 0x39,
  0xe5, 0x14, 0x09, 0xd0, 0xf4, 0x2e, 0x78, 0xb9, 0xbf, 0x16, 0x5c, 0xd2,
  0x0a, 0x04, 0xe8, 0x7e, 0x17, 0x42, 0x97, 0x43, 0xd0, 0x9c, 0xde, 0x8b,
  0xa1, 0xef, 0xa1, 0x90, 0x4e, 0x38, 0x15, 0x09, 0xd1, 0x08, 0x2e, 0x9d,
  0x8f, 0x43, 0xf8, 0x9d, 0x07, 0x02, 0xe8, 0x7e, 0xe8, 0x7e, 0x17, 0x43,
  0xff, 0x43, 0xa0, 0xa0, 0x58, 0x04, 0xe8, 0x8b, 0x17, 0x44, 0x4f, 0x44,
  0x30, 0xba, 0x17, 0x82, 0xe8, 0x7f, 0xe8, 0x8c, 0x17, 0x2a, 0xc2, 0xa1,
  0x3a, 0x24, 0x45, 0xd0, 0x89, 0xcf, 0x68, 0xba, 0x22, 0xba, 0x79, 0x22,
  0xe5, 0x70, 0x54, 0x27, 0x44, 0xb0, 0xba, 0x04, 0x7a, 0x79, 0x42, 0xe8,
  0x8f, 0xe8, 0x7b, 0x17, 0x11, 0x85, 0x42, 0x74, 0x4d, 0x81, 0xd1, 0xda,
  0x0c, 0xc0, 0xda, 0x07, 0x04, 0x03, 0x86, 0x01, 0xc4, 0x60, 0x71, 0x40,
  0x1c, 0x5c, 0x07, 0x1a, 0x81, 0xc7, 0x60, 0x72, 0x08, 0x0e, 0x44, 0x01,
  0xc8, 0xe0, 0x39, 0x2a, 0x07, 0x27, 0x40, 0xe5, 0x20, 0x1c, 0xaa, 0x03,
  0x96, 0x20, 0x72, 0xe4, 0x0e, 0x60, 0x00, 0xe6, 0x1c, 0x0e, 0x63, 0x80,
  0xe6, 0x54, 0x0e, 0x67, 0x40, 0xe6, 0x90, 0x0e, 0x6a, 0x40, 0xe6, 0xc0,
  0x0e, 0x6d, 0xc0, 0xe6, 0xfc, 0x0e, 0x71, 0xc0, 0xe7, 0x38, 0x0e, 0x75,
  0xc0, 0xe7, 0x78, 0x0e, 0x79, 0x80, 0xe7, 0xb4, 0x0e, 0x7c, 0x80, 0xe7,
  0xe8, 0x0e, 0x80, 0x20, 0x3a, 0x02, 0x80, 0xe8, 0x11, 0x03, 0xa0, 0x64,
  0x0e, 0x82, 0x20, 0x3a, 0x0a, 0x80, 0xe8, 0x31, 0x03, 0xa0, 0xe4, 0x0e,
  0x84, 0x00, 0x3a, 0x12, 0x00, 0xe8, 0x50, 0x03, 0xa1, 0x5c, 0x0e, 0x85,
  0xd0, 0x3a, 0x19, 0x80, 0xe8, 0x6f, 0x03, 0xa1, 0xdc, 0x0e, 0x88, 0x00,
  0x3a, 0x22, 0x40, 0xe8, 0x91, 0x03, 0xa2, 0x68, 0x0e, 0x8a, 0x30, 0x3a,
  0x2b, 0x40, 0xe8, 0xb5, 0x03, 0xa3, 0x00, 0x0e, 0x8c, 0xb0, 0x3a, 0x36,
  0x40, 0xea, 0x05, 0xc2, 0xea, 0x0b, 0x82, 0xea, 0x00, 0x3a, 0x45, 0x00,
  0x74, 0xd1, 0x4d, 0xd2, 0x3b, 0x3f, 0x48, 0xf0, 0x50, 0x07, 0x4d, 0x24,
  0x58, 0x8d, 0xd2, 0xa7, 0x30, 0xf0, 0x50, 0x07, 0x4d, 0x3c, 0xdd, 0x28,
  0x73, 0xf4, 0xa2, 0x05, 0x00, 0x74, 0xd4, 0xc5, 0x88, 0x5a, 0xc6, 0xe9,
  0x46, 0x1f, 0xa5, 0x1a, 0x28, 0x03, 0xa6, 0xb2, 0x6e, 0x92, 0x49, 0xfa,
  0x49, 0x42, 0x80, 0x3a, 0x6b, 0xa2, 0xc4, 0x6e, 0x90, 0xe9, 0xfa, 0x43,
  0xc2, 0x80, 0x3a, 0x6c, 0x42, 0xe9, 0x24, 0x74, 0x90, 0x40, 0xe9, 0xb2,
  0x0a, 0x85, 0xa0, 0x2e, 0x04, 0x07, 0x12, 0x80
};

const size_t sizeof_hashBlock = sizeof(hashBlock);

/* The commitment Merkle root of the above hashBlock Simplicity expression. */
const uint32_t hashBlock_cmr[] = {
  0x818e6724u, 0xdd7a814au, 0xf8ef8560u, 0xf6d7a56bu, 0x6421872au, 0xf9e8bf77u, 0xb429598du, 0x9f2fecfeu
};

/* The witness Merkle root of the above hashBlock Simplicity expression. */
const uint32_t hashBlock_wmr[] = {
  0x50a6b44cu, 0xca24ce98u, 0xf2e19185u, 0x6cd70d3bu, 0x143e4410u, 0xf10aad3eu, 0x39bfc86cu, 0x01106bccu
};
