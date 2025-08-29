__ZN12ObjConverterD0Ev
void __fastcall ObjConverter::~ObjConverter(ObjConverter *this)
{
  void *v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  ObjConverter::~ObjConverter(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1);
}