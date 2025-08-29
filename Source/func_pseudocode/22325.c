-[ECTITextInputCell setUpFieldEditorAttributes:]
id __cdecl -[ECTITextInputCell setUpFieldEditorAttributes:](ECTITextInputCell *self, SEL a2, id a3)
{
  objc_super v5; // [xsp+0h] [xbp-20h] BYREF

  v5.receiver = self;
  v5.super_class = (Class)&OBJC_CLASS___ECTITextInputCell;
  -[ECTITextInputCell setUpFieldEditorAttributes:](&v5, "setUpFieldEditorAttributes:");
  if ( (unsigned int)objc_msgSend(a3, "isFieldEditor") )
    objc_msgSend(
      a3,
      "setInsertionPointColor:",
      +[NSColor colorWithDeviceWhite:alpha:](&OBJC_CLASS___NSColor, "colorWithDeviceWhite:alpha:", 1.0, 1.0));
  return a3;
}