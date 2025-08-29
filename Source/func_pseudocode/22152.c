__ZN23CompilerPluginInterfaceC2Ei
void __fastcall CompilerPluginInterface::CompilerPluginInterface(CompilerPluginInterface *this, int a2)
{
  const char *v3; // x8
  const char *v4; // x0
  void *v5; // x0
  char *v6; // x20

  *((_DWORD *)this + 10) = a2;
  v3 = "/System/Library/PrivateFrameworks/MTLCompiler.framework/Versions/32023/MTLCompiler";
  if ( a2 != 32023 )
    v3 = 0LL;
  if ( a2 == 32024 )
    v4 = "/System/Library/PrivateFrameworks/MTLCompiler.framework/Versions/32024/MTLCompiler";
  else
    v4 = v3;
  v5 = dlopen(v4, 5);
  *(_QWORD *)this = v5;
  if ( v5 )
  {
    *((_QWORD *)this + 1) = dlsym(v5, "MTLCodeGenServiceCreate");
    *((_QWORD *)this + 2) = dlsym(*(void **)this, "MTLCodeGenServiceDestroy");
    *((_QWORD *)this + 3) = dlsym(*(void **)this, "MTLCodeGenServiceBuildRequest");
    *((_QWORD *)this + 4) = dlsym(*(void **)this, "MTLCodeGenServiceSetPluginPath");
  }
  else
  {
    v6 = dlerror();
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_FAULT) )
      CompilerPluginInterface::CompilerPluginInterface(v6);
    *(_OWORD *)((char *)this + 24) = 0u;
    *(_OWORD *)((char *)this + 8) = 0u;
  }
}