__ZN9serialize6Subset9serializeERNS_10SerializerE
void __fastcall serialize::Subset::serialize(serialize::Subset *this, serialize::Serializer *a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  serialize::Prim::serialize(this, a2);
  serialize::Serializer::sync((__int64)a2, "faces", (__int64)this + 64);
  serialize::Serializer::sync((unsigned __int8 *)a2, "name", (std::string *)((char *)this + 88));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  serialize::Serializer::sync((unsigned __int8 *)a2, "materialPath", (std::string *)((char *)this + 112));
}