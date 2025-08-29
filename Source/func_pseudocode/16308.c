-[LegacyAudioAccessory description]
NSString *__cdecl -[LegacyAudioAccessory description](LegacyAudioAccessory *self, SEL a2)
{
  objc_class *v3; // x0
  NSString *v4; // x21
  NSString *v5; // x19
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = (objc_class *)objc_opt_class(self);
  v4 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v3));
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("<%@ serialNumber=%@, _modelName=%@, activeFirmwareVersion=%@, activeANCVersion=%@"),
           v4,
           self->_serialNumber,
           self->_modelName,
           self->_activeFirmwareVersion,
           self->_activeANCVersion));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}