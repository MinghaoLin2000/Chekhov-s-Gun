-[SFUReadChannelNSInputStreamAdaptor setProperty:forKey:]
bool __cdecl -[SFUReadChannelNSInputStreamAdaptor setProperty:forKey:](
        SFUReadChannelNSInputStreamAdaptor *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  __int64 v8; // x0
  void *v9; // x22
  bool v10; // w21

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  if ( (unsigned int)objc_msgSend(v7, "isEqualToString:", NSStreamFileCurrentOffsetKey)
    && (v8 = objc_opt_class(&OBJC_CLASS___NSNumber), (objc_opt_isKindOfClass(v6, v8) & 1) != 0)
    && (unsigned int)-[SFUInputStream canSeek](self->_inputStream, "canSeek") )
  {
    v9 = objc_msgSend(v6, "unsignedIntegerValue");
    -[SFUInputStream seekToOffset:](self->_inputStream, "seekToOffset:", v9);
    v10 = -[SFUInputStream offset](self->_inputStream, "offset") == v9;
  }
  else
  {
    v10 = 0;
  }
  objc_release(v7);
  objc_release(v6);
  return v10;
}