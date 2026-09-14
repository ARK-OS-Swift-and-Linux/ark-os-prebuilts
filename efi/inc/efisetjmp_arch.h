/*
 * Copyright 2026 Aarav Ravindra Kharade
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef GNU_EFI_SETJMP_ARCH_H
#define GNU_EFI_SETJMP_ARCH_H

#if defined(__x86_64__)
#include "x86_64/efisetjmp_arch.h"
#elif defined(__aarch64__)
#include "aarch64/efisetjmp_arch.h"
#elif defined(__riscv) && __riscv_xlen == 64
#include "riscv64/efisetjmp_arch.h"
#elif defined(__i386__)
#include "ia32/efisetjmp_arch.h"
#elif defined(__ia64__)
#include "ia64/efisetjmp_arch.h"
#elif defined(__loongarch64)
#include "loongarch64/efisetjmp_arch.h"
#elif defined(__mips64__)
#include "mips64el/efisetjmp_arch.h"
#elif defined(__arm__)
#include "arm/efisetjmp_arch.h"
#endif

#endif /* GNU_EFI_SETJMP_ARCH_H */
