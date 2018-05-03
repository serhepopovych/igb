/* SPDX-License-Identifier: @SPDX@ */
/* Copyright(c) 2007 - 2023 Intel Corporation. */

#ifndef _KCOMPAT_GCC_H_
#define _KCOMPAT_GCC_H_

#ifdef __has_attribute
#if __has_attribute(__fallthrough__)
# define fallthrough __attribute__((__fallthrough__))
#else
# define fallthrough do {} while (0)  /* fallthrough */
#endif /* __has_attribute(fallthrough) */
#else
# define fallthrough do {} while (0)  /* fallthrough */
#endif /* __has_attribute */

#endif /* _KCOMPAT_GCC_H_ */