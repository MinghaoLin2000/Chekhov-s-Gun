-[TSPDocumentProperties updateVersionUUID]
void __cdecl -[TSPDocumentProperties updateVersionUUID](TSPDocumentProperties *self, SEL a2)
{
  NSUUID *v3; // x0
  NSUUID *versionUUID; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(+[NSUUID UUID](&OBJC_CLASS___NSUUID, "UUID"));
  versionUUID = self->_versionUUID;
  self->_versionUUID = v3;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(versionUUID);
}