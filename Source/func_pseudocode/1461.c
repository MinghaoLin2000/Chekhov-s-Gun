-[DeviceSettingsTabContentOutlineView indentationPerLevel]
double __cdecl -[DeviceSettingsTabContentOutlineView indentationPerLevel](
        DeviceSettingsTabContentOutlineView *self,
        SEL a2)
{
  unsigned int v3; // w0
  double result; // d0
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v3 = -[DeviceSettingsTabContentOutlineView haveFolders](self, "haveFolders");
  result = 0.0;
  if ( v3 )
  {
    v5.receiver = self;
    v5.super_class = (Class)&OBJC_CLASS___DeviceSettingsTabContentOutlineView;
    -[DeviceSettingsTabContentOutlineView indentationPerLevel](&v5, "indentationPerLevel", 0.0);
  }
  return result;
}