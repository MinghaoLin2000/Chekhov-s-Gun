__ZN23CompilerPluginInterfaceC2Ei.cold.1
void __fastcall CompilerPluginInterface::CompilerPluginInterface(__int64 a1)
{
  int v1; // [xsp+0h] [xbp-20h] BYREF
  __int64 v2; // [xsp+4h] [xbp-1Ch]

  v1 = 136315138;
  v2 = a1;
  _os_log_fault_impl(
    (void *)&_mh_execute_header,
    (os_log_t)&_os_log_default,
    OS_LOG_TYPE_FAULT,
    "Failed to dlopen MTLCompiler framework with error: %s",
    (uint8_t *)&v1,
    0xCu);
}