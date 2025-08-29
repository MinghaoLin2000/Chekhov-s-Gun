-[FirmwareBundle loadFirmwareImage]
void __cdecl -[FirmwareBundle loadFirmwareImage](FirmwareBundle *self, SEL a2)
{
  if ( -[NSURL checkResourceIsReachableAndReturnError:](
         self->_firmwareLocalURL,
         "checkResourceIsReachableAndReturnError:",
         0LL) )
  {
    self->_firmwareImage = (NSData *)objc_msgSend(
                                       objc_alloc((Class)&OBJC_CLASS___NSData),
                                       "initWithContentsOfURL:",
                                       self->_firmwareLocalURL);
  }
}