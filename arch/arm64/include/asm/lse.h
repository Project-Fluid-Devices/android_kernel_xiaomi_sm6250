/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_LSE_H
#define __ASM_LSE_H

#define __LSE_PREAMBLE	".arch_extension lse\n"

#define ARM64_LSE_ATOMIC_INSN(lse)					\
	__LSE_PREAMBLE lse

#if !(defined(CONFIG_AS_LSE) && defined(CONFIG_ARM64_LSE_ATOMICS))

#ifndef __ASSEMBLER__

#define __LL_SC_INLINE		static inline
#define __LL_SC_PREFIX(x)	x
#define __LL_SC_EXPORT(x)

#endif	/* __ASSEMBLER__ */
#endif	/* CONFIG_AS_LSE && CONFIG_ARM64_LSE_ATOMICS */
#endif	/* __ASM_LSE_H */
