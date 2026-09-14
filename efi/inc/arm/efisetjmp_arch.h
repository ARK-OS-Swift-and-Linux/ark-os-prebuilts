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

#ifndef GNU_EFI_ARM_SETJMP_H
#define GNU_EFI_ARM_SETJMP_H

#define JMPBUF_ALIGN 4

typedef struct {
	UINT32 R3; // A copy of R13
	UINT32 R4;
	UINT32 R5;
	UINT32 R6;
	UINT32 R7;
	UINT32 R8;
	UINT32 R9;
	UINT32 R10;
	UINT32 R11;
	UINT32 R12;
	UINT32 R13;
	UINT32 R14;
} EFI_ALIGN(JMPBUF_ALIGN) jmp_buf[1];

#endif /* GNU_EFI_ARM_SETJMP_H */
