-[TSPDocumentProperties versionUUID]
NSUUID *__cdecl -[TSPDocumentProperties versionUUID](TSPDocumentProperties *self, SEL a2)
{
  NSUUID *versionUUID; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  versionUUID = self->_versionUUID;
  if ( !versionUUID )
  {
    -[TSPDocumentProperties updateVersionUUID](self, "updateVersionUUID");
    versionUUID = self->_versionUUID;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(versionUUID);
}