-[iAUPServer processPersonalizationInfo:length:]
void __cdecl -[iAUPServer processPersonalizationInfo:length:](iAUPServer *self, SEL a2, char *a3, unsigned int a4)
{
  id v5; // x2
  iAUPServerDelegate *delegate; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( a3 && a4 )
  {
    if ( (*a3 & 0xF) == 1 )
    {
      v5 = -[iAUPServer processManifestProperties:length:](self, "processManifestProperties:length:");
      goto LABEL_7;
    }
    NSLog(&CFSTR("[processPersonalizationInfo] Unsupported infoType = %d\n").isa, a2, (unsigned __int8)*a3);
  }
  else
  {
    NSLog(&CFSTR("[processPersonalizationInfo] Invalid payload length=%d\n").isa, a2, a4);
  }
  v5 = 0LL;
LABEL_7:
  delegate = self->_delegate;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[iAUPServerDelegate processPersonalizationInfoFromAccessory:](
    delegate,
    "processPersonalizationInfoFromAccessory:",
    v5);
}