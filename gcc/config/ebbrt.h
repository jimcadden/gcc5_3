#undef TARGET_OS_CPP_BUILTINS
//FIXME: I don't think these unix defines should be here
#define TARGET_OS_CPP_BUILTINS()                \
  do {                                          \
    builtin_define_std ("ebbrt");               \
    builtin_define_std ("unix");                \
    builtin_assert ("system=ebbrt");            \
    builtin_assert ("system=unix");             \
  } while (0);

#undef STARTFILE_SPEC
#define STARTFILE_SPEC ""

#undef ENDFILE_SPEC
#define ENDFILE_SPEC ""
