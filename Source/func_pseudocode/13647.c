-[IWXPCPackageConverter releaseInputSandboxExtensionToken:outputSandBoxToken:]
void __cdecl -[IWXPCPackageConverter releaseInputSandboxExtensionToken:outputSandBoxToken:](
        IWXPCPackageConverter *self,
        SEL a2,
        signed __int64 a3,
        signed __int64 a4)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (a3 & 0x8000000000000000LL) == 0 )
    sandbox_extension_release(a3, a2);
  if ( (a4 & 0x8000000000000000LL) == 0 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    sandbox_extension_release(a4, a2);
  }
}