-[TSPPackageWriter closeCurrentChannel]
void __cdecl -[TSPPackageWriter closeCurrentChannel](TSPPackageWriter *self, SEL a2)
{
  TSPComponentWriteChannel *componentWriteChannel; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  -[TSPComponentWriteChannel close](self->_componentWriteChannel, "close");
  componentWriteChannel = self->_componentWriteChannel;
  self->_componentWriteChannel = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(componentWriteChannel);
}