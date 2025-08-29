-[SFUDataRepresentation xmlReaderWithReadCallback:]
_xmlTextReader *__cdecl -[SFUDataRepresentation xmlReaderWithReadCallback:](
        SFUDataRepresentation *self,
        SEL a2,
        void *a3)
{
  id v4; // x2
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(-[SFUDataRepresentation inputStream](self, "inputStream"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return xmlReaderForIO((xmlInputReadCallback)a3, (xmlInputCloseCallback)sub_10016680C, v4, 0LL, 0LL, 0);
}