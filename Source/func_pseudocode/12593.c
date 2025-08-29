-[SFUReadChannelNSInputStreamAdaptor propertyForKey:]
id __cdecl -[SFUReadChannelNSInputStreamAdaptor propertyForKey:](
        SFUReadChannelNSInputStreamAdaptor *self,
        SEL a2,
        id a3)
{
  NSNumber *v4; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( (unsigned int)objc_msgSend(a3, "isEqualToString:", NSStreamFileCurrentOffsetKey) )
    v4 = objc_retainAutoreleasedReturnValue(
           +[NSNumber numberWithLongLong:](
             &OBJC_CLASS___NSNumber,
             "numberWithLongLong:",
             -[SFUInputStream offset](self->_inputStream, "offset")));
  else
    v4 = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}