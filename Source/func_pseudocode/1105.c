-[DeviceSettingsPhotosViewController loadImageResources]
void __cdecl -[DeviceSettingsPhotosViewController loadImageResources](DeviceSettingsPhotosViewController *self, SEL a2)
{
  id v3; // x20
  id v4; // x20
  id v5; // x20
  id v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSImage glyphImageNamed:](&OBJC_CLASS___NSImage, "glyphImageNamed:", CFSTR("rectangle.stack")));
  -[DeviceSettingsViewController setPlaylistImage:](self, "setPlaylistImage:", v3);
  objc_release(v3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSImage glyphImageNamed:](&OBJC_CLASS___NSImage, "glyphImageNamed:", CFSTR("gear")));
  -[DeviceSettingsViewController setSmartPlaylistImage:](self, "setSmartPlaylistImage:", v4);
  objc_release(v4);
  v5 = objc_retainAutoreleasedReturnValue(+[NSImage glyphImageNamed:](&OBJC_CLASS___NSImage, "glyphImageNamed:", CFSTR("folder")));
  -[DeviceSettingsViewController setFolderImage:](self, "setFolderImage:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(+[NSImage glyphImageNamed:](&OBJC_CLASS___NSImage, "glyphImageNamed:", CFSTR("person.crop.circle")));
  -[DeviceSettingsPhotosViewController setFaceImage:](self, "setFaceImage:", v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}