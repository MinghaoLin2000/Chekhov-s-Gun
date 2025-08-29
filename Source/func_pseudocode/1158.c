-[DeviceSettingsPhotosViewController fileEventObserver]
FileEventObserver *__cdecl -[DeviceSettingsPhotosViewController fileEventObserver](
        DeviceSettingsPhotosViewController *self,
        SEL a2)
{
  FileEventObserver *fileEventObserver; // x0
  FileEventObserver *v4; // x0
  FileEventObserver *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  fileEventObserver = self->_fileEventObserver;
  if ( !fileEventObserver )
  {
    v4 = objc_alloc_init(&OBJC_CLASS___FileEventObserver);
    v5 = self->_fileEventObserver;
    self->_fileEventObserver = v4;
    objc_release(v5);
    -[FileEventObserver setDelegate:](self->_fileEventObserver, "setDelegate:", self);
    fileEventObserver = self->_fileEventObserver;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(fileEventObserver);
}