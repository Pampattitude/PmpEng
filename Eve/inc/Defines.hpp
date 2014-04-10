#pragma once

// No dependencies
// This file is to be included before any other header file or global / static declaration

// Always use `INLINE` instead of `inline`
# undef INLINE
# if defined(WIN32) || defined(_WIN32)
#  if defined(FORCE_INLINE)
#   define INLINE		__forceinline	// Should only be defined for the shippable build, i.e. the "Release" build (in VS)
#  else
#   define INLINE		__inline
#  endif // FORCE_INLINE
# else
#  define INLINE		inline
# endif // WIN32

// Always use `NOEXCEPT` instead of `noexcept` (C++11 standard)
# undef NOEXCEPT
# define NOEXCEPT /* not yet implemented */
# if defined(__GNUC__)
#  if ((__GNUC__ == 3) && (__GNUC_MINOR__ >= 7)) || \
	  (__GNUC__ > 3)
#   undef NOEXCEPT
#   define NOEXCEPT noexcept
#  endif
# endif
