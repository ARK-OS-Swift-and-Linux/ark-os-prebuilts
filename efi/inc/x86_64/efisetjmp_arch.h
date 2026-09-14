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

#ifndef GNU_EFI_X86_64_SETJMP_H
#define GNU_EFI_X86_64_SETJMP_H

#define JMPBUF_ALIGN 8

typedef struct {
	UINT64	Rbx;
	UINT64	Rsp;
	UINT64	Rbp;

	UINT64	Rdi;
	UINT64	Rsi;
	UINT64	R12;
	UINT64	R13;
	UINT64	R14;
	UINT64	R15;
	UINT64	Rip;
	UINT64	MxCsr;
	UINT8	XmmBuffer[160]; // XMM6 - XMM15
} EFI_ALIGN(JMPBUF_ALIGN) jmp_buf[1];

#endif /* GNU_EFI_X86_64_SETJMP_H */
