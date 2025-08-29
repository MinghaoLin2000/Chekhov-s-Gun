__ZN25SandboxExtensionContainer25CompilerSandboxExtensionsEv
__int128 *__fastcall SandboxExtensionContainer::CompilerSandboxExtensions(SandboxExtensionContainer *this)
{
  if ( (atomic_load_explicit(
          (atomic_uchar *volatile)&`guard variable for'SandboxExtensionContainer::CompilerSandboxExtensions(void)::singleton,
          memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&`guard variable for'SandboxExtensionContainer::CompilerSandboxExtensions(void)::singleton) )
  {
    xmmword_100008010 = 0u;
    unk_100008020 = 0u;
    SandboxExtensionContainer::CompilerSandboxExtensions(void)::singleton = 0u;
    __cxa_atexit(
      (void (__fastcall *)(void *))SandboxExtensionContainer::~SandboxExtensionContainer,
      &SandboxExtensionContainer::CompilerSandboxExtensions(void)::singleton,
      (void *)&_mh_execute_header);
    __cxa_guard_release(&`guard variable for'SandboxExtensionContainer::CompilerSandboxExtensions(void)::singleton);
  }
  return &SandboxExtensionContainer::CompilerSandboxExtensions(void)::singleton;
}