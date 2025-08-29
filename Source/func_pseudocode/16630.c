-[FirmwareBundle dealloc]
void __cdecl -[FirmwareBundle dealloc](FirmwareBundle *self, SEL a2)
{
  objc_super v3; // [xsp+0h] [xbp-20h] BYREF

  objc_release(self->_firmwareImage);
  objc_release(self->_buildManifest);
  objc_release(self->_hash);
  objc_release(self->_signature);
  objc_release(self->_certificate);
  objc_release(self->_bundleDescription);
  objc_release(self->_firmwareLocalURL);
  -[NSFileHandle uarpCloseAndReturnError:](self->_firmwareFilehandle, "uarpCloseAndReturnError:", 0LL);
  objc_release(self->_firmwareFilehandle);
  v3.receiver = self;
  v3.super_class = (Class)&OBJC_CLASS___FirmwareBundle;
  -[FirmwareBundle dealloc](&v3, "dealloc");
}