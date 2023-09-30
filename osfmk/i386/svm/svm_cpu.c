/*
 * Copyright (C) 2023 Huy Duong
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the Apple Public Source License
 * version 2.0 (the "License"), as published by Apple Inc.
 *
 * You should have received a copy of the License along with this
 * program; if not, you can obtain one at
 * http://www.opensource.apple.com/apsl/
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License for more details.
 */

#include <i386/cpuid.h>
#include <i386/svm/svm_cpu.h>

static inline boolean_t
svm_is_available(void)
{
	return 0 != (cpuid_extfeatures() & CPUID_EXTFEATURE_SVM);
}

boolean_t
svm_hv_support()
{
	if (!svm_is_available()) {
		return FALSE;
	}

	return TRUE;
}
