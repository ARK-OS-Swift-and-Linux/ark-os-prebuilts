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

#ifndef GNU_EFI_AARCH64_SETJMP_H
#define GNU_EFI_AARCH64_SETJMP_H

#define JMPBUF_ALIGN 8

typedef struct {
	/* GP regs */
	UINT64	X19;
	UINT64	X20;
	UINT64	X21;
	UINT64	X22;
	UINT64	X23;
	UINT64	X24;
	UINT64	X25;
	UINT64	X26;
	UINT64	X27;
	UINT64	X28;
	UINT64	FP;
	UINT64	LR;
	UINT64	IP0;
	UINT64	_pad1;

	/* FP regs */
	UINT64	D8;
	UINT64	D9;
	UINT64	D10;
	UINT64	D11;
	UINT64	D12;
	UINT64	D13;
	UINT64	D14;
	UINT64	D15;
} EFI_ALIGN(JMPBUF_ALIGN) jmp_buf[1];

#endif /* GNU_EFI_AARCH64_SETJMP_H */
