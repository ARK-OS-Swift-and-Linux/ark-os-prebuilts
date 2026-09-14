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

#ifndef GNU_EFI_SETJMP_H
#define GNU_EFI_SETJMP_H

#if !defined(_MSC_VER)

#include "eficompiler.h"
#include "efisetjmp_arch.h"

extern UINTN base_setjmp(jmp_buf env) __attribute__((returns_twice));
extern VOID base_longjmp(jmp_buf env, UINTN value) EFI_NORETURN;

#define setjmp(env) (int)base_setjmp(env)
#define longjmp(env, value) base_longjmp(env, (UINTN)value)

#endif /* _MSC_VER */

#endif /* GNU_EFI_SETJMP_H */

